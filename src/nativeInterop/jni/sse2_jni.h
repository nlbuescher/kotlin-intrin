#ifndef JNI_SSE2
#define JNI_SSE2

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse2Kt_nativeSSE2(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif

#endif // JNI_SSE2
