#ifndef SSE4_1_H
#define SSE4_1_H

#ifndef __cplusplus
#include <stdbool.h>
#endif

extern const bool SSE4_1;

#ifndef __m128
typedef float __m128 __attribute__((__vector_size__(16)));
#endif

#ifndef __m128d
typedef double __m128d __attribute((__vector_size__(16)));
#endif

#ifndef __m128i
typedef long long __m128i __attribute((__vector_size__(16)));
#endif

#ifdef __cplusplus
extern "C" {
#endif

const int MM_FROUND_TO_NEAREST_INT  = 0x00;
const int MM_FROUND_TO_NEG_INF      = 0x01;
const int MM_FROUND_TO_POS_INF      = 0x02;
const int MM_FROUND_TO_ZERO         = 0x03;
const int MM_FROUND_CUR_DIRECTION   = 0x04;

const int MM_FROUND_RAISE_EXC       = 0x00;
const int MM_FROUND_NO_EXC          = 0x08;

const int MM_FROUND_NINT        = (MM_FROUND_RAISE_EXC | MM_FROUND_TO_NEAREST_INT);
const int MM_FROUND_FLOOR       = (MM_FROUND_RAISE_EXC | MM_FROUND_TO_NEG_INF);
const int MM_FROUND_CEIL        = (MM_FROUND_RAISE_EXC | MM_FROUND_TO_POS_INF);
const int MM_FROUND_TRUNC       = (MM_FROUND_RAISE_EXC | MM_FROUND_TO_ZERO);
const int MM_FROUND_RINT        = (MM_FROUND_RAISE_EXC | MM_FROUND_CUR_DIRECTION);
const int MM_FROUND_NEARBYINT   = (MM_FROUND_NO_EXC | MM_FROUND_CUR_DIRECTION);

__m128i sse4_1_blend_epi16(__m128i a, __m128i b, const int imm8);

__m128d sse4_1_blend_pd(__m128d a, __m128d b, const int imm8);

__m128 sse4_1_blend_ps(__m128 a, __m128 b, const int imm8);

__m128i sse4_1_blendv_epi8(__m128i a, __m128i b, __m128i mask);

__m128d sse4_1_blendv_pd(__m128d a, __m128d b, __m128d mask);

__m128 sse4_1_blendv_ps(__m128 a, __m128 b, __m128 mask);

__m128d sse4_1_ceil_pd(__m128d a);

__m128 sse4_1_ceil_ps(__m128 a);

__m128d sse4_1_ceil_sd(__m128d a, __m128d b);

__m128 sse4_1_ceil_ss(__m128 a, __m128 b);

__m128i sse4_1_cmpeq_epi64(__m128i a, __m128i b);

__m128i sse4_1_cvtepi16_epi32(__m128i a);

__m128i sse4_1_cvtepi16_epi64(__m128i a);

__m128i sse4_1_cvtepi32_epi64(__m128i a);

__m128i sse4_1_cvtepi8_epi16(__m128i a);

__m128i sse4_1_cvtepi8_epi32(__m128i a);

__m128i sse4_1_cvtepi8_epi64(__m128i a);

__m128i sse4_1_cvtepu16_epi32(__m128i a);

__m128i sse4_1_cvtepu16_epi64(__m128i a);

__m128i sse4_1_cvtepu32_epi64(__m128i a);

__m128i sse4_1_cvtepu8_epi16(__m128i a);

__m128i sse4_1_cvtepu8_epi32(__m128i a);

__m128i sse4_1_cvtepu8_epi64(__m128i a);

__m128d sse4_1_dp_pd(__m128d a, __m128d b, const int imm8);

__m128 sse4_1_dp_ps(__m128 a, __m128 b, const int imm8);

int sse4_1_extract_epi32(__m128i a, const int imm8);

long long sse4_1_extract_epi64(__m128i a, const int imm8);

int sse4_1_extract_epi8(__m128i a, const int imm8);

int sse4_1_extract_ps(__m128 a, const int imm8);

__m128d sse4_1_floor_pd(__m128d a);

__m128 sse4_1_floor_ps(__m128 a);

__m128d sse4_1_floor_sd(__m128d a, __m128d b);

__m128 sse4_1_floor_ss(__m128 a, __m128 b);

__m128i sse4_1_insert_epi32(__m128i a, int i, const int imm8);

__m128i sse4_1_insert_epi64(__m128i a, long long i, const int imm8);

__m128i sse4_1_insert_epi8(__m128i a, int i, const int imm8);

__m128 sse4_1_insert_ps(__m128 a, __m128 b, const int imm8);

__m128i sse4_1_max_epi32(__m128i a, __m128i b);

__m128i sse4_1_max_epi8(__m128i a, __m128i b);

__m128i sse4_1_max_epu16(__m128i a, __m128i b);

__m128i sse4_1_max_epu32(__m128i a, __m128i b);

__m128i sse4_1_min_epi32(__m128i a, __m128i b);

__m128i sse4_1_min_epi8(__m128i a, __m128i b);

__m128i sse4_1_min_epu16(__m128i a, __m128i b);

__m128i sse4_1_min_epu32(__m128i a, __m128i b);

__m128i sse4_1_minpos_epu16(__m128i a);

__m128i sse4_1_mpsadbw_epu8(__m128i a, __m128i b, const int imm8);

__m128i sse4_1_mul_epi32(__m128i a, __m128i b);

__m128i sse4_1_mullo_epi32(__m128i a, __m128i b);

__m128i sse4_1_packus_epi32(__m128i a, __m128i b);

__m128d sse4_1_round_pd(__m128d a, int rounding);

__m128 sse4_1_round_ps(__m128 a, int rounding);

__m128d sse4_1_round_sd(__m128d a, __m128d b, int rounding);

__m128 sse4_1_round_ss(__m128 a, __m128 b, int rounding);

__m128i sse4_1_stream_load_si128(__m128i* mem_addr);

int sse4_1_test_all_ones(__m128i a);

int sse4_1_test_all_zeros(__m128i a, __m128i mask);

int sse4_1_test_mix_ones_zeros(__m128i a, __m128i mask);

int sse4_1_testc_si128(__m128i a, __m128i b);

int sse4_1_testnzc_si128(__m128i a, __m128i b);

int sse4_1_testz_si128(__m128i a, __m128i b);

#ifdef __cplusplus
} //extern "C"
#endif

#endif //SSE4_1_H
