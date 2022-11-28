#include <bit>

#include <jni.h>
#include <smmintrin.h>
#include <sse.h>
#include <sse4.1.h>

#include "sse4.1_jni.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_nativeSSE4_11(JNIEnv*, jobject) {
	return SSE4_1;
}

namespace blend_epi16 {
	using function = __m128i(*)(__m128i, __m128i);
	const function map[256] {
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x00); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x01); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x02); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x03); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x04); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x05); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x06); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x07); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x08); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x09); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x0A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x0B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x0C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x0D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x0E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x0F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x10); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x11); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x12); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x13); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x14); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x15); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x16); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x17); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x18); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x19); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x1A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x1B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x1C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x1D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x1E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x1F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x20); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x21); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x22); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x23); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x24); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x25); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x26); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x27); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x28); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x29); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x2A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x2B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x2C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x2D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x2E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x2F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x30); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x31); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x32); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x33); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x34); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x35); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x36); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x37); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x38); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x39); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x3A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x3B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x3C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x3D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x3E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x3F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x40); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x41); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x42); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x43); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x44); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x45); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x46); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x47); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x48); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x49); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x4A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x4B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x4C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x4D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x4E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x4F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x50); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x51); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x52); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x53); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x54); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x55); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x56); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x57); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x58); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x59); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x5A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x5B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x5C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x5D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x5E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x5F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x60); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x61); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x62); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x63); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x64); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x65); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x66); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x67); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x68); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x69); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x6A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x6B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x6C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x6D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x6E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x6F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x70); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x71); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x72); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x73); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x74); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x75); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x76); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x77); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x78); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x79); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x7A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x7B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x7C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x7D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x7E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x7F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x80); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x81); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x82); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x83); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x84); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x85); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x86); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x87); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x88); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x89); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x8A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x8B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x8C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x8D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x8E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x8F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x90); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x91); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x92); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x93); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x94); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x95); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x96); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x97); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x98); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x99); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x9A); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x9B); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x9C); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x9D); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x9E); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0x9F); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA0); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA1); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA2); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA3); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA4); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA5); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA6); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA7); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA8); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xA9); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xAA); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xAB); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xAC); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xAD); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xAE); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xAF); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB0); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB1); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB2); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB3); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB4); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB5); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB6); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB7); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB8); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xB9); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xBA); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xBB); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xBC); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xBD); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xBE); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xBF); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC0); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC1); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC2); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC3); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC4); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC5); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC6); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC7); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC8); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xC9); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xCA); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xCB); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xCC); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xCD); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xCE); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xCF); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD0); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD1); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD2); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD3); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD4); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD5); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD6); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD7); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD8); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xD9); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xDA); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xDB); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xDC); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xDD); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xDE); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xDF); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE0); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE1); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE2); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE3); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE4); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE5); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE6); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE7); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE8); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xE9); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xEA); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xEB); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xEC); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xED); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xEE); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xEF); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF0); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF1); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF2); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF3); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF4); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF5); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF6); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF7); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF8); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xF9); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xFA); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xFB); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xFC); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xFD); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xFE); },
		[](__m128i a, __m128i b) { return _mm_blend_epi16(a, b, 0xFF); },
	};
} // namespace blend_epi16
JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1blend_1epi16(JNIEnv* env, jobject, jshortArray a, jshortArray b, jbyte imm8) {
	auto* nativeA = env->GetShortArrayElements(a, nullptr);
	auto* nativeB = env->GetShortArrayElements(b, nullptr);
    auto result = env->NewShortArray(8);
    auto* nativeResult = env->GetShortArrayElements(result, nullptr);
    _mm_store_si128((__m128i*)nativeResult, blend_epi16::map[imm8](_mm_load_si128((__m128i*)nativeA), _mm_load_si128((__m128i*)nativeB)));
    env->ReleaseShortArrayElements(result, nativeResult, 0);
    env->ReleaseShortArrayElements(b, nativeB, 0);
    env->ReleaseShortArrayElements(a, nativeA, 0);
    return result;
}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1blend_1pd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1blend_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1blendv_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b, jbyteArray mask) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1blendv_1pd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jdoubleArray mask) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1blendv_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jfloatArray mask) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1ceil_1pd(JNIEnv* env, jobject, jdoubleArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1ceil_1ps(JNIEnv* env, jobject, jfloatArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1ceil_1sd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1ceil_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cmpeq_1epi64(JNIEnv* env, jobject, jlongArray a, jlongArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepi16_1epi32(JNIEnv* env, jobject, jshortArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepi16_1epi64(JNIEnv* env, jobject, jshortArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepi32_1epi64(JNIEnv* env, jobject, jintArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepi8_1epi16(JNIEnv* env, jobject, jbyteArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepi8_1epi32(JNIEnv* env, jobject, jbyteArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepi8_1epi64(JNIEnv* env, jobject, jbyteArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepu16_1epi32(JNIEnv* env, jobject, jshortArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepu16_1epi64(JNIEnv* env, jobject, jshortArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepu32_1epi64(JNIEnv* env, jobject, jintArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepu8_1epi16(JNIEnv* env, jobject, jbyteArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepu8_1epi32(JNIEnv* env, jobject, jbyteArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1cvtepu8_1epi64(JNIEnv* env, jobject, jbyteArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1dp_1pd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1dp_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jint JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1extract_1epi32(JNIEnv* env, jobject, jintArray a, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlong JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1extract_1epi64(JNIEnv* env, jobject, jlongArray a, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jbyte JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1extract_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
typedef float(*extract_ps_function)(__m128);
const extract_ps_function extract_ps_map[4] {
	[](__m128 a) { return std::bit_cast<float>(_mm_extract_ps(a, 0)); },
	[](__m128 a) { return std::bit_cast<float>(_mm_extract_ps(a, 1)); },
	[](__m128 a) { return std::bit_cast<float>(_mm_extract_ps(a, 2)); },
	[](__m128 a) { return std::bit_cast<float>(_mm_extract_ps(a, 3)); },
};
JNIEXPORT jfloat JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1extract_1ps(JNIEnv* env, jobject, jfloatArray a, jbyte imm8) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
    auto result = extract_ps_map[imm8](_mm_load_ps(nativeA));
    env->ReleaseFloatArrayElements(a, nativeA, 0);
    return result;
}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1floor_1pd(JNIEnv* env, jobject, jdoubleArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1floor_1ps(JNIEnv* env, jobject, jfloatArray a) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
    auto result = env->NewFloatArray(4);
    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
    _mm_store_ps(nativeResult, _mm_floor_ps(_mm_load_ps(nativeA)));
    env->ReleaseFloatArrayElements(result, nativeResult, 0);
    env->ReleaseFloatArrayElements(a, nativeA, 0);
    return result;
}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1floor_1sd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1floor_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1insert_1epi32(JNIEnv* env, jobject, jintArray a, jint i, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jlongArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1insert_1epi64(JNIEnv* env, jobject, jlongArray a, jlong i, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1insert_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyte i, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1insert_1ps(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1max_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1max_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1max_1epu16(JNIEnv* env, jobject, jshortArray a, jshortArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1max_1epu32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1min_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1min_1epi8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1min_1epu16(JNIEnv* env, jobject, jshortArray a, jshortArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1min_1epu32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jshortArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1minpos_1epu16(JNIEnv* env, jobject, jshortArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jbyteArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1mpsadbw_1epu8(JNIEnv* env, jobject, jbyteArray a, jbyteArray b, jbyte imm8) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1mul_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1mullo_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jintArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1packus_1epi32(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1round_1pd(JNIEnv* env, jobject, jdoubleArray a, jint rounding) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
namespace round_ps {
	using function = __m128(*)(__m128);
	const function map[16] {
		[](__m128 a) { return _mm_round_ps(a,  0); },
		[](__m128 a) { return _mm_round_ps(a,  1); },
		[](__m128 a) { return _mm_round_ps(a,  2); },
		[](__m128 a) { return _mm_round_ps(a,  3); },
		[](__m128 a) { return _mm_round_ps(a,  4); },
		[](__m128 a) { return _mm_round_ps(a,  5); },
		[](__m128 a) { return _mm_round_ps(a,  6); },
		[](__m128 a) { return _mm_round_ps(a,  7); },
		[](__m128 a) { return _mm_round_ps(a,  8); },
		[](__m128 a) { return _mm_round_ps(a,  9); },
		[](__m128 a) { return _mm_round_ps(a, 10); },
		[](__m128 a) { return _mm_round_ps(a, 11); },
		[](__m128 a) { return _mm_round_ps(a, 12); },
		[](__m128 a) { return _mm_round_ps(a, 13); },
		[](__m128 a) { return _mm_round_ps(a, 14); },
		[](__m128 a) { return _mm_round_ps(a, 15); },
	};
} // namespace round_ps
JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1round_1ps(JNIEnv* env, jobject, jfloatArray a, jint rounding) {
	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
    auto result = env->NewFloatArray(4);
    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
    _mm_store_ps(nativeResult, round_ps::map[rounding](_mm_load_ps(nativeA)));
    env->ReleaseFloatArrayElements(result, nativeResult, 0);
    env->ReleaseFloatArrayElements(a, nativeA, 0);
    return result;
}
//JNIEXPORT jdoubleArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1round_1sd(JNIEnv* env, jobject, jdoubleArray a, jdoubleArray b, jint rounding) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jfloatArray JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1round_1ss(JNIEnv* env, jobject, jfloatArray a, jfloatArray b, jint rounding) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1test_1all_1ones(JNIEnv* env, jobject, jintArray a) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1test_1all_1zeros(JNIEnv* env, jobject, jintArray a, jintArray mask) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1test_1mix_1ones_1zeros(JNIEnv* env, jobject, jintArray a, jintArray mask) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1testc_1si128(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1testnzc_1si128(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}
//JNIEXPORT jboolean JNICALL Java_platform_intrin_Sse4_11Kt_sse4_11_1testz_1si128(JNIEnv* env, jobject, jintArray a, jintArray b) {
//	auto* nativeA = env->GetFloatArrayElements(a, nullptr);
//	auto* nativeB = env->GetFloatArrayElements(b, nullptr);
//    auto result = env->NewFloatArray(4);
//    auto* nativeResult = env->GetFloatArrayElements(result, nullptr);
//    sse_store_ps(nativeResult, (sse_load_ps(nativeA), sse_load_ps(nativeB)));
//    env->ReleaseFloatArrayElements(result, nativeResult, 0);
//    env->ReleaseFloatArrayElements(b, nativeB, 0);
//    env->ReleaseFloatArrayElements(a, nativeA, 0);
//    return result;
//}

#ifdef __cplusplus
}
#endif
