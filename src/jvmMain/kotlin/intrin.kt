package platform.intrin

private object Intrin {
	init {
		System.loadLibrary("intrin_jni")
	}
}

// need to reference Intrin so the init block gets executed
@Suppress("unused")
private val intrin = Intrin

private external fun nativeSSE(): Boolean
private external fun nativeSSE2(): Boolean
private external fun nativeSSE3(): Boolean
private external fun nativeSSSE3(): Boolean
private external fun nativeSSE4_1(): Boolean
private external fun nativeSSE4_2(): Boolean

val SSE: Boolean get() = nativeSSE()
val SSE2: Boolean get() = nativeSSE2()
val SSE3: Boolean get() = nativeSSE3()
val SSSE3: Boolean get() = nativeSSSE3()
val SSE4_1: Boolean get() = nativeSSE4_1()
val SSE4_2: Boolean get() = nativeSSE4_2()

external fun sse_add_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_sub_ps(a: FloatArray, b: FloatArray): FloatArray

external fun sse_mul_ps(a: FloatArray, b: FloatArray): FloatArray

external fun sse_div_ps(a: FloatArray, b: FloatArray): FloatArray

external fun nativeSSE4_1_FROUND_NEARBYINT(): Int

val SSE4_1_FROUND_NEARBYINT get() = nativeSSE4_1_FROUND_NEARBYINT()

external fun sse4_1_round_ps(a: FloatArray, rounding: Int): FloatArray

external fun sse4_1_floor_ps(a: FloatArray): FloatArray
