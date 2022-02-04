plugins {
	id("cpp-library")
}

val compilerOpts: List<String> by rootProject.extra

library {
	linkage.set(listOf(Linkage.STATIC))

	source.from("src")
	publicHeaders.from("src")

	tasks.withType<CppCompile> {
		compilerArgs.addAll("-std=c++20", "-msse3")
	}
}
