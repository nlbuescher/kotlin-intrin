@file:Suppress("FunctionName")

package platform.intrin

@PublishedApi
internal external fun nativeSSE4_1(): Boolean
inline val SSE4_1: Boolean get() = nativeSSE4_1()

external fun sse4_1_floor_ps(a: FloatArray): FloatArray

external fun sse4_1_round_ps(a: FloatArray, rounding: Int): FloatArray

//TODO functions
