#include <jni.h>
#include <sse.h>
#include <xmmintrin.h>

#include "sse_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_nativeSSE(JNIEnv*, jobject) {
	return SSE;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1add_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_add_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1add_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_add_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1and_1ps(JNIEnv* env, jobject, jintArray a, jintArray b) {
	auto* nativeA = env->GetIntArrayElements(a, nullptr);
	auto* nativeB = env->GetIntArrayElements(b, nullptr);
	auto result = env->NewIntArray(4);
	auto* nativeResult = env->GetIntArrayElements(result, nullptr);
	_mm_store_ps((float*)nativeResult, _mm_and_ps(_mm_load_ps((float*)nativeA), _mm_load_ps((float*)nativeB)));
	env->ReleaseIntArrayElements(result, nativeResult, 0);
	env->ReleaseIntArrayElements(b, nativeB, 0);
	env->ReleaseIntArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1andnot_1ps(JNIEnv* env, jobject, jintArray a, jintArray b) {
	auto* nativeA = env->GetIntArrayElements(a, nullptr);
	auto* nativeB = env->GetIntArrayElements(b, nullptr);
	auto result = env->NewIntArray(4);
	auto* nativeResult = env->GetIntArrayElements(result, nullptr);
	_mm_store_ps((float*)nativeResult, _mm_andnot_ps(_mm_load_ps((float*)nativeA), _mm_load_ps((float*)nativeB)));
	env->ReleaseIntArrayElements(result, nativeResult, 0);
	env->ReleaseIntArrayElements(b, nativeB, 0);
	env->ReleaseIntArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpeq_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpeq_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpeq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpeq_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpge_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpge_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpge_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpge_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpgt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpgt_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpgt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpgt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmple_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmple_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmple_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmple_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmplt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmplt_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmplt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmplt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpneq_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpneq_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpneq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpneq_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnge_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpnge_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnge_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpnge_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpngt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpngt_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpngt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpngt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnle_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpnle_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnle_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpnle_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnlt_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpnlt_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpnlt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpnlt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpord_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpord_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpord_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpord_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpunord_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpunord_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cmpunord_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cmpunord_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comieq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_comieq_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comige_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_comige_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comigt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_comigt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comile_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_comile_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comilt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_comilt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1comineq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_comineq_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cvt_1si2ss(JNIEnv* env, jobject, jfloatArray a, jint b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cvt_si2ss(_mm_load_ps(nativeA), b));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvt_1ss2si(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvt_ss2si(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cvtsi32_1ss(JNIEnv* env, jobject, jfloatArray a, jint b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cvtsi32_ss(_mm_load_ps(nativeA), b));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1cvtsi64_1ss(JNIEnv* env, jobject, jfloatArray a, jlong b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_cvtsi64_ss(_mm_load_ps(nativeA), b));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloat JNICALL Java_platform_intrin_SseKt_sse_1cvtss_1f32(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvtss_f32(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvtss_1si32(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvtss_si32(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jlong JNICALL Java_platform_intrin_SseKt_sse_1cvtss_1si64(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvtss_si64(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvtt_1ss2si(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvtt_ss2si(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1cvttss_1si32(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvttss_si32(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jlong JNICALL Java_platform_intrin_SseKt_sse_1cvttss_1si64(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_cvttss_si64(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1div_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_div_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1div_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_div_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
//void sse_free(void* mem_addr) { _mm_free(mem_addr); }
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1exception_1mask(JNIEnv*, jobject) {
	return _MM_GET_EXCEPTION_MASK();
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1exception_1state(JNIEnv*, jobject) {
	return _MM_GET_EXCEPTION_STATE();
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1flush_1zero_1mode(JNIEnv*, jobject) {
	return _MM_GET_FLUSH_ZERO_MODE();
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1get_1rounding_1mode(JNIEnv*, jobject) {
	return _MM_GET_ROUNDING_MODE();
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1getcsr(JNIEnv*, jobject) {
	return _mm_getcsr();
}
//__m128 sse_load_ps(const float* mem_addr) { return _mm_load_ps(mem_addr); }
//__m128 sse_load_ps1(const float* mem_addr) { return _mm_load_ps1(mem_addr); }
//__m128 sse_load_ss(const float* mem_addr) { return _mm_load_ss(mem_addr); }
//__m128 sse_load1_ps(const float* mem_addr) { return _mm_load1_ps(mem_addr); }
//__m128 sse_loadr_ps(const float* mem_addr) { return _mm_loadr_ps(mem_addr); }
//__m128 sse_loadu_ps(const float* mem_addr) { return _mm_loadu_ps(mem_addr); }
//void* sse_malloc(size_t size, size_t align) { return _mm_malloc(size, align); }
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1max_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_max_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1max_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_max_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1min_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_min_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1min_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_min_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1move_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_move_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1movehl_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_movehl_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1movelh_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_movelh_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jint JNICALL Java_platform_intrin_SseKt_sse_1movemask_1ps(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = _mm_movemask_ps(_mm_load_ps(nativeA));
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1mul_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_mul_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1mul_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_mul_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1or_1ps(JNIEnv* env, jobject, jintArray a, jintArray b) {
	auto* nativeA = env->GetIntArrayElements(a, nullptr);
	auto* nativeB = env->GetIntArrayElements(b, nullptr);
	auto result = env->NewIntArray(4);
	auto* nativeResult = env->GetIntArrayElements(result, nullptr);
	_mm_store_ps((float*)nativeResult, _mm_or_ps(_mm_load_ps((float*)nativeA), _mm_load_ps((float*)nativeB)));
	env->ReleaseIntArrayElements(result, nativeResult, 0);
	env->ReleaseIntArrayElements(b, nativeB, 0);
	env->ReleaseIntArrayElements(a, nativeA, 0);
	return result;
}
//namespace prefetch {
//	using function = void(*)(const int8_t*);
//	static const function map[4] {
//		[](const int8_t* p) { return _mm_prefetch((const char*)p, 0); },
//		[](const int8_t* p) { return _mm_prefetch((const char*)p, 1); },
//		[](const int8_t* p) { return _mm_prefetch((const char*)p, 2); },
//		[](const int8_t* p) { return _mm_prefetch((const char*)p, 3); },
//	};
//} // namespace prefetch
//void sse_prefetch(const int8_t* p, jint i) { prefetch::map[i & 0x3](p); }
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rcp_1ps(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_rcp_ps(_mm_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rcp_1ss(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_rcp_ss(_mm_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rsqrt_1ps(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_rsqrt_ps(_mm_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1rsqrt_1ss(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_rsqrt_ss(_mm_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1exception_1mask(JNIEnv*, jobject, jint a) {
	_MM_SET_EXCEPTION_MASK(a);
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1exception_1state(JNIEnv*, jobject, jint a) {
	_MM_SET_EXCEPTION_STATE(a);
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1flush_1zero_1mode(JNIEnv*, jobject, jint a) {
	_MM_SET_FLUSH_ZERO_MODE(a);
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set_1ps(JNIEnv* env, jobject, jfloat e3, jfloat e2, jfloat e1, jfloat e0) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_set_ps(e3, e2, e1, e0));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set_1ps1(JNIEnv* env, jobject, jfloat a) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_set_ps1(a));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1set_1rounding_1mode(JNIEnv*, jobject, jint a) {
	_MM_SET_ROUNDING_MODE(a);
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set_1ss(JNIEnv* env, jobject, jfloat a) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_set_ss(a));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1set1_1ps(JNIEnv* env, jobject, jfloat a) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_set1_ps(a));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1setcsr(JNIEnv*, jobject, jint a) {
	_mm_setcsr(a);
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1setr_1ps(JNIEnv* env, jobject, jfloat e3, jfloat e2, jfloat e1, jfloat e0) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_setr_ps(e3, e2, e1, e0));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1setzero_1ps(JNIEnv* env, jobject) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_setzero_ps());
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1sfence(JNIEnv*, jobject) {
	_mm_sfence();
}
namespace shuffle_ps {
	using function = __m128(*)(__m128, __m128);
	const function map[256] {
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x00); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x01); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x02); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x03); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x04); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x05); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x06); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x07); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x08); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x09); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x0A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x0B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x0C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x0D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x0E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x0F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x10); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x11); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x12); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x13); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x14); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x15); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x16); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x17); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x18); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x19); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x1A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x1B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x1C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x1D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x1E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x1F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x20); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x21); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x22); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x23); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x24); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x25); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x26); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x27); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x28); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x29); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x2A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x2B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x2C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x2D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x2E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x2F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x30); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x31); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x32); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x33); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x34); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x35); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x36); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x37); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x38); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x39); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x3A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x3B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x3C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x3D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x3E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x3F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x40); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x41); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x42); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x43); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x44); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x45); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x46); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x47); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x48); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x49); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x4A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x4B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x4C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x4D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x4E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x4F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x50); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x51); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x52); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x53); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x54); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x55); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x56); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x57); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x58); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x59); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x5A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x5B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x5C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x5D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x5E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x5F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x60); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x61); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x62); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x63); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x64); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x65); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x66); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x67); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x68); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x69); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x6A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x6B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x6C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x6D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x6E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x6F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x70); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x71); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x72); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x73); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x74); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x75); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x76); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x77); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x78); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x79); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x7A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x7B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x7C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x7D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x7E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x7F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x80); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x81); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x82); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x83); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x84); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x85); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x86); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x87); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x88); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x89); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x8A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x8B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x8C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x8D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x8E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x8F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x90); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x91); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x92); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x93); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x94); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x95); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x96); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x97); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x98); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x99); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x9A); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x9B); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x9C); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x9D); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x9E); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0x9F); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA0); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA1); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA2); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA3); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA4); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA5); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA6); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA7); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA8); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xA9); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xAA); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xAB); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xAC); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xAD); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xAE); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xAF); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB0); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB1); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB2); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB3); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB4); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB5); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB6); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB7); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB8); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xB9); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xBA); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xBB); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xBC); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xBD); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xBE); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xBF); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC0); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC1); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC2); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC3); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC4); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC5); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC6); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC7); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC8); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xC9); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xCA); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xCB); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xCC); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xCD); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xCE); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xCF); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD0); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD1); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD2); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD3); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD4); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD5); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD6); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD7); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD8); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xD9); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xDA); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xDB); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xDC); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xDD); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xDE); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xDF); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE0); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE1); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE2); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE3); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE4); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE5); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE6); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE7); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE8); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xE9); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xEA); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xEB); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xEC); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xED); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xEE); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xEF); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF0); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF1); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF2); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF3); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF4); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF5); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF6); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF7); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF8); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xF9); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xFA); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xFB); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xFC); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xFD); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xFE); },
		[](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0xFF); },
	};
} // namespace shuffle_ps
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1shuffle_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, shuffle_ps::map[imm8](_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sqrt_1ps(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_sqrt_ps(_mm_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sqrt_1ss(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_sqrt_ss(_mm_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
//void sse_store_ps(float* mem_addr, __m128 a) { _mm_store_ps(mem_addr, a); }
//void sse_store_ps1(float* mem_addr, __m128 a) { _mm_store_ps1(mem_addr, a); }
//void sse_store_ss(float* mem_addr, __m128 a) { _mm_store_ss(mem_addr, a); }
//void sse_store1_ps(float* mem_addr, __m128 a) { _mm_store1_ps(mem_addr, a); }
//void sse_storer_ps(float* mem_addr, __m128 a) { _mm_storer_ps(mem_addr, a); }
//void sse_storeu_ps(float* mem_addr, __m128 a) { _mm_storeu_ps(mem_addr, a); }
//void sse_stream_ps(float* mem_addr, __m128 a) { _mm_stream_ps(mem_addr, a); }
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sub_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_sub_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1sub_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_sub_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT void JNICALL Java_platform_intrin_SseKt_sse_1transpose4_1ps(JNIEnv* env, jobject, jfloatArray row0, jfloatArray row1, jfloatArray row2, jfloatArray row3) {
	auto* nativeRow0 = env->GetFloatArrayElements(row0, nullptr);
	auto* nativeRow1 = env->GetFloatArrayElements(row1, nullptr);
	auto* nativeRow2 = env->GetFloatArrayElements(row2, nullptr);
	auto* nativeRow3 = env->GetFloatArrayElements(row3, nullptr);
	auto vectorRow0 = _mm_load_ps(nativeRow0);
	auto vectorRow1 = _mm_load_ps(nativeRow1);
	auto vectorRow2 = _mm_load_ps(nativeRow2);
	auto vectorRow3 = _mm_load_ps(nativeRow3);
	_MM_TRANSPOSE4_PS(vectorRow0, vectorRow1, vectorRow2, vectorRow3);
	_mm_store_ps(nativeRow3, vectorRow3);
	_mm_store_ps(nativeRow2, vectorRow2);
	_mm_store_ps(nativeRow1, vectorRow1);
	_mm_store_ps(nativeRow0, vectorRow0);
	env->ReleaseFloatArrayElements(row3, nativeRow3, 0);
	env->ReleaseFloatArrayElements(row2, nativeRow2, 0);
	env->ReleaseFloatArrayElements(row1, nativeRow1, 0);
	env->ReleaseFloatArrayElements(row0, nativeRow0, 0);
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomieq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_ucomieq_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomige_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_ucomige_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomigt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_ucomigt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomile_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_ucomile_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomilt_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_ucomilt_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jboolean JNICALL Java_platform_intrin_SseKt_sse_1ucomineq_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = _mm_ucomineq_ss(_mm_load_ps(nativeA), _mm_load_ps(nativeB));
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1undefined_1ps(JNIEnv* env, jobject) {
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_undefined_ps());
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1unpackhi_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_unpackhi_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_SseKt_sse_1unpacklo_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	_mm_store_ps(nativeResult, _mm_unpacklo_ps(_mm_load_ps(nativeA), _mm_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}
JNIEXPORT jintArray JNICALL Java_platform_intrin_SseKt_sse_1xor_1ps(JNIEnv* env, jobject, jintArray a, jintArray b) {
	auto* nativeA = env->GetIntArrayElements(a, nullptr);
	auto* nativeB = env->GetIntArrayElements(b, nullptr);
	auto result = env->NewIntArray(4);
	auto* nativeResult = env->GetIntArrayElements(result, nullptr);
	_mm_store_ps((float*)nativeResult, _mm_xor_ps(_mm_load_ps((float*)nativeA), _mm_load_ps((float*)nativeB)));
	env->ReleaseIntArrayElements(result, nativeResult, 0);
	env->ReleaseIntArrayElements(b, nativeB, 0);
	env->ReleaseIntArrayElements(a, nativeA, 0);
	return result;
}

#ifdef __cplusplus
} // extern "C"
#endif
