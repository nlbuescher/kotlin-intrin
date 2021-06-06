#ifndef AVX_H
#define AVX_H

#ifndef __cplusplus
#include <stdbool.h>
#endif

extern const bool AVX;

#ifndef __m256
typedef float __m256 __attribute__((__vector_size__((32))));
#endif

#ifndef __m256d
typedef double __m256d __attribute__((__vector_size__((32))));
#endif

#ifndef __m256i
typedef long long __m256i __attribute__((__vector_size__((32))));
#endif

#ifdef __cplusplus
extern "C" {
#endif

const int CMP_EQ_OQ     = 0x00; // Equal (ordered, non-signaling)
const int CMP_LT_OS     = 0x01; // Less-than (ordered, signaling)
const int CMP_LE_OS     = 0x02; // Less-than-or-equal (ordered, signaling)
const int CMP_UNORD_Q   = 0x03; // Unordered (non-signaling)
const int CMP_NEQ_UQ    = 0x04; // Not-equal (unordered, non-signaling)
const int CMP_NLT_US    = 0x05; // Not-less-than (unordered, signaling)
const int CMP_NLE_US    = 0x06; // Not-less-than-or-equal (unordered, signaling)
const int CMP_ORD_Q     = 0x07; // Ordered (non-signaling)
const int CMP_EQ_UQ     = 0x08; // Equal (unordered, non-signaling)
const int CMP_NGE_US    = 0x09; // Not-greater-than-or-equal (unordered, signaling)
const int CMP_NGT_US    = 0x0A; // Not-greater-than (unordered, signaling)
const int CMP_FALSE_OQ  = 0x0B; // False (ordered, non-signaling)
const int CMP_NEQ_OQ    = 0x0C; // Not-equal (ordered, non-signaling)
const int CMP_GE_OS     = 0x0D; // Greater-than-or-equal (ordered, signaling)
const int CMP_GT_OS     = 0x0E; // Greater-than (ordered, signaling)
const int CMP_TRUE_UQ   = 0x0F; // True (unordered, non-signaling)
const int CMP_EQ_OS     = 0x10; // Equal (ordered, signaling)
const int CMP_LT_OQ     = 0x11; // Less-than (ordered, non-signaling)
const int CMP_LE_OQ     = 0x12; // Less-than-or-equal (ordered, non-signaling)
const int CMP_UNORD_S   = 0x13; // Unordered (signaling)
const int CMP_NEQ_US    = 0x14; // Not-equal (unordered, signaling)
const int CMP_NLT_UQ    = 0x15; // Not-less-than (unordered, non-signaling)
const int CMP_NLE_UQ    = 0x16; // Not-less-than-or-equal (unordered, non-signaling)
const int CMP_ORD_S     = 0x17; // Ordered (signaling)
const int CMP_EQ_US     = 0x18; // Equal (unordered, signaling)
const int CMP_NGE_UQ    = 0x19; // Not-greater-than-or-equal (unordered, non-signaling)
const int CMP_NGT_UQ    = 0x1A; // Not-greater-than (unordered, non-signaling)
const int CMP_FALSE_OS  = 0x1B; // False (ordered, signaling)
const int CMP_NEQ_OS    = 0x1C; // Not-equal (ordered, signaling)
const int CMP_GE_OQ     = 0x1D; // Greater-than-or-equal (ordered, non-signaling)
const int CMP_GT_OQ     = 0x1E; // Greater-than (ordered, non-signaling)
const int CMP_TRUE_US   = 0x1F; // True (unordered, signaling)

__m256d avx256_add_pd(__m256d a, __m256d b);

__m256 avx256_add_ps(__m256 a, __m256 b);

__m256d avx256_addsub_pd(__m256d a, __m256d b);

__m256 avx256_addsub_ps(__m256 a, __m256 b);

__m256d avx256_and_pd(__m256d a, __m256d b);

__m256 avx256_and_ps(__m256 a, __m256 b);

__m256d avx256_andnot_pd(__m256d a, __m256d b);

__m256 avx256_andnot_ps(__m256 a, __m256 b);

__m256d avx256_blend_pd(__m256d a, __m256d b, const int imm8);

__m256 avx256_blend_ps(__m256 a, __m256 b, const int imm8);

__m256d avx256_blendv_pd(__m256d a, __m256d b, __m256d mask);

__m256 avx256_blendv_ps(__m256 a, __m256 b, __m256 mask);

__m256d avx256_broadcast_pd(const __m128d* mem_addr);

__m256 avx256_broadcast_ps(const __m128* mem_addr);

__m256d avx256_broadcast_sd(const double* mem_addr);

__m128 avx_broadcast_ss(const float* mem_addr);

__m256 avx256_broadcast_ss(const float* mem_addr);

__m256 avx256_castpd_ps(__m256d a);

__m256i avx256_castpd_si256(__m256d a);

__m256d avx256_castpd128_pd256(__m128d a);

__m128d avx_castpd256_pd128(__m256d a);

__m256d avx256_castps_pd(__m256 a);

__m256i avx256_castps_si256(__m256 a);

__m256 avx256_castps128_ps256(__m128 a);

__m128 avx_castps256_ps128(__m256 a);

__m256i avx256_castsi128_si256(__m128i a);

__m256d avx256_castsi256_pd(__m256i a);

__m256 avx256_castsi256_ps(__m256i a);

__m128i avx_castsi256_si128(__m256i a);

__m256d avx256_ceil_pd(__m256d a);

__m256 avx256_ceil_ps(__m256 a);

__m128d avx_cmp_pd(__m128d a, __m128d b, const int imm8);

__m256d avx256_cmp_pd(__m256d a, __m256d b, const int imm8);

__m128 avx_cmp_ps(__m128 a, __m128 b, const int imm8);

__m256 avx256_cmp_ps(__m256 a, __m256 b, const int imm8);

__m128d avx_cmp_sd(__m128d a, __m128d b, const int imm8);

__m128 avx_cmp_ss(__m128 a, __m128 b, const int imm8);

__m256d avx256_cvtepi32_pd(__m128i a);

__m256 avx256_cvtepi32_ps(__m256i a);

__m128i avx_cvtpd_epi32(__m256d a);

__m128 avx_cvtpd_ps(__m256d a);

__m256i avx256_cvtps_epi32(__m256 a);

__m256d avx256_cvtps_pd(__m128 a);

double avx256_cvtsd_f64(__m256d a);

int avx256_cvtsi256_si32(__m256i a);

float avx256_cvtss_f32(__m256 a);

__m128i avx_cvttpd_epi32(__m256d a);

__m256i avx256_cvttps_epi32(__m256 a);

__m256d avx256_div_pd(__m256d a, __m256d b);

__m256 avx256_div_ps(__m256 a, __m256 b);

__m256 avx256_dp_ps(__m256 a, __m256 b, const int imm8);

int avx256_extract_epi32(__m256i a, const int index);

long long avx256_extract_epi64(__m256i a, const int index);

__m128d avx_extractf128_pd(__m256d a, const int imm8);

__m128 avx_extractf128_ps(__m256 a, const int imm8);

__m128i avx_extractf128_si256(__m256i a, const int imm8);

__m256d avx256_floor_pd(__m256d a);

__m256 avx256_floor_ps(__m256 a);

__m256d avx256_hadd_pd(__m256d a, __m256d b);

__m256 avx256_hadd_ps(__m256 a, __m256 b);

__m256d avx256_hsub_pd(__m256d a, __m256d b);

__m256 avx256_hsub_ps(__m256 a, __m256 b);

__m256i avx256_insert_epi16(__m256i a, short i, const int index);

__m256i avx256_insert_epi32(__m256i a, int i, const int index);

__m256i avx256_insert_epi64(__m256i a, long long i, const int index);

__m256i avx256_insert_epi8(__m256i a, char i, const int index);

__m256d avx256_insertf128_pd(__m256d a, __m128d b, int imm8);

__m256 avx256_insertf128_ps(__m256 a, __m128 b, int imm8);

__m256i avx256_insertf128_si256(__m256i a, __m128i b, int imm8);

__m256i avx256_lddqu_si256(const __m256i* mem_addr);

__m256d avx256_load_pd(const double* mem_addr);

__m256 avx256_load_ps(const float* mem_addr);

__m256i avx256_load_si256(const __m256i* mem_addr);

__m256d avx256_loadu_pd(const double* mem_addr);

__m256 avx256_loadu_ps(const float* mem_addr);

__m256i avx256_loadu_si256(const __m256i* mem_addr);

__m256 avx256_loadu2_m128(const float* hiaddr, const float* loaddr);

__m256d avx256_loadu2_m128d(const double* hiaddr, const double* loaddr);

__m256i avx256_loadu2_m128i(const __m128i* hiaddr, const __m128i* loaddr);

__m128d avx_maskload_pd(const double* mem_addr, __m128i mask);

__m256d avx256_maskload_pd(const double* mem_addr, __m256i mask);

__m128 avx_maskload_ps(const float* mem_addr, __m128i mask);

__m256 avx256_maskload_ps(const float* mem_addr, __m256i mask);

void avx_maskstore_pd(double* mem_addr, __m128i mask, __m128d a);

void avx256_maskstore_pd(double* mem_addr, __m256i mask, __m256d a);

void avx_maskstore_ps(float* mem_addr, __m128i mask, __m128 a);

void avx256_maskstore_ps(float* mem_addr, __m256i mask, __m256 a);

__m256d avx256_max_pd(__m256d a, __m256d b);

__m256 avx256_max_ps(__m256 a, __m256 b);

__m256d avx256_min_pd(__m256d a, __m256d b);

__m256 avx256_min_ps(__m256 a, __m256 b);

__m256d avx256_movedup_pd(__m256d a);

__m256 avx256_movehdup_ps(__m256 a);

__m256 avx256_moveldup_ps(__m256 a);

int avx256_movemask_pd(__m256d a);

int avx256_movemask_ps(__m256 a);

__m256d avx256_mul_pd(__m256d a, __m256d b);

__m256 avx256_mul_ps(__m256 a, __m256 b);

__m256d avx256_or_pd(__m256d a, __m256d b);

__m256 avx256_or_ps(__m256 a, __m256 b);

__m128d avx_permute_pd(__m128d a, int imm8);

__m256d avx256_permute_pd(__m256d a, int imm8);

__m128 avx_permute_ps(__m128 a, int imm8);

__m256 avx256_permute_ps(__m256 a, int imm8);

__m256d avx256_permute2f128_pd(__m256d a, __m256d b, int imm8);

__m256 avx256_permute2f128_ps(__m256 a, __m256 b, int imm8);

__m256i avx256_permute2f128_si256(__m256i a, __m256i b, int imm8);

__m128d avx_permutevar_pd(__m128d a, __m128i b);

__m256d avx256_permutevar_pd(__m256d a, __m256i b);

__m128 avx_permutevar_ps(__m128 a, __m128i b);

__m256 avx256_permutevar_ps(__m256 a, __m256i b);

__m256 avx256_rcp_ps(__m256 a);

__m256d avx256_round_pd(__m256d a, int rounding);

__m256 avx256_round_ps(__m256 a, int rounding);

__m256 avx256_rsqrt_ps(__m256 a);

__m256i avx256_set_epi16(short e15, short e14, short e13, short e12, short e11, short e10, short e9, short e8, short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0);

__m256i avx256_set_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0);

