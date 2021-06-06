import org.gradle.internal.os.OperatingSystem
import org.jetbrains.kotlin.gradle.plugin.mpp.*

plugins {
	id("cpp-library")
	kotlin("multiplatform") version "1.5.0"
}

// CPP

data class CppTarget(
	val name: String,
	val compilerOpts: List<String>,
	val dependencies: List<String> = emptyList(),
)

val cppTargets = listOf(
	CppTarget("sse", listOf("-std=c++20", "-msse")),
	CppTarget("sse2", listOf("-std=c++20", "-msse2")),
	CppTarget("sse3", listOf("-std=c++20", "-msse3")),
	CppTarget("ssse3", listOf("-std=c++20", "-mssse3")),
	CppTarget("sse4_1", listOf("-std=c++20", "-msse4.1")),
	CppTarget("sse4_2", listOf("-std=c++20", "-msse4.2")),
	CppTarget("avx", listOf("-std=c++20", "-mavx")),
	CppTarget("intrin", listOf("-std=c++20"), listOf("sse", "sse2", "sse3", "ssse3", "sse4_1", "sse4_2", "avx")),
)

cppTargets.forEach { (name, compilerOpts, dependencies) ->
	project(name) {
		apply(plugin = "cpp-library")

		library {
			linkage.set(listOf(Linkage.STATIC))

			source.from("src")
			publicHeaders.from("src")

			tasks.withType<CppCompile> {
				compilerArgs.addAll(compilerOpts)
			}

			dependencies {
				dependencies.forEach { dependency ->
					implementation(project(":$dependency"))
				}
			}
		}
	}
}

// KOTLIN

group = "io.github.nlbuescher"
version = "0.0.1-SNAPSHOT"

repositories {
	mavenCentral()
}

val host: OperatingSystem = OperatingSystem.current()
val useSingleTarget: Boolean = System.getProperty("idea.active") == "true"

val prefix = if (host.isWindows) "" else "lib"
val extension = if (host.isWindows) "lib" else "a"

kotlin {
	if (!useSingleTarget || host.isLinux) linuxX64("native")
	if (!useSingleTarget || host.isMacOsX) macosX64("native")
	if (!useSingleTarget || host.isWindows) mingwX64("native")

	targets.withType<KotlinNativeTarget> {
		binaries {
			executable {
				entryPoint = "main"
			}
		}

		compilations.named("main") {
			cinterops.create("intrin") {
				tasks[interopProcessingTaskName].run {
					cppTargets.forEach {
						dependsOn(":${it.name}:assembleRelease")

						// reprocess cinterop if output of c++ compile changes
						inputs.file("${it.name}/build/lib/main/release/$prefix${it.name}.$extension")
					}
				}
				includeDirs(cppTargets.map { "${it.name}/src" })
			}

			kotlinOptions.freeCompilerArgs = cppTargets.flatMap {
				listOf("-include-binary", file("${it.name}/build/lib/main/release/$prefix${it.name}.$extension").absolutePath)
			}
		}
	}
}
