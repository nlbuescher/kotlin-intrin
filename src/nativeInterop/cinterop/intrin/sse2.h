#ifndef SSE2_H
#define SSE2_H

#ifndef __cplusplus
#include <stdbool.h>
#endif

extern const bool SSE2;

#ifndef __m128
typedef float __m128 __attribute__((__vector_size__(16)));
#endif

#ifndef __m128d
typedef double __m128d __attribute((__vector_size__(16)));
#endif

#ifndef __m128i
typedef long long __m128i __attribute__((__vector_size__ (16), __may_alias__));
#endif

#ifdef __cplusplus
extern "C" {
#endif

__m128i sse2_add_epi16(__m128i a, __m128i b);

__m128i sse2_add_epi32(__m128i a, __m128i b);

__m128i sse2_add_epi64(__m128i a, __m128i b);

__m128i sse2_add_epi8(__m128i a, __m128i b);

__m128d sse2_add_pd(__m128d a, __m128d b);

__m128d sse2_add_sd(__m128d a, __m128d b);

__m128i sse2_adds_epi16(__m128i a, __m128i b);

__m128i sse2_adds_epi8(__m128i a, __m128i b);

__m128i sse2_adds_epu16(__m128i a, __m128i b);

__m128i sse2_adds_epu8(__m128i a, __m128i b);

__m128d sse2_and_pd(__m128d a, __m128d b);

__m128i sse2_and_si128(__m128i a, __m128i b);

__m128d sse2_andnot_pd(__m128d a, __m128d b);

__m128i sse2_andnot_si128(__m128i a, __m128i b);

__m128i sse2_avg_epu16(__m128i a, __m128i b);

__m128i sse2_avg_epu8(__m128i a, __m128i b);

__m128i sse2_bslli_si128(__m128i a, char imm8);

__m128i sse2_bsrli_si128(__m128i a, char imm8);

__m128 sse2_castpd_ps(__m128d a);

__m128i sse2_castpd_si128(__m128d a);

__m128d sse2_castps_pd(__m128 a);

__m128i sse2_castps_si128(__m128 a);

__m128d sse2_castsi128_pd(__m128i a);

__m128 sse2_castsi128_ps(__m128i a);

void sse2_clflush(const void* p);

__m128i sse2_cmpeq_epi16(__m128i a, __m128i b);

__m128i sse2_cmpeq_epi32(__m128i a, __m128i b);

__m128i sse2_cmpeq_epi8(__m128i a, __m128i b);

__m128d sse2_cmpeq_pd(__m128d a, __m128d b);

__m128d sse2_cmpeq_sd(__m128d a, __m128d b);

__m128d sse2_cmpge_pd(__m128d a, __m128d b);

__m128d sse2_cmpge_sd(__m128d a, __m128d b);

__m128i sse2_cmpgt_epi16(__m128i a, __m128i b);

__m128i sse2_cmpgt_epi32(__m128i a, __m128i b);

__m128i sse2_cmpgt_epi8(__m128i a, __m128i b);

__m128d sse2_cmpgt_pd(__m128d a, __m128d b);

__m128d sse2_cmpgt_sd(__m128d a, __m128d b);

__m128d sse2_cmple_pd(__m128d a, __m128d b);

__m128d sse2_cmple_sd(__m128d a, __m128d b);

__m128i sse2_cmplt_epi16(__m128i a, __m128i b);

__m128i sse2_cmplt_epi32(__m128i a, __m128i b);

__m128i sse2_cmplt_epi8(__m128i a, __m128i b);

__m128d sse2_cmplt_pd(__m128d a, __m128d b);

__m128d sse2_cmplt_sd(__m128d a, __m128d b);

__m128d sse2_cmpneq_pd(__m128d a, __m128d b);

__m128d sse2_cmpneq_sd(__m128d a, __m128d b);

__m128d sse2_cmpnge_pd(__m128d a, __m128d b);

__m128d sse2_cmpnge_sd(__m128d a, __m128d b);

__m128d sse2_cmpngt_pd(__m128d a, __m128d b);

__m128d sse2_cmpngt_sd(__m128d a, __m128d b);

__m128d sse2_cmpnle_pd(__m128d a, __m128d b);

__m128d sse2_cmpnle_sd(__m128d a, __m128d b);

__m128d sse2_cmpnlt_pd(__m128d a, __m128d b);

__m128d sse2_cmpnlt_sd(__m128d a, __m128d b);

__m128d sse2_cmpord_pd(__m128d a, __m128d b);

__m128d sse2_cmpord_sd(__m128d a, __m128d b);

__m128d sse2_cmpunord_pd(__m128d a, __m128d b);

__m128d sse2_cmpunord_sd(__m128d a, __m128d b);

bool sse2_comieq_sd(__m128d a, __m128d b);

bool sse2_comige_sd(__m128d a, __m128d b);

bool sse2_comigt_sd(__m128d a, __m128d b);

bool sse2_comile_sd(__m128d a, __m128d b);

bool sse2_comilt_sd(__m128d a, __m128d b);

bool sse2_comineq_sd(__m128d a, __m128d b);

__m128d sse2_cvtepi32_pd(__m128i a);

__m128 sse2_cvtepi32_ps(__m128i a);

__m128i sse2_cvtpd_epi32(__m128d a);

__m128 sse2_cvtpd_ps(__m128d a);

__m128i sse2_cvtps_epi32(__m128 a);

__m128d sse2_cvtps_pd(__m128 a);

double sse2_cvtsd_f64(__m128d a);

int sse2_cvtsd_si32(__m128d a);

long long sse2_cvtsd_si64(__m128d a);

__m128 sse2_cvtsd_ss(__m128 a, __m128d b);

int sse2_cvtsi128_si32(__m128i a);

long long sse2_cvtsi128_si64(__m128i a);

__m128d sse2_cvtsi32_sd(__m128d a, int b);

__m128i sse2_cvtsi32_si128(int a);

__m128d sse2_cvtsi64_sd(__m128d a, long long b);

__m128i sse2_cvtsi64_si128(long long a);

__m128d sse2_cvtss_sd(__m128d a, __m128 b);

__m128i sse2_cvttpd_epi32(__m128d a);

__m128i sse2_cvttps_epi32(__m128 a);

int sse2_cvttsd_si32(__m128d a);

long long sse2_cvttsd_si64(__m128d a);

__m128d sse2_div_pd(__m128d a, __m128d b);

__m128d sse2_div_sd(__m128d a, __m128d b);

short sse2_extract_epi16(__m128i a, char imm8);

__m128i sse2_insert_epi16(__m128i a, short i, char imm8);

void sse2_lfence();

__m128d sse2_load_pd(const double* mem_addr);

__m128d sse2_load_pd1(const double* mem_addr);

__m128d sse2_load_sd(const double* mem_addr);

__m128i sse2_load_si128(const __m128i* mem_addr);

__m128d sse2_load1_pd(const double* mem_addr);

__m128d sse2_loadh_pd(__m128d a, const double* mem_addr);

__m128i sse2_loadl_epi64(const __m128i* mem_addr);

__m128d sse2_loadl_pd(__m128d a, const double* mem_addr);

__m128d sse2_loadr_pd(const double* mem_addr);

__m128d sse2_loadu_pd(const double* mem_addr);

__m128i sse2_loadu_si128(const __m128i* mem_addr);

__m128i sse2_loadu_si16(const void* mem_addr);

__m128i sse2_loadu_si32(const void* mem_addr);

__m128i sse2_loadu_si64(const void* mem_addr);

__m128i sse2_madd_epi16(__m128i a, __m128i b);

void sse2_maskmoveu_si128(__m128i a, __m128i mask, char* mem_addr);

__m128i sse2_max_epi16(__m128i a, __m128i b);

__m128i sse2_max_epu8(__m128i a, __m128i b);

__m128d sse2_max_pd(__m128d a, __m128d b);

__m128d sse2_max_sd(__m128d a, __m128d b);

void sse2_mfence();

__m128i sse2_min_epi16(__m128i a, __m128i b);

__m128i sse2_min_epu8(__m128i a, __m128i b);

__m128d sse2_min_pd(__m128d a, __m128d b);

__m128d sse2_min_sd(__m128d a, __m128d b);

__m128i sse2_move_epi64(__m128i a);

__m128d sse2_move_sd(__m128d a, __m128d b);

int sse2_movemask_epi8(__m128i a);

int sse2_movemask_pd(__m128d a);

__m128i sse2_mul_epu32(__m128i a, __m128i b);

__m128d sse2_mul_pd(__m128d a, __m128d b);

__m128d sse2_mul_sd(__m128d a, __m128d b);

__m128i sse2_mulhi_epi16(__m128i a, __m128i b);

__m128i sse2_mulhi_epu16(__m128i a, __m128i b);

__m128i sse2_mullo_epi16(__m128i a, __m128i b);

__m128d sse2_or_pd(__m128d a, __m128d b);

__m128i sse2_or_si128(__m128i a, __m128i b);

__m128i sse2_packs_epi16(__m128i a, __m128i b);

__m128i sse2_packs_epi32(__m128i a, __m128i b);

__m128i sse2_packus_epi16(__m128i a, __m128i b);

void sse2_pause();

__m128i sse2_sad_epu8(__m128i a, __m128i b);

__m128i sse2_set_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0);

