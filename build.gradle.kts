import org.gradle.internal.os.OperatingSystem
import org.jetbrains.kotlin.gradle.plugin.mpp.*
import java.util.*

plugins {
	kotlin("multiplatform") version "1.6.10"
	id("org.jetbrains.dokka") version "1.6.10"
	id("maven-publish")
	id("signing")
}

group = "io.github.nlbuescher"
version = "1.0.0-SNAPSHOT"

repositories {
	mavenCentral()
}

val host: OperatingSystem = OperatingSystem.current()
val useSingleTarget: Boolean = System.getProperty("idea.active") == "true"

val intrinNames = listOf("sse", "sse2")

//region: C++

val konanDeps = file(System.getProperty("user.home")).resolve(".konan/dependencies")

val binDir = when {
	host.isLinux -> konanDeps.resolve("x86_64-unknown-linux-gnu-gcc-8.3.0-glibc-2.19-kernel-4.9-2/bin")
	else -> error("unknown host '${host.name}'")
}

val gpp = when {
	host.isLinux -> binDir.resolve("x86_64-unknown-linux-gnu-g++")
	else -> error("unknown host '${host.name}'")
}

val ar = when {
	host.isLinux -> binDir.resolve("x86_64-unknown-linux-gnu-ar")
	else -> error("unknown host '${host.name}'")
}

val srcDir = projectDir.resolve("src/nativeInterop/cinterop/intrin")
val outDir = buildDir.resolve("intrin")

val compileTasks = intrinNames.map { name ->
	tasks.register<Exec>("compile${name.capitalize()}") {
		group = "build"

		inputs.files(srcDir.listFiles { _, filename -> filename.startsWith(name) })
		outputs.file(outDir.resolve("$name.o"))

		executable(gpp)
		args("-std=c++17", "-O3", "-m$name", "-c", "-o", outDir.resolve("$name.o"), srcDir.resolve("$name.cpp"))
	}
}

val compileIntrin by tasks.registering(Exec::class) {
	group = "build"

	compileTasks.forEach {
		dependsOn(it)
	}
	inputs.files(srcDir.listFiles { _, name -> name.endsWith(".h") })
	inputs.file(srcDir.resolve("intrin.cpp"))
	outputs.file(outDir.resolve("intrin.o"))

	executable(gpp)
	args("-std=c++17", "-O3", "-c", "-o", outDir.resolve("intrin.o"), srcDir.resolve("intrin.cpp"))
}

val assembleIntrin by tasks.registering(Exec::class) {
	group = "build"

	dependsOn(compileIntrin)

	compileTasks.forEach {
		inputs.files(it.get().outputs.files)
	}
	inputs.files(compileIntrin.get().outputs.files)
	outputs.file(outDir.resolve("libintrin.a"))

	executable(ar)
	args("-rcs", outDir.resolve("libintrin.a"), outDir.resolve("intrin.o"))
	args(intrinNames.map { outDir.resolve("$it.o") })
}

//endregion: C++

//region: KOTLIN

kotlin {
	if (!useSingleTarget || host.isLinux) linuxX64()
	if (!useSingleTarget || host.isMacOsX) macosX64()
	if (!useSingleTarget || host.isWindows) mingwX64()

	targets.withType<KotlinNativeTarget> {
		compilations.named("main") {
			cinterops.create("intrin") {
				tasks[interopProcessingTaskName].run {
					dependsOn(assembleIntrin)
					inputs.files(srcDir.listFiles { _, name -> name.endsWith(".h") })
					inputs.files(assembleIntrin.get().outputs.files)
				}
				includeDirs(srcDir)
			}

			kotlinOptions.freeCompilerArgs = listOf(
				"-include-binary", outDir.resolve("libintrin.a").absolutePath
			)
		}
	}

	sourceSets {
		targets.withType<KotlinNativeTarget> {
			get("${name}Main").apply {
				kotlin.srcDir("src/nativeMain/kotlin")
			}
			get("${name}Test").apply {
				kotlin.srcDir("src/nativeTest/kotlin")
				dependencies {
					implementation(kotlin("test"))
				}
			}
		}
	}
}

//endregion: KOTLIN

//region: PUBLISHING

val properties = Properties().apply {
	val file = projectDir.resolve("local.properties")
	if (file.exists()) {
		load(file.inputStream())
	}
}

val signingKey: String? =
	properties.getProperty("signing.key")
		?: System.getenv("SIGNING_KEY")

val signingPassword: String? =
	properties.getProperty("signing.password")
		?: System.getenv("SIGNING_PASSWORD")

val ossrhUsername: String? =
	properties.getProperty("ossrhUsername")
		?: System.getenv("OSS_USERNAME")

val ossrhPassword: String? =
	properties.getProperty("ossrhPassword")
		?: System.getenv("OSSRH_PASSWORD")

val dokkaJar by tasks.registering(Jar::class) {
	dependsOn(tasks.dokkaHtml)
	archiveClassifier.set("javadoc")
	from(tasks.dokkaHtml.get().outputDirectory)
}

signing {
	useInMemoryPgpKeys(signingKey, signingPassword)
	sign(publishing.publications)
}

publishing {
	repositories {
		maven {
			name = "OSS"
			url = if ("$version".endsWith("SNAPSHOT"))
				uri("https://s01.oss.sonatype.org/content/repositories/snapshots")
			else
				uri("https://s01.oss.sonatype.org/service/local/staging/deploy/maven2")
			credentials {
				username = ossrhUsername
				password = ossrhPassword
			}
		}
	}
	publications {
		withType<MavenPublication> {
			artifact(dokkaJar)
			pom {
				name.set(rootProject.name)
				description.set("CPU Intrinsics for Kotlin/Native")
				url.set("https://github.com/nlbuescher/kotlin-intrin")
				licenses {
					license {
						name.set("MIT")
						url.set("https://opensource.org/licenses/MIT")
					}
				}
				issueManagement {
					system.set("Github")
					url.set("https://github.com/nlbuescher/kotlin-intrin/issues")
				}
				scm {
					connection.set("https://github.com/nlbuescher/kotlin-intrin.git")
					url.set("https://github.com/nlbuescher/kotlin-intrin")
				}
				developers {
					developer {
						name.set("Nicola Büscher")
						email.set("nicolalucasbuescher@gmail.com")
					}
				}
			}
		}
	}
}

//endregion: PUBLISHING
