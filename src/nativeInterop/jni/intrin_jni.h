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
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE4_11(JNIEnv*, jobject);
JNIEXPORT jboolean JNICALL Java_platform_intrin_IntrinKt_nativeSSE4_12(JNIEnv*, jobject);

JNIEXPORT jint JNICALL Java_platform_intrin_IntrinKt_nativeSSE4_11_1FROUND_1NEARBYINT();

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse_1add_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_see_1sub_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_see_1mul_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_see_1div_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse4_11_1floor_1ps(JNIEnv* env, jobject, jfloatArray a);

JNIEXPORT jfloatArray JNICALL Java_platform_intrin_IntrinKt_sse4_11_1round_1ps(JNIEnv* env, jobject, jfloatArray a, jint rounding);

#ifdef __cplusplus
}
#endif

#endif // JNI_INTRIN
