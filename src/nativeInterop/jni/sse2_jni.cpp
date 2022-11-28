#include <jni.h>
#include <sse2.h>

#include "sse2_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse2Kt_nativeSSE2(JNIEnv*, jobject) {
	return SSE2;
}

#ifdef __cplusplus
}
#endif
