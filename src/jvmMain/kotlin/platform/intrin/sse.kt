@file:Suppress("FunctionName")

package platform.intrin

// need to reference Intrin to load the library
private val sseIntrin = Intrin

private external fun nativeSSE(): Boolean
val SSE: Boolean get() = nativeSSE()

external fun sse_add_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_add_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_and_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_andnot_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpeq_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpeq_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpge_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpge_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpgt_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpgt_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmple_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmple_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmplt_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmplt_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpneq_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpneq_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpnge_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpnge_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpngt_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpngt_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpnle_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpnle_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpnlt_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpnlt_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpord_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpord_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpunord_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_cmpunord_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_comieq_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_comige_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_comigt_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_comile_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_comilt_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_comineq_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_cvt_si2ss(a: FloatArray, b: Int): FloatArray
external fun sse_cvt_ss2si(a: FloatArray): Int
external fun sse_cvtsi32_ss(a: FloatArray, b: Int): FloatArray
external fun sse_cvtsi64_ss(a: FloatArray, b: Long): FloatArray
external fun sse_cvtss_f32(a: FloatArray): Float
external fun sse_cvtss_si32(a: FloatArray): Int
external fun sse_cvtss_si64(a: FloatArray): Long
external fun sse_cvtt_ss2si(a: FloatArray): Int
external fun sse_cvttss_si32(a: FloatArray): Int
external fun sse_cvttss_si64(a: FloatArray): Long
external fun sse_div_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_div_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_get_exception_mask(): UInt
external fun sse_get_exception_state(): UInt
external fun sse_get_flush_zero_mode(): UInt
external fun sse_get_rounding_mode(): UInt
external fun sse_getcsr(): UInt
external fun sse_max_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_max_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_min_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_min_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_move_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_movehl_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_movelh_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_movemask_ps(a: IntArray): Int
external fun sse_mul_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_mul_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_or_ps(a: IntArray, b: IntArray): IntArray
external fun sse_rcp_ps(a: FloatArray): FloatArray
external fun sse_rcp_ss(a: FloatArray): FloatArray
external fun sse_rsqrt_ps(a: FloatArray): FloatArray
external fun sse_rsqrt_ss(a: FloatArray): FloatArray
external fun sse_set_exception_mask(a: UInt)
external fun sse_set_exception_state(a: UInt)
external fun sse_set_flush_zero_mode(a: UInt)
external fun sse_set_ps(e3: Float, e2: Float, e1: Float, e0: Float): FloatArray
external fun sse_set_ps1(a: Float): FloatArray
external fun sse_set_rounding_mode(a: UInt)
external fun sse_set_ss(a: Float): FloatArray
external fun sse_set1_ps(a: Float): FloatArray
external fun sse_setcsr(a: UInt)
external fun sse_setr_ps(e3: Float, e2: Float, e1: Float, e0: Float): FloatArray
external fun sse_setzero_ps(): FloatArray
external fun sse_sfence()
external fun sse_shuffle_ps(a: FloatArray, b: FloatArray, imm8: UInt): FloatArray
external fun sse_sqrt_ps(a: FloatArray): FloatArray
external fun sse_sqrt_ss(a: FloatArray): FloatArray
external fun sse_sub_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_sub_ss(a: FloatArray, b: FloatArray): FloatArray
external fun sse_transpose4_ps(row0: FloatArray, row1: FloatArray, row2: FloatArray, row3: FloatArray)
external fun sse_ucomieq_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_ucomige_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_ucomigt_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_ucomile_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_ucomilt_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_ucomineq_ss(a: FloatArray, b: FloatArray): Boolean
external fun sse_undefined_ps(): FloatArray
external fun sse_unpackhi_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_unpacklo_ps(a: FloatArray, b: FloatArray): FloatArray
external fun sse_xor_ps(a: IntArray, b: IntArray): IntArray
