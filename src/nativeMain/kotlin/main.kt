import platform.intrin.*

fun main() {
	println(
		"""
		SSE:    $SSE
		SSE2:   $SSE2
		SSE3:   $SSE3
		SSSE3:  $SSSE3
		SSE4.1: $SSE4_1
		SSE4.2: $SSE4_2
		AVX:    $AVX
		""".trimIndent()
	)

	println("---\nplus:")
	println(Float4(1f) + Float4(2f))

	println("---\nminus:")
	println(Float4(1f) - Float4(2f))

	println("---\ntimes:")
	println(Float4(1f) * Float4(2f))

	println("---\ndiv:")
	println(Float4(1f) / Float4(2f))

	println("---\nrem:")
	println(Float4(1f) % Float4(2f))

	println("---\nround:")
	println(round(Float4(1.5f)))

	println("---\nfloor:")
	println(floor(Float4(1.5f)))
}
