import platform.intrin.*

import kotlin.math.*
import kotlin.random.*
import kotlin.system.*
import kotlin.test.*

class SimdTest {
	lateinit var random: Random

	@BeforeTest
	fun setup() {
		random = Random(420)
	}

	@Test
	fun `simd +`() {
		val vectors = (0 until 10_000_000).map { Float4(random.nextFloat()) to Float4(random.nextFloat()) }
		val time = measureNanoTime {
			vectors.forEach {
				it.first + it.second
			}
		}
		println("${round(time / 1000.0) / 1000} ms")
	}

	@Test
	fun `naive +`() {
		val vectors = (0 until 10_000_000).map { NaiveFloat4(random.nextFloat()) to NaiveFloat4(random.nextFloat()) }
		val time = measureNanoTime {
			vectors.forEach {
				it.first + it.second
			}
		}
		println("${round(time / 1000.0) / 1000} ms")
	}

	@Test
	fun `simd *`() {
		val vectors = (0 until 10_000_000).map { Float4(random.nextFloat()) to Float4(random.nextFloat()) }
		val time = measureNanoTime {
			vectors.forEach {
				it.first * it.second
			}
		}
		println("${round(time / 1000.0) / 1000} ms")
	}

	@Test
	fun `naive *`() {
		val vectors = (0 until 10_000_000).map { NaiveFloat4(random.nextFloat()) to NaiveFloat4(random.nextFloat()) }
		val time = measureNanoTime {
			vectors.forEach {
				it.first * it.second
			}
		}
		println("${round(time / 1000.0) / 1000} ms")
	}
}

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
