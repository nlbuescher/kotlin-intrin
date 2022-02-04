import org.gradle.internal.os.OperatingSystem
import org.jetbrains.kotlin.gradle.plugin.mpp.*
import java.io.*
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

val prefix = if (host.isWindows) "" else "lib"
val extension = if (host.isWindows) "lib" else "a"

kotlin {
	if (!useSingleTarget || host.isLinux) linuxX64()
	if (!useSingleTarget || host.isMacOsX) macosX64()
	if (!useSingleTarget || host.isWindows) mingwX64()

	targets.withType<KotlinNativeTarget> {
		compilations.named("main") {
			cinterops.create("intrin") {
				tasks[interopProcessingTaskName].run {
					subprojects.forEach {
						dependsOn(":${it.name}:assembleRelease")

						// reprocess cinterop if output of c++ compile changes
						inputs.file("${it.name}/build/lib/main/release/$prefix${it.name}.$extension")
					}
				}
				includeDirs(subprojects.map { "${it.name}/src" })
			}

			kotlinOptions.freeCompilerArgs = subprojects.flatMap {
				listOf(
					"-include-binary",
					file("${it.name}/build/lib/main/release/$prefix${it.name}.$extension").absolutePath
				)
			}
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

// PUBLISHING

val properties = Properties().apply {
	load(FileInputStream(projectDir.resolve("local.properties")))
}

val signingKey: String =
	properties.getProperty("signing.key")
		?: System.getenv("SIGNING_KEY")

val signingPassword: String =
	properties.getProperty("signing.password")
		?: System.getenv("SIGNING_PASSWORD")

val ossrhUsername: String by extra(
	properties.getProperty("ossrhUsername")
		?: System.getenv("OSS_USERNAME")
)

val ossrhPassword: String by extra(
	properties.getProperty("ossrhPassword")
		?: System.getenv("OSSRH_PASSWORD")
)

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
