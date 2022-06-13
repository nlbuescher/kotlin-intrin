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
		""".trimIndent()
	)
}
