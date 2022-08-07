# Kotlin Intrinsics

[![Maven Central](https://img.shields.io/maven-central/v/io.github.nlbuescher/kotlin-intrin.svg?label=Maven%20Central&logo=apachemaven)](https://search.maven.org/search?q=g:%22io.github.nlbuescher%22%20AND%20a:%22kotlin-intrin%22)

Exposes SSE, SSE2, SSE3, SSSE3, SSE4.1, and SSE4.2 compiler intrincs to Kotlin/Native.

SSE Support can be checked by using the boolean constants defined by the library (simply called SSE, SSE2, etc). This allows changing implementation at runtime based on hardware SSE support:

```kotlin
fun round(x: Vector128): Vector128 = when {
	SSE4_1 -> sse4_1_round_ps(x, SSE4_1_FROUND_NEARBYINT)
	else -> {
		vectorOf(
			round(x.getFloatAt(0)),
			round(x.getFloatAt(1)),
			round(x.getFloatAt(2)),
			round(x.getFloatAt(3)),
		)
	}
}
```
