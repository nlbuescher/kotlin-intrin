#ifndef JNI_SSSE3
#define JNI_SSSE3

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Ssse3Kt_nativeSSSE3(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif

#endif // JNI_SSSE3
