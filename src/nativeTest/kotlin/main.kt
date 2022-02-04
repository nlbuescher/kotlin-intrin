import platform.intrin.*
import kotlin.test.*

@Test
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

	assertEquals(Float4(3f), Float4(1f) + Float4(2f), "plus")
	assertEquals(Float4(-1f), Float4(1f) - Float4(2f), "minus")
	assertEquals(Float4(2f), Float4(1f) * Float4(2f), "times")
	assertEquals(Float4(.5f), Float4(1f) / Float4(2f), "div")
	assertEquals(Float4(1f), Float4(1f) % Float4(2f), "rem")
	assertEquals(Float4(2f), round(Float4(1.5f)), "round")
	assertEquals(Float4(1f), floor(Float4(1.5f)), "floor")
}