__m256i avx256_set_epi64x(long long e3, long long e2, long long e1, long long e0);

__m256i avx256_set_epi8(char e31, char e30, char e29, char e28, char e27, char e26, char e25, char e24, char e23, char e22, char e21, char e20, char e19, char e18, char e17, char e16, char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0);

__m256 avx256_set_m128(__m128 hi, __m128 lo);

__m256d avx256_set_m128d(__m128d hi, __m128d lo);

__m256i avx256_set_m128i(__m128i hi, __m128i lo);

__m256d avx256_set_pd(double e3, double e2, double e1, double e0);

__m256 avx256_set_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0);

__m256i avx256_set1_epi16(short a);

__m256i avx256_set1_epi32(int a);

__m256i avx256_set1_epi64x(long long a);

__m256i avx256_set1_epi8(char a);

__m256d avx256_set1_pd(double a);

__m256 avx256_set1_ps(float a);

__m256i avx256_setr_epi16(short e15, short e14, short e13, short e12, short e11, short e10, short e9, short e8, short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0);

__m256i avx256_setr_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0);

__m256i avx256_setr_epi64x(long long e3, long long e2, long long e1, long long e0);

__m256i avx256_setr_epi8(char e31, char e30, char e29, char e28, char e27, char e26, char e25, char e24, char e23, char e22, char e21, char e20, char e19, char e18, char e17, char e16, char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0);

