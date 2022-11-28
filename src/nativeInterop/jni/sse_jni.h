#ifndef SSE_JNI_H
#define SSE_JNI_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_nativeSSE(JNIEnv*, jobject);

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1add_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1add_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1and_1ps(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1andnot_1ps(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpeq_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpeq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpge_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpge_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpgt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpgt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmple_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmple_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmplt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmplt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpneq_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpneq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnge_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnge_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpngt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpngt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnle_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnle_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnlt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnlt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpord_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpord_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpunord_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpunord_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comieq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comige_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comigt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comile_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comilt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comineq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cvt_1si2ss(JNIEnv* env, jobject, jfloatArray a, jint b);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvt_1ss2si(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cvtsi32_1ss(JNIEnv* env, jobject, jfloatArray a, jint b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cvtsi64_1ss(JNIEnv* env, jobject, jfloatArray a, jlong b);
JNIEXPORT jfloat JNICALL Java_platform_intrin_SseKt_sse_1cvtss_1f32(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvtss_1si32(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jlong JNICALL Java_platform_intrin_SseKt_sse_1cvtss_1si64(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvtt_1ss2si(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvttss_1si32(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jlong JNICALL Java_platform_intrin_SseKt_sse_1cvttss_1si64(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1div_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1div_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
//void sse_free(void* mem_addr);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1exception_1mask(JNIEnv*, jobject);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1exception_1state(JNIEnv*, jobject);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1flush_1zero_1mode(JNIEnv*, jobject);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1rounding_1mode(JNIEnv*, jobject);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1getcsr(JNIEnv*, jobject);
//__m128 sse_load_ps(const float* mem_addr);
//__m128 sse_load_ps1(const float* mem_addr);
//__m128 sse_load_ss(const float* mem_addr);
//__m128 sse_load1_ps(const float* mem_addr);
//__m128 sse_loadr_ps(const float* mem_addr);
//__m128 sse_loadu_ps(const float* mem_addr);
//void* sse_malloc(size_t size, size_t align);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1max_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1max_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1min_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1min_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1move_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1movehl_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1movelh_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1movemask_1ps(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1mul_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1mul_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1or_1ps(JNIEnv* env, jobject, jintArray a, jintArray b);
//void sse_prefetch(const int8_t* p, jint i);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rcp_1ps(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rcp_1ss(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rsqrt_1ps(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rsqrt_1ss(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1exception_1mask(JNIEnv*, jobject, jint a);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1exception_1state(JNIEnv*, jobject, jint a);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1flush_1zero_1mode(JNIEnv*, jobject, jint a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set_1ps(JNIEnv* env, jobject, jfloat e3, jfloat e2, jfloat e1, jfloat e0);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set_1ps1(JNIEnv* env, jobject, jfloat a);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1rounding_1mode(JNIEnv*, jobject, jint a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set_1ss(JNIEnv* env, jobject, jfloat a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set1_1ps(JNIEnv* env, jobject, jfloat a);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1setcsr(JNIEnv*, jobject, jint a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1setr_1ps(JNIEnv* env, jobject, jfloat e3, jfloat e2, jfloat e1, jfloat e0);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1setzero_1ps(JNIEnv* env, jobject);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1sfence(JNIEnv*, jobject);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1shuffle_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sqrt_1ps(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sqrt_1ss(JNIEnv* env, jobject, jfloatArray a);
//void sse_store_ps(float* mem_addr, __m128 a);
//void sse_store_ps1(float* mem_addr, __m128 a);
//void sse_store_ss(float* mem_addr, __m128 a);
//void sse_store1_ps(float* mem_addr, __m128 a);
//void sse_storer_ps(float* mem_addr, __m128 a);
//void sse_storeu_ps(float* mem_addr, __m128 a);
//void sse_stream_ps(float* mem_addr, __m128 a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sub_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sub_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1transpose4_1ps(JNIEnv* env, jobject, jfloatArray row0, jfloatArray row1, jfloatArray row2, jfloatArray row3);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomieq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomige_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomigt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomile_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomilt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomineq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1undefined_1ps(JNIEnv* env, jobject);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1unpackhi_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1unpacklo_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1xor_1ps(JNIEnv* env, jobject, jintArray a, jintArray b);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // SSE_JNI_H