__m128i sse2_set_epi32(int e3, int e2, int e1, int e0);

__m128i sse2_set_epi64x(long long e1, long long e0);

__m128i sse2_set_epi8(char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0);

__m128d sse2_set_pd(double e1, double e0);

__m128d sse2_set_pd1(double a);

__m128d sse2_set_sd(double a);

__m128i sse2_set1_epi16(short a);

__m128i sse2_set1_epi32(int a);

__m128i sse2_set1_epi64x(long long a);

__m128i sse2_set1_epi8(char a);

__m128d sse2_set1_pd(double a);

__m128i sse2_setr_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0);

__m128i sse2_setr_epi32(int e3, int e2, int e1, int e0);

__m128i sse2_setr_epi8(char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0);

__m128d sse2_setr_pd(double e1, double e0);

__m128d sse2_setzero_pd();

__m128i sse2_setzero_si128();

__m128i sse2_shuffle_epi32(__m128i a, char imm8);

__m128d sse2_shuffle_pd(__m128d a, __m128d b, char imm8);

__m128i sse2_shufflehi_epi16(__m128i a, char imm8);

__m128i sse2_shufflelo_epi16(__m128i a, char imm8);

__m128i sse2_sll_epi16(__m128i a, __m128i count);

__m128i sse2_sll_epi32(__m128i a, __m128i count);