__m256 avx256_setr_m128(__m128 lo, __m128 hi);

__m256d avx256_setr_m128d(__m128d lo, __m128d hi);

__m256i avx256_setr_m128i(__m128i lo, __m128i hi);

__m256d avx256_setr_pd(double e3, double e2, double e1, double e0);

__m256 avx256_setr_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0);

__m256d avx256_setzero_pd();

__m256 avx256_setzero_ps();

__m256i avx256_setzero_si256();

__m256d avx256_shuffle_pd(__m256d a, __m256d b, const int imm8);

__m256 avx256_shuffle_ps(__m256 a, __m256 b, const int imm8);

__m256d avx256_sqrt_pd(__m256d a);

__m256 avx256_sqrt_ps(__m256 a);

void avx256_store_pd(double* mem_addr, __m256d a);

void avx256_store_ps(float* mem_addr, __m256 a);

void avx256_store_si256(__m256i* mem_addr, __m256i a);

void avx256_storeu_pd(double* mem_addr, __m256d a);

void avx256_storeu_ps(float* mem_addr, __m256 a);

void avx256_storeu_si256(__m256i* mem_addr, __m256i a);

void avx256_storeu2_m128(float* hiaddr, float* loaddr, __m256 a);

void avx256_storeu2_m128d(double* hiaddr, double* loaddr, __m256d a);

