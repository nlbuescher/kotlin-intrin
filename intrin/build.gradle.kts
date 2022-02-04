plugins {
	id("cpp-library")
}

val compilerOpts: List<String> by rootProject.extra

library {
	linkage.set(listOf(Linkage.STATIC))

	source.from("src")
	publicHeaders.from("src")

	tasks.withType<CppCompile> {
		compilerArgs.addAll("-std=c++20")
	}

	dependencies {
		implementation(project(":sse"))
		implementation(project(":sse2"))
		implementation(project(":sse3"))
		implementation(project(":ssse3"))
		implementation(project(":sse4_1"))
		implementation(project(":sse4_2"))
	}
}
