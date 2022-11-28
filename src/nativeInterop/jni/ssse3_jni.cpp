#include <jni.h>
#include <ssse3.h>

#include "ssse3_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Ssse3Kt_nativeSSSE3(JNIEnv*, jobject) {
	return SSSE3;
}

#ifdef __cplusplus
}
#endif
