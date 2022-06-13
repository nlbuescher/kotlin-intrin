#ifndef JNI_INTRIN
#define JNI_INTRIN

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE(JNIEnv*, jobject);
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE2(JNIEnv*, jobject);
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE3(JNIEnv*, jobject);
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSSE3(JNIEnv*, jobject);
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE41(JNIEnv*, jobject);
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE42(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif

#endif // JNI_INTRIN
