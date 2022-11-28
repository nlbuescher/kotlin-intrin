#ifndef JNI_SSE4_1
#define JNI_SSE4_1

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_nativeSSE4_11(JNIEnv*, jobject);

JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1blend_1epi16(JNIEnv* env, jobject, jshortArray a, jshortArray b, jbyte imm8);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1blend_1pd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jbyte imm8);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1blend_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8);
JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1blendv_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b, jbyteArray mask);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1blendv_1pd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jdoubleArray mask);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1blendv_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jfloatArray mask);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1ceil_1pd(JNIEnv* env, jobject, jdoubleArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1ceil_1ps(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1ceil_1sd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1ceil_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cmpeq_1epi64(JNIEnv* env, jobject, jlongArray a, jlongArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepi16_1epi32(JNIEnv* env, jobject, jshortArray a);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepi16_1epi64(JNIEnv* env, jobject, jshortArray a);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepi32_1epi64(JNIEnv* env, jobject, jintArray a);
JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepi8_1epi16(JNIEnv* env, jobject, jbyteArray a);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepi8_1epi32(JNIEnv* env, jobject, jbyteArray a);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepi8_1epi64(JNIEnv* env, jobject, jbyteArray a);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepu16_1epi32(JNIEnv* env, jobject, jshortArray a);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepu16_1epi64(JNIEnv* env, jobject, jshortArray a);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepu32_1epi64(JNIEnv* env, jobject, jintArray a);
JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepu8_1epi16(JNIEnv* env, jobject, jbyteArray a);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepu8_1epi32(JNIEnv* env, jobject, jbyteArray a);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1cvtepu8_1epi64(JNIEnv* env, jobject, jbyteArray a);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1dp_1pd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jbyte imm8);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1dp_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8);
JNIEXPORT jint JNICALL Java_platform_intrin_Sse4_11_sse4_11_1extract_1epi32(JNIEnv* env, jobject, jintArray a, jbyte imm8);
JNIEXPORT jlong JNICALL Java_platform_intrin_Sse4_11_sse4_11_1extract_1epi64(JNIEnv* env, jobject, jlongArray a, jbyte imm8);
JNIEXPORT jbyte JNICALL Java_platform_intrin_Sse4_11_sse4_11_1extract_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyte imm8);
JNIEXPORT jfloat JNICALL Java_platform_intrin_Sse4_11_sse4_11_1extract_1ps(JNIEnv* env, jobject, jfloatArray a, jbyte imm8);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1floor_1pd(JNIEnv* env, jobject, jdoubleArray a);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1floor_1ps(JNIEnv* env, jobject, jfloatArray a);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1floor_1sd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1floor_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1insert_1epi32(JNIEnv* env, jobject, jintArray a, jint i, jbyte imm8);
JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1insert_1epi64(JNIEnv* env, jobject, jlongArray a, jlong i, jbyte imm8);
JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1insert_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyte i, jbyte imm8);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1insert_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1max_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1max_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b);
JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1max_1epu16(JNIEnv* env, jobject, jshortArray a, jshortArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1max_1epu32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1min_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1min_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b);
JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1min_1epu16(JNIEnv* env, jobject, jshortArray a, jshortArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1min_1epu32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1minpos_1epu16(JNIEnv* env, jobject, jshortArray a);
JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1mpsadbw_1epu8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b, jbyte imm8);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1mul_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1mullo_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1packus_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1round_1pd(JNIEnv* env, jobject, jdoubleArray a, jint rounding);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1round_1ps(JNIEnv* env, jobject, jfloatArray a, jint rounding);
JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1round_1sd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jint rounding);
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11_sse4_11_1round_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jint rounding);
//__m128i sse4_1_stream_load_si128(__m128i* mem_addr);
JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11_sse4_11_1test_1all_1ones(JNIEnv* env, jobject, jintArray a);
JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11_sse4_11_1test_1all_1zeros(JNIEnv* env, jobject, jintArray a, jintArray mask);
JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11_sse4_11_1test_1mix_1ones_1zeros(JNIEnv* env, jobject, jintArray a, jintArray mask);
JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11_sse4_11_1testc_1si128(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11_sse4_11_1testnzc_1si128(JNIEnv* env, jobject, jintArray a, jintArray b);
JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11_sse4_11_1testz_1si128(JNIEnv* env, jobject, jintArray a, jintArray b);

#ifdef __cplusplus
}
#endif

#endif // JNI_SSE4_1
