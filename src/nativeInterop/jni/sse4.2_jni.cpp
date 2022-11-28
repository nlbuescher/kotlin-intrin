#include <jni.h>
#include <sse4.2.h>

#include "sse4.2_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_12Kt_nativeSSE4_12(JNIEnv*, jobject) {
	return SSE4_2;
}

#ifdef __cplusplus
}
#endif