void avx256_storeu2_m128i(__m128i* hiaddr, __m128i* loaddr, __m256i a);

void avx256_stream_pd(double* mem_addr, __m256d a);

void avx256_stream_ps(float* mem_addr, __m256 a);

void avx256_stream_si256(__m256i* mem_addr, __m256i a);

__m256d avx256_sub_pd(__m256d a, __m256d b);

__m256 avx256_sub_ps(__m256 a, __m256 b);

int avx_testc_pd(__m128d a, __m128d b);

int avx256_testc_pd(__m256d a, __m256d b);

int avx_testc_ps(__m128 a, __m128 b);

int avx256_testc_ps(__m256 a, __m256 b);

int avx256_testc_si256(__m256i a, __m256i b);

int avx_testnzc_pd(__m128d a, __m128d b);

int avx256_testnzc_pd(__m256d a, __m256d b);

int avx_testnzc_ps(__m128 a, __m128 b);

int avx256_testnzc_ps(__m256 a, __m256 b);

int avx256_testnzc_si256(__m256i a, __m256i b);

int avx_testz_pd(__m128d a, __m128d b);

int avx256_testz_pd(__m256d a, __m256d b);

int avx_testz_ps(__m128 a, __m128 b);

int avx256_testz_ps(__m256 a, __m256 b);

int avx256_testz_si256(__m256i a, __m256i b);

__m256d avx256_undefined_pd();

__m256 avx256_undefined_ps();

__m256i avx256_undefined_si256();

__m256d avx256_unpackhi_pd(__m256d a, __m256d b);

__m256 avx256_unpackhi_ps(__m256 a, __m256 b);

__m256d avx256_unpacklo_pd(__m256d a, __m256d b);

__m256 avx256_unpacklo_ps(__m256 a, __m256 b);

__m256d avx256_xor_pd(__m256d a, __m256d b);

__m256 avx256_xor_ps(__m256 a, __m256 b);

void avx256_zeroall();

void avx256_zeroupper();

__m256d avx256_zextpd128_pd256(__m128d a);

__m256 avx256_zextps128_ps256(__m128 a);

__m256i avx256_zextsi128_si256(__m128i a);

#ifdef __cplusplus
} //extern "C"
#endif

#endif //AVX_H
