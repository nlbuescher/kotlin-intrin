#include <iostream>

#include <intrin.h>

#include "intrin_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE(JNIEnv*, jobject) {
	return SSE;
}

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE2(JNIEnv*, jobject) {
	return SSE2;
}

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE3(JNIEnv*, jobject) {
	return SSE3;
}

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSSE3(JNIEnv*, jobject) {
	return SSSE3;
}

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE4_11(JNIEnv*, jobject) {
	return SSE4_1;
}

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE4_12(JNIEnv*, jobject) {
	return SSE4_2;
}

JNIEXPORT jint JNICALL Java_platform_intrin_IntrinKt_nativeSSE4_11_1FROUND_1NEARBYINT() {
	return SSE4_1_FROUND_NEARBYINT;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse_1add_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	sse_store_ps(nativeResult, sse_add_ps(sse_load_ps(nativeA), sse_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse_1sub_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	sse_store_ps(nativeResult, sse_sub_ps(sse_load_ps(nativeA), sse_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse_1mul_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	sse_store_ps(nativeResult, sse_mul_ps(sse_load_ps(nativeA), sse_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse_1div_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	sse_store_ps(nativeResult, sse_div_ps(sse_load_ps(nativeA), sse_load_ps(nativeB)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(b, nativeB, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse4_11_1floor_1ps(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	sse_store_ps(nativeResult, sse4_1_floor_ps(sse_load_ps(nativeA)));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse4_11_1round_1ps(JNIEnv* env, jobject, jfloatArray a, jint rounding) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
	auto result = env->NewFloatArray(4);
	auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
	sse_store_ps(nativeResult, sse4_1_round_ps(sse_load_ps(nativeA), rounding));
	env->ReleaseFloatArrayElements(result, nativeResult, 0);
	env->ReleaseFloatArrayElements(a, nativeA, 0);
	return result;
}

#ifdef __cplusplus
}
#endif
