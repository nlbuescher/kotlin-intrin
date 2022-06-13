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

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE41(JNIEnv*, jobject) {
	return SSE4_1;
}

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE42(JNIEnv*, jobject) {
	return SSE4_2;
}

#ifdef __cplusplus
}
#endif
