#include <jni.h>
#include <sse3.h>

#include "sse3_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse3Kt_nativeSSE3(JNIEnv*, jobject) {
	return SSE3;
}

#ifdef __cplusplus
}
#endif