__m128i sse2_sll_epi64(__m128i a, __m128i count);

__m128i sse2_slli_epi16(__m128i a, char imm8);

__m128i sse2_slli_epi32(__m128i a, char imm8);

__m128i sse2_slli_epi64(__m128i a, char imm8);

__m128i sse2_slli_si128(__m128i a, char imm8);

__m128d sse2_sqrt_pd(__m128d a);

__m128d sse2_sqrt_sd(__m128d a, __m128d b);

__m128i sse2_sra_epi16(__m128i a, __m128i count);

__m128i sse2_sra_epi32(__m128i a, __m128i count);

__m128i sse2_srai_epi16(__m128i a, char imm8);

__m128i sse2_srai_epi32(__m128i a, char imm8);

__m128i sse2_srl_epi16(__m128i a, __m128i count);

__m128i sse2_srl_epi32(__m128i a, __m128i count);

__m128i sse2_srl_epi64(__m128i a, __m128i count);

__m128i sse2_srli_epi16(__m128i a, char imm8);

__m128i sse2_srli_epi32(__m128i a, char imm8);

__m128i sse2_srli_epi64(__m128i a, char imm8);

__m128i sse2_srli_si128(__m128i a, char imm8);

void sse2_store_pd(double* mem_addr, __m128d a);

void sse2_store_pd1(double* mem_addr, __m128d a);

void sse2_store_sd(double* mem_addr, __m128d a);

void sse2_store_si128(__m128i* mem_addr, __m128i a);

void sse2_store1_pd(double* mem_addr, __m128d a);

void sse2_storeh_pd(double* mem_addr, __m128d a);

void sse2_storel_epi64(__m128i* mem_addr, __m128i a);

void sse2_storel_pd(double* mem_addr, __m128d a);

void sse2_storer_pd(double* mem_addr, __m128d a);

void sse2_storeu_pd(double* mem_addr, __m128d a);

void sse2_storeu_si128(__m128i* mem_addr, __m128i a);

void sse2_storeu_si16(void* mem_addr, __m128i a);

void sse2_storeu_si32(void* mem_addr, __m128i a);

void sse2_storeu_si64(void* mem_addr, __m128i a);

void sse2_stream_pd(double* mem_addr, __m128d a);

void sse2_stream_si128(__m128i* mem_addr, __m128i a);

void sse2_stream_si32(int* mem_addr, int a);

void sse2_stream_si64(long long* mem_addr, long long a);

__m128i sse2_sub_epi16(__m128i a, __m128i b);

__m128i sse2_sub_epi32(__m128i a, __m128i b);

__m128i sse2_sub_epi64(__m128i a, __m128i b);

__m128i sse2_sub_epi8(__m128i a, __m128i b);

__m128d sse2_sub_pd(__m128d a, __m128d b);

__m128d sse2_sub_sd(__m128d a, __m128d b);

__m128i sse2_subs_epi16(__m128i a, __m128i b);

__m128i sse2_subs_epi8(__m128i a, __m128i b);

__m128i sse2_subs_epu16(__m128i a, __m128i b);

__m128i sse2_subs_epu8(__m128i a, __m128i b);

bool sse2_ucomieq_sd(__m128d a, __m128d b);

bool sse2_ucomige_sd(__m128d a, __m128d b);

bool sse2_ucomigt_sd(__m128d a, __m128d b);

bool sse2_ucomile_sd(__m128d a, __m128d b);

bool sse2_ucomilt_sd(__m128d a, __m128d b);

bool sse2_ucomineq_sd(__m128d a, __m128d b);

__m128d sse2_undefined_pd();

__m128i sse2_undefined_si128();

__m128i sse2_unpackhi_epi16(__m128i a, __m128i b);

__m128i sse2_unpackhi_epi32(__m128i a, __m128i b);

__m128i sse2_unpackhi_epi64(__m128i a, __m128i b);

__m128i sse2_unpackhi_epi8(__m128i a, __m128i b);

__m128d sse2_unpackhi_pd(__m128d a, __m128d b);

__m128i sse2_unpacklo_epi16(__m128i a, __m128i b);

__m128i sse2_unpacklo_epi32(__m128i a, __m128i b);

__m128i sse2_unpacklo_epi64(__m128i a, __m128i b);

__m128i sse2_unpacklo_epi8(__m128i a, __m128i b);

__m128d sse2_unpacklo_pd(__m128d a, __m128d b);

__m128d sse2_xor_pd(__m128d a, __m128d b);

__m128i sse2_xor_si128(__m128i a, __m128i b);

#ifdef __cplusplus
} //extern "C"
#endif

#endif //SSE2_H
