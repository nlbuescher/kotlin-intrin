#ifndef JNI_SSE3
#define JNI_SSE3

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse3Kt_nativeSSE3(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif

#endif // JNI_SSE3
