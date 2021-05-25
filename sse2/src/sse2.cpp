#include <immintrin.h>

#include "sse2.h"

__m128i sse2_add_epi16(__m128i a, __m128i b) { return _mm_add_epi16(a, b); }

__m128i sse2_add_epi32(__m128i a, __m128i b) { return _mm_add_epi32(a, b); }

__m128i sse2_add_epi64(__m128i a, __m128i b) { return _mm_add_epi64(a, b); }

__m128i sse2_add_epi8(__m128i a, __m128i b) { return _mm_add_epi8(a, b); }

__m128d sse2_add_pd(__m128d a, __m128d b) { return _mm_add_pd(a, b); }

__m128d sse2_add_sd(__m128d a, __m128d b) { return _mm_add_sd(a, b); }

__m128i sse2_adds_epi16(__m128i a, __m128i b) { return _mm_adds_epi16(a, b); }

__m128i sse2_adds_epi8(__m128i a, __m128i b) { return _mm_adds_epi8(a, b); }

__m128i sse2_adds_epu16(__m128i a, __m128i b) { return _mm_adds_epu16(a, b); }

__m128i sse2_adds_epu8(__m128i a, __m128i b) { return _mm_adds_epu8(a, b); }

__m128d sse2_and_pd(__m128d a, __m128d b) { return _mm_and_pd(a, b); }

__m128i sse2_and_si128(__m128i a, __m128i b) { return _mm_and_si128(a, b); }

__m128d sse2_andnot_pd(__m128d a, __m128d b) { return _mm_andnot_pd(a, b); }

__m128i sse2_andnot_si128(__m128i a, __m128i b) { return _mm_andnot_si128(a, b); }

__m128i sse2_avg_epu16(__m128i a, __m128i b) { return _mm_avg_epu16(a, b); }

__m128i sse2_avg_epu8(__m128i a, __m128i b) { return _mm_avg_epu8(a, b); }

__m128i sse2_bslli_si128(__m128i a, int imm8) {
	switch (imm8) {
		case  0: return _mm_bslli_si128(a,  0);
		case  1: return _mm_bslli_si128(a,  1);
		case  2: return _mm_bslli_si128(a,  2);
		case  3: return _mm_bslli_si128(a,  3);
		case  4: return _mm_bslli_si128(a,  4);
		case  5: return _mm_bslli_si128(a,  5);
		case  6: return _mm_bslli_si128(a,  6);
		case  7: return _mm_bslli_si128(a,  7);
		case  8: return _mm_bslli_si128(a,  8);
		case  9: return _mm_bslli_si128(a,  9);
		case 10: return _mm_bslli_si128(a, 10);
		case 11: return _mm_bslli_si128(a, 11);
		case 12: return _mm_bslli_si128(a, 12);
		case 13: return _mm_bslli_si128(a, 13);
		case 14: return _mm_bslli_si128(a, 14);
		case 15: return _mm_bslli_si128(a, 15);
		default: return _mm_bslli_si128(a, 16);
	}
}

__m128i sse2_bsrli_si128(__m128i a, int imm8) {
	switch (imm8) {
		case  0: return _mm_bsrli_si128(a,  0);
		case  1: return _mm_bsrli_si128(a,  1);
		case  2: return _mm_bsrli_si128(a,  2);
		case  3: return _mm_bsrli_si128(a,  3);
		case  4: return _mm_bsrli_si128(a,  4);
		case  5: return _mm_bsrli_si128(a,  5);
		case  6: return _mm_bsrli_si128(a,  6);
		case  7: return _mm_bsrli_si128(a,  7);
		case  8: return _mm_bsrli_si128(a,  8);
		case  9: return _mm_bsrli_si128(a,  9);
		case 10: return _mm_bsrli_si128(a, 10);
		case 11: return _mm_bsrli_si128(a, 11);
		case 12: return _mm_bsrli_si128(a, 12);
		case 13: return _mm_bsrli_si128(a, 13);
		case 14: return _mm_bsrli_si128(a, 14);
		case 15: return _mm_bsrli_si128(a, 15);
		default: return _mm_bsrli_si128(a, 16);
	}
}

__m128 sse2_castpd_ps(__m128d a) { return _mm_castpd_ps(a); }

__m128i sse2_castpd_si128(__m128d a) { return _mm_castpd_si128(a); }

__m128d sse2_castps_pd(__m128 a) { return _mm_castps_pd(a); }

__m128i sse2_castps_si128(__m128 a) { return _mm_castps_si128(a); }

__m128d sse2_castsi128_pd(__m128i a) { return _mm_castsi128_pd(a); }

__m128 sse2_castsi128_ps(__m128i a) { return _mm_castsi128_ps(a); }

void sse2_clflush(const void* p) { return _mm_clflush(p); }

__m128i sse2_cmpeq_epi16(__m128i a, __m128i b) { return _mm_cmpeq_epi16(a, b); }

__m128i sse2_cmpeq_epi32(__m128i a, __m128i b) { return _mm_cmpeq_epi32(a, b); }

__m128i sse2_cmpeq_epi8(__m128i a, __m128i b) { return _mm_cmpeq_epi8(a, b); }

__m128d sse2_cmpeq_pd(__m128d a, __m128d b) { return _mm_cmpeq_pd(a, b); }

__m128d sse2_cmpeq_sd(__m128d a, __m128d b) { return _mm_cmpeq_sd(a, b); }

__m128d sse2_cmpge_pd(__m128d a, __m128d b) { return _mm_cmpge_pd(a, b); }

__m128d sse2_cmpge_sd(__m128d a, __m128d b) { return _mm_cmpge_sd(a, b); }

__m128i sse2_cmpgt_epi16(__m128i a, __m128i b) { return _mm_cmpgt_epi16(a, b); }

__m128i sse2_cmpgt_epi32(__m128i a, __m128i b) { return _mm_cmpgt_epi32(a, b); }

__m128i sse2_cmpgt_epi8(__m128i a, __m128i b) { return _mm_cmpgt_epi8(a, b); }

__m128d sse2_cmpgt_pd(__m128d a, __m128d b) { return _mm_cmpgt_pd(a, b); }

__m128d sse2_cmpgt_sd(__m128d a, __m128d b) { return _mm_cmpgt_sd(a, b); }

__m128d sse2_cmple_pd(__m128d a, __m128d b) { return _mm_cmple_pd(a, b); }

__m128d sse2_cmple_sd(__m128d a, __m128d b) { return _mm_cmple_sd(a, b); }

__m128i sse2_cmplt_epi16(__m128i a, __m128i b) { return _mm_cmplt_epi16(a, b); }

__m128i sse2_cmplt_epi32(__m128i a, __m128i b) { return _mm_cmplt_epi32(a, b); }

__m128i sse2_cmplt_epi8(__m128i a, __m128i b) { return _mm_cmplt_epi8(a, b); }

__m128d sse2_cmplt_pd(__m128d a, __m128d b) { return _mm_cmplt_pd(a, b); }

__m128d sse2_cmplt_sd(__m128d a, __m128d b) { return _mm_cmplt_sd(a, b); }

__m128d sse2_cmpneq_pd(__m128d a, __m128d b) { return _mm_cmpneq_pd(a, b); }

__m128d sse2_cmpneq_sd(__m128d a, __m128d b) { return _mm_cmpneq_sd(a, b); }

__m128d sse2_cmpnge_pd(__m128d a, __m128d b) { return _mm_cmpnge_pd(a, b); }

__m128d sse2_cmpnge_sd(__m128d a, __m128d b) { return _mm_cmpnge_sd(a, b); }

__m128d sse2_cmpngt_pd(__m128d a, __m128d b) { return _mm_cmpngt_pd(a, b); }

__m128d sse2_cmpngt_sd(__m128d a, __m128d b) { return _mm_cmpngt_sd(a, b); }

__m128d sse2_cmpnle_pd(__m128d a, __m128d b) { return _mm_cmpnle_pd(a, b); }

__m128d sse2_cmpnle_sd(__m128d a, __m128d b) { return _mm_cmpnle_sd(a, b); }

__m128d sse2_cmpnlt_pd(__m128d a, __m128d b) { return _mm_cmpnlt_pd(a, b); }

__m128d sse2_cmpnlt_sd(__m128d a, __m128d b) { return _mm_cmpnlt_sd(a, b); }

__m128d sse2_cmpord_pd(__m128d a, __m128d b) { return _mm_cmpord_pd(a, b); }

__m128d sse2_cmpord_sd(__m128d a, __m128d b) { return _mm_cmpord_sd(a, b); }

__m128d sse2_cmpunord_pd(__m128d a, __m128d b) { return _mm_cmpunord_pd(a, b); }

__m128d sse2_cmpunord_sd(__m128d a, __m128d b) { return _mm_cmpunord_sd(a, b); }

int sse2_comieq_sd(__m128d a, __m128d b) { return _mm_comieq_sd(a, b); }

int sse2_comige_sd(__m128d a, __m128d b) { return _mm_comige_sd(a, b); }

int sse2_comigt_sd(__m128d a, __m128d b) { return _mm_comigt_sd(a, b); }

int sse2_comile_sd(__m128d a, __m128d b) { return _mm_comile_sd(a, b); }

int sse2_comilt_sd(__m128d a, __m128d b) { return _mm_comilt_sd(a, b); }

int sse2_comineq_sd(__m128d a, __m128d b) { return _mm_comineq_sd(a, b); }

__m128d sse2_cvtepi32_pd(__m128i a) { return _mm_cvtepi32_pd(a); }

__m128 sse2_cvtepi32_ps(__m128i a) { return _mm_cvtepi32_ps(a); }

__m128i sse2_cvtpd_epi32(__m128d a) { return _mm_cvtpd_epi32(a); }

__m128 sse2_cvtpd_ps(__m128d a) { return _mm_cvtpd_ps(a); }

__m128i sse2_cvtps_epi32(__m128 a) { return _mm_cvtps_epi32(a); }

__m128d sse2_cvtps_pd(__m128 a) { return _mm_cvtps_pd(a); }

double sse2_cvtsd_f64(__m128d a) { return _mm_cvtsd_f64(a); }

int sse2_cvtsd_si32(__m128d a) { return _mm_cvtsd_si32(a); }

long long sse2_cvtsd_si64(__m128d a) { return _mm_cvtsd_si64(a); }

__m128 sse2_cvtsd_ss(__m128 a, __m128d b) { return _mm_cvtsd_ss(a, b); }

int sse2_cvtsi128_si32(__m128i a) { return _mm_cvtsi128_si32(a); }

long long sse2_cvtsi128_si64(__m128i a) { return _mm_cvtsi128_si64(a); }

__m128d sse2_cvtsi32_sd(__m128d a, int b) { return _mm_cvtsi32_sd(a, b); }

__m128i sse2_cvtsi32_si128(int a) { return _mm_cvtsi32_si128(a); }

__m128d sse2_cvtsi64_sd(__m128d a, long long b) { return _mm_cvtsi64_sd(a, b); }

__m128i sse2_cvtsi64_si128(long long a) { return _mm_cvtsi64_si128(a); }

__m128d sse2_cvtss_sd(__m128d a, __m128 b) { return _mm_cvtss_sd(a, b); }

__m128i sse2_cvttpd_epi32(__m128d a) { return _mm_cvttpd_epi32(a); }

__m128i sse2_cvttps_epi32(__m128 a) { return _mm_cvttps_epi32(a); }

int sse2_cvttsd_si32(__m128d a) { return _mm_cvttsd_si32(a); }

long long sse2_cvttsd_si64(__m128d a) { return _mm_cvttsd_si64(a); }

__m128d sse2_div_pd(__m128d a, __m128d b) { return _mm_div_pd(a, b); }

__m128d sse2_div_sd(__m128d a, __m128d b) { return _mm_div_sd(a, b); }

int sse2_extract_epi16(__m128i a, int imm8) {
	switch (imm8 & 0x7) {
		case 0:  return _mm_extract_epi16(a, 0);
		case 1:  return _mm_extract_epi16(a, 1);
		case 2:  return _mm_extract_epi16(a, 2);
		case 3:  return _mm_extract_epi16(a, 3);
		case 4:  return _mm_extract_epi16(a, 4);
		case 5:  return _mm_extract_epi16(a, 5);
		case 6:  return _mm_extract_epi16(a, 6);
		default: return _mm_extract_epi16(a, 7);
	}
}

__m128i sse2_insert_epi16(__m128i a, int i, int imm8) {
	switch (imm8 & 0x7) {
		case 0:  return _mm_insert_epi16(a, i, 0);
		case 1:  return _mm_insert_epi16(a, i, 1);
		case 2:  return _mm_insert_epi16(a, i, 2);
		case 3:  return _mm_insert_epi16(a, i, 3);
		case 4:  return _mm_insert_epi16(a, i, 4);
		case 5:  return _mm_insert_epi16(a, i, 5);
		case 6:  return _mm_insert_epi16(a, i, 6);
		default: return _mm_insert_epi16(a, i, 7);
	}
}

void sse2_lfence() { return _mm_lfence(); }

__m128d sse2_load_pd(const double* mem_addr) { return _mm_load_pd(mem_addr); }

__m128d sse2_load_pd1(const double* mem_addr) { return _mm_load_pd1(mem_addr); }

__m128d sse2_load_sd(const double* mem_addr) { return _mm_load_sd(mem_addr); }

__m128i sse2_load_si128(const __m128i* mem_addr) { return _mm_load_si128(mem_addr); }

__m128d sse2_load1_pd(const double* mem_addr) { return _mm_load1_pd(mem_addr); }

__m128d sse2_loadh_pd(__m128d a, const double* mem_addr) { return _mm_loadh_pd(a, mem_addr); }

__m128i sse2_loadl_epi64(const __m128i* mem_addr) { return _mm_loadl_epi64(mem_addr); }

__m128d sse2_loadl_pd(__m128d a, const double* mem_addr) { return _mm_loadl_pd(a, mem_addr); }

__m128d sse2_loadr_pd(const double* mem_addr) { return _mm_loadr_pd(mem_addr); }

__m128d sse2_loadu_pd(const double* mem_addr) { return _mm_loadu_pd(mem_addr); }

__m128i sse2_loadu_si128(const __m128i* mem_addr) { return _mm_loadu_si128(mem_addr); }

__m128i sse2_loadu_si32(const void* mem_addr) { return _mm_loadu_si32(mem_addr); }

__m128i sse2_madd_epi16(__m128i a, __m128i b) { return _mm_madd_epi16(a, b); }

void sse2_maskmoveu_si128(__m128i a, __m128i mask, char* mem_addr) { return _mm_maskmoveu_si128(a, mask, mem_addr); }

__m128i sse2_max_epi16(__m128i a, __m128i b) { return _mm_max_epi16(a, b); }

__m128i sse2_max_epu8(__m128i a, __m128i b) { return _mm_max_epu8(a, b); }

__m128d sse2_max_pd(__m128d a, __m128d b) { return _mm_max_pd(a, b); }

__m128d sse2_max_sd(__m128d a, __m128d b) { return _mm_max_sd(a, b); }

void sse2_mfence() { return _mm_mfence(); }

__m128i sse2_min_epi16(__m128i a, __m128i b) { return _mm_min_epi16(a, b); }

__m128i sse2_min_epu8(__m128i a, __m128i b) { return _mm_min_epu8(a, b); }

__m128d sse2_min_pd(__m128d a, __m128d b) { return _mm_min_pd(a, b); }

__m128d sse2_min_sd(__m128d a, __m128d b) { return _mm_min_sd(a, b); }

__m128i sse2_move_epi64(__m128i a) { return _mm_move_epi64(a); }

__m128d sse2_move_sd(__m128d a, __m128d b) { return _mm_move_sd(a, b); }

int sse2_movemask_epi8(__m128i a) { return _mm_movemask_epi8(a); }

int sse2_movemask_pd(__m128d a) { return _mm_movemask_pd(a); }

__m128i sse2_mul_epu32(__m128i a, __m128i b) { return _mm_mul_epu32(a, b); }

__m128d sse2_mul_pd(__m128d a, __m128d b) { return _mm_mul_pd(a, b); }

__m128d sse2_mul_sd(__m128d a, __m128d b) { return _mm_mul_sd(a, b); }

__m128i sse2_mulhi_epi16(__m128i a, __m128i b) { return _mm_mulhi_epi16(a, b); }

__m128i sse2_mulhi_epu16(__m128i a, __m128i b) { return _mm_mulhi_epu16(a, b); }

__m128i sse2_mullo_epi16(__m128i a, __m128i b) { return _mm_mullo_epi16(a, b); }

__m128d sse2_or_pd(__m128d a, __m128d b) { return _mm_or_pd(a, b); }

__m128i sse2_or_si128(__m128i a, __m128i b) { return _mm_or_si128(a, b); }

__m128i sse2_packs_epi16(__m128i a, __m128i b) { return _mm_packs_epi16(a, b); }

__m128i sse2_packs_epi32(__m128i a, __m128i b) { return _mm_packs_epi32(a, b); }

__m128i sse2_packus_epi16(__m128i a, __m128i b) { return _mm_packus_epi16(a, b); }

void sse2_pause() { return _mm_pause(); }

__m128i sse2_sad_epu8(__m128i a, __m128i b) { return _mm_sad_epu8(a, b); }

__m128i sse2_set_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0) { return _mm_set_epi16(e7, e6, e5, e4, e3, e2, e1, e0); }

__m128i sse2_set_epi32(int e3, int e2, int e1, int e0) { return _mm_set_epi32(e3, e2, e1, e0); }

__m128i sse2_set_epi64x(long long e1, long long e0) { return _mm_set_epi64x(e1, e0); }

__m128i sse2_set_epi8(char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0) { return _mm_set_epi8(e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }

__m128d sse2_set_pd(double e1, double e0) { return _mm_set_pd(e1, e0); }

__m128d sse2_set_pd1(double a) { return _mm_set_pd1(a); }

__m128d sse2_set_sd(double a) { return _mm_set_sd(a); }

__m128i sse2_set1_epi16(short a) { return _mm_set1_epi16(a); }

__m128i sse2_set1_epi32(int a) { return _mm_set1_epi32(a); }

__m128i sse2_set1_epi64x(long long a) { return _mm_set1_epi64x(a); }

__m128i sse2_set1_epi8(char a) { return _mm_set1_epi8(a); }

__m128d sse2_set1_pd(double a) { return _mm_set1_pd(a); }

__m128i sse2_setr_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0) { return _mm_setr_epi16(e7, e6, e5, e4, e3, e2, e1, e0); }

__m128i sse2_setr_epi32(int e3, int e2, int e1, int e0) { return _mm_setr_epi32(e3, e2, e1, e0); }

__m128i sse2_setr_epi8(char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0) { return _mm_setr_epi8(e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }

__m128d sse2_setr_pd(double e1, double e0) { return _mm_setr_pd(e1, e0); }

__m128d sse2_setzero_pd() { return _mm_setzero_pd(); }

__m128i sse2_setzero_si128() { return _mm_setzero_si128(); }

__m128i sse2_shuffle_epi32(__m128i a, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_shuffle_epi32(a, 0x00);
		case 0x01: return _mm_shuffle_epi32(a, 0x01);
		case 0x02: return _mm_shuffle_epi32(a, 0x02);
		case 0x03: return _mm_shuffle_epi32(a, 0x03);
		case 0x04: return _mm_shuffle_epi32(a, 0x04);
		case 0x05: return _mm_shuffle_epi32(a, 0x05);
		case 0x06: return _mm_shuffle_epi32(a, 0x06);
		case 0x07: return _mm_shuffle_epi32(a, 0x07);
		case 0x08: return _mm_shuffle_epi32(a, 0x08);
		case 0x09: return _mm_shuffle_epi32(a, 0x09);
		case 0x0A: return _mm_shuffle_epi32(a, 0x0A);
		case 0x0B: return _mm_shuffle_epi32(a, 0x0B);
		case 0x0C: return _mm_shuffle_epi32(a, 0x0C);
		case 0x0D: return _mm_shuffle_epi32(a, 0x0D);
		case 0x0E: return _mm_shuffle_epi32(a, 0x0E);
		case 0x0F: return _mm_shuffle_epi32(a, 0x0F);
		case 0x10: return _mm_shuffle_epi32(a, 0x10);
		case 0x11: return _mm_shuffle_epi32(a, 0x11);
		case 0x12: return _mm_shuffle_epi32(a, 0x12);
		case 0x13: return _mm_shuffle_epi32(a, 0x13);
		case 0x14: return _mm_shuffle_epi32(a, 0x14);
		case 0x15: return _mm_shuffle_epi32(a, 0x15);
		case 0x16: return _mm_shuffle_epi32(a, 0x16);
		case 0x17: return _mm_shuffle_epi32(a, 0x17);
		case 0x18: return _mm_shuffle_epi32(a, 0x18);
		case 0x19: return _mm_shuffle_epi32(a, 0x19);
		case 0x1A: return _mm_shuffle_epi32(a, 0x1A);
		case 0x1B: return _mm_shuffle_epi32(a, 0x1B);
		case 0x1C: return _mm_shuffle_epi32(a, 0x1C);
		case 0x1D: return _mm_shuffle_epi32(a, 0x1D);
		case 0x1E: return _mm_shuffle_epi32(a, 0x1E);
		case 0x1F: return _mm_shuffle_epi32(a, 0x1F);
		case 0x20: return _mm_shuffle_epi32(a, 0x20);
		case 0x21: return _mm_shuffle_epi32(a, 0x21);
		case 0x22: return _mm_shuffle_epi32(a, 0x22);
		case 0x23: return _mm_shuffle_epi32(a, 0x23);
		case 0x24: return _mm_shuffle_epi32(a, 0x24);
		case 0x25: return _mm_shuffle_epi32(a, 0x25);
		case 0x26: return _mm_shuffle_epi32(a, 0x26);
		case 0x27: return _mm_shuffle_epi32(a, 0x27);
		case 0x28: return _mm_shuffle_epi32(a, 0x28);
		case 0x29: return _mm_shuffle_epi32(a, 0x29);
		case 0x2A: return _mm_shuffle_epi32(a, 0x2A);
		case 0x2B: return _mm_shuffle_epi32(a, 0x2B);
		case 0x2C: return _mm_shuffle_epi32(a, 0x2C);
		case 0x2D: return _mm_shuffle_epi32(a, 0x2D);
		case 0x2E: return _mm_shuffle_epi32(a, 0x2E);
		case 0x2F: return _mm_shuffle_epi32(a, 0x2F);
		case 0x30: return _mm_shuffle_epi32(a, 0x30);
		case 0x31: return _mm_shuffle_epi32(a, 0x31);
		case 0x32: return _mm_shuffle_epi32(a, 0x32);
		case 0x33: return _mm_shuffle_epi32(a, 0x33);
		case 0x34: return _mm_shuffle_epi32(a, 0x34);
		case 0x35: return _mm_shuffle_epi32(a, 0x35);
		case 0x36: return _mm_shuffle_epi32(a, 0x36);
		case 0x37: return _mm_shuffle_epi32(a, 0x37);
		case 0x38: return _mm_shuffle_epi32(a, 0x38);
		case 0x39: return _mm_shuffle_epi32(a, 0x39);
		case 0x3A: return _mm_shuffle_epi32(a, 0x3A);
		case 0x3B: return _mm_shuffle_epi32(a, 0x3B);
		case 0x3C: return _mm_shuffle_epi32(a, 0x3C);
		case 0x3D: return _mm_shuffle_epi32(a, 0x3D);
		case 0x3E: return _mm_shuffle_epi32(a, 0x3E);
		case 0x3F: return _mm_shuffle_epi32(a, 0x3F);
		case 0x40: return _mm_shuffle_epi32(a, 0x40);
		case 0x41: return _mm_shuffle_epi32(a, 0x41);
		case 0x42: return _mm_shuffle_epi32(a, 0x42);
		case 0x43: return _mm_shuffle_epi32(a, 0x43);
		case 0x44: return _mm_shuffle_epi32(a, 0x44);
		case 0x45: return _mm_shuffle_epi32(a, 0x45);
		case 0x46: return _mm_shuffle_epi32(a, 0x46);
		case 0x47: return _mm_shuffle_epi32(a, 0x47);
		case 0x48: return _mm_shuffle_epi32(a, 0x48);
		case 0x49: return _mm_shuffle_epi32(a, 0x49);
		case 0x4A: return _mm_shuffle_epi32(a, 0x4A);
		case 0x4B: return _mm_shuffle_epi32(a, 0x4B);
		case 0x4C: return _mm_shuffle_epi32(a, 0x4C);
		case 0x4D: return _mm_shuffle_epi32(a, 0x4D);
		case 0x4E: return _mm_shuffle_epi32(a, 0x4E);
		case 0x4F: return _mm_shuffle_epi32(a, 0x4F);
		case 0x50: return _mm_shuffle_epi32(a, 0x50);
		case 0x51: return _mm_shuffle_epi32(a, 0x51);
		case 0x52: return _mm_shuffle_epi32(a, 0x52);
		case 0x53: return _mm_shuffle_epi32(a, 0x53);
		case 0x54: return _mm_shuffle_epi32(a, 0x54);
		case 0x55: return _mm_shuffle_epi32(a, 0x55);
		case 0x56: return _mm_shuffle_epi32(a, 0x56);
		case 0x57: return _mm_shuffle_epi32(a, 0x57);
		case 0x58: return _mm_shuffle_epi32(a, 0x58);
		case 0x59: return _mm_shuffle_epi32(a, 0x59);
		case 0x5A: return _mm_shuffle_epi32(a, 0x5A);
		case 0x5B: return _mm_shuffle_epi32(a, 0x5B);
		case 0x5C: return _mm_shuffle_epi32(a, 0x5C);
		case 0x5D: return _mm_shuffle_epi32(a, 0x5D);
		case 0x5E: return _mm_shuffle_epi32(a, 0x5E);
		case 0x5F: return _mm_shuffle_epi32(a, 0x5F);
		case 0x60: return _mm_shuffle_epi32(a, 0x60);
		case 0x61: return _mm_shuffle_epi32(a, 0x61);
		case 0x62: return _mm_shuffle_epi32(a, 0x62);
		case 0x63: return _mm_shuffle_epi32(a, 0x63);
		case 0x64: return _mm_shuffle_epi32(a, 0x64);
		case 0x65: return _mm_shuffle_epi32(a, 0x65);
		case 0x66: return _mm_shuffle_epi32(a, 0x66);
		case 0x67: return _mm_shuffle_epi32(a, 0x67);
		case 0x68: return _mm_shuffle_epi32(a, 0x68);
		case 0x69: return _mm_shuffle_epi32(a, 0x69);
		case 0x6A: return _mm_shuffle_epi32(a, 0x6A);
		case 0x6B: return _mm_shuffle_epi32(a, 0x6B);
		case 0x6C: return _mm_shuffle_epi32(a, 0x6C);
		case 0x6D: return _mm_shuffle_epi32(a, 0x6D);
		case 0x6E: return _mm_shuffle_epi32(a, 0x6E);
		case 0x6F: return _mm_shuffle_epi32(a, 0x6F);
		case 0x70: return _mm_shuffle_epi32(a, 0x70);
		case 0x71: return _mm_shuffle_epi32(a, 0x71);
		case 0x72: return _mm_shuffle_epi32(a, 0x72);
		case 0x73: return _mm_shuffle_epi32(a, 0x73);
		case 0x74: return _mm_shuffle_epi32(a, 0x74);
		case 0x75: return _mm_shuffle_epi32(a, 0x75);
		case 0x76: return _mm_shuffle_epi32(a, 0x76);
		case 0x77: return _mm_shuffle_epi32(a, 0x77);
		case 0x78: return _mm_shuffle_epi32(a, 0x78);
		case 0x79: return _mm_shuffle_epi32(a, 0x79);
		case 0x7A: return _mm_shuffle_epi32(a, 0x7A);
		case 0x7B: return _mm_shuffle_epi32(a, 0x7B);
		case 0x7C: return _mm_shuffle_epi32(a, 0x7C);
		case 0x7D: return _mm_shuffle_epi32(a, 0x7D);
		case 0x7E: return _mm_shuffle_epi32(a, 0x7E);
		case 0x7F: return _mm_shuffle_epi32(a, 0x7F);
		case 0x80: return _mm_shuffle_epi32(a, 0x80);
		case 0x81: return _mm_shuffle_epi32(a, 0x81);
		case 0x82: return _mm_shuffle_epi32(a, 0x82);
		case 0x83: return _mm_shuffle_epi32(a, 0x83);
		case 0x84: return _mm_shuffle_epi32(a, 0x84);
		case 0x85: return _mm_shuffle_epi32(a, 0x85);
		case 0x86: return _mm_shuffle_epi32(a, 0x86);
		case 0x87: return _mm_shuffle_epi32(a, 0x87);
		case 0x88: return _mm_shuffle_epi32(a, 0x88);
		case 0x89: return _mm_shuffle_epi32(a, 0x89);
		case 0x8A: return _mm_shuffle_epi32(a, 0x8A);
		case 0x8B: return _mm_shuffle_epi32(a, 0x8B);
		case 0x8C: return _mm_shuffle_epi32(a, 0x8C);
		case 0x8D: return _mm_shuffle_epi32(a, 0x8D);
		case 0x8E: return _mm_shuffle_epi32(a, 0x8E);
		case 0x8F: return _mm_shuffle_epi32(a, 0x8F);
		case 0x90: return _mm_shuffle_epi32(a, 0x90);
		case 0x91: return _mm_shuffle_epi32(a, 0x91);
		case 0x92: return _mm_shuffle_epi32(a, 0x92);
		case 0x93: return _mm_shuffle_epi32(a, 0x93);
		case 0x94: return _mm_shuffle_epi32(a, 0x94);
		case 0x95: return _mm_shuffle_epi32(a, 0x95);
		case 0x96: return _mm_shuffle_epi32(a, 0x96);
		case 0x97: return _mm_shuffle_epi32(a, 0x97);
		case 0x98: return _mm_shuffle_epi32(a, 0x98);
		case 0x99: return _mm_shuffle_epi32(a, 0x99);
		case 0x9A: return _mm_shuffle_epi32(a, 0x9A);
		case 0x9B: return _mm_shuffle_epi32(a, 0x9B);
		case 0x9C: return _mm_shuffle_epi32(a, 0x9C);
		case 0x9D: return _mm_shuffle_epi32(a, 0x9D);
		case 0x9E: return _mm_shuffle_epi32(a, 0x9E);
		case 0x9F: return _mm_shuffle_epi32(a, 0x9F);
		case 0xA0: return _mm_shuffle_epi32(a, 0xA0);
		case 0xA1: return _mm_shuffle_epi32(a, 0xA1);
		case 0xA2: return _mm_shuffle_epi32(a, 0xA2);
		case 0xA3: return _mm_shuffle_epi32(a, 0xA3);
		case 0xA4: return _mm_shuffle_epi32(a, 0xA4);
		case 0xA5: return _mm_shuffle_epi32(a, 0xA5);
		case 0xA6: return _mm_shuffle_epi32(a, 0xA6);
		case 0xA7: return _mm_shuffle_epi32(a, 0xA7);
		case 0xA8: return _mm_shuffle_epi32(a, 0xA8);
		case 0xA9: return _mm_shuffle_epi32(a, 0xA9);
		case 0xAA: return _mm_shuffle_epi32(a, 0xAA);
		case 0xAB: return _mm_shuffle_epi32(a, 0xAB);
		case 0xAC: return _mm_shuffle_epi32(a, 0xAC);
		case 0xAD: return _mm_shuffle_epi32(a, 0xAD);
		case 0xAE: return _mm_shuffle_epi32(a, 0xAE);
		case 0xAF: return _mm_shuffle_epi32(a, 0xAF);
		case 0xB0: return _mm_shuffle_epi32(a, 0xB0);
		case 0xB1: return _mm_shuffle_epi32(a, 0xB1);
		case 0xB2: return _mm_shuffle_epi32(a, 0xB2);
		case 0xB3: return _mm_shuffle_epi32(a, 0xB3);
		case 0xB4: return _mm_shuffle_epi32(a, 0xB4);
		case 0xB5: return _mm_shuffle_epi32(a, 0xB5);
		case 0xB6: return _mm_shuffle_epi32(a, 0xB6);
		case 0xB7: return _mm_shuffle_epi32(a, 0xB7);
		case 0xB8: return _mm_shuffle_epi32(a, 0xB8);
		case 0xB9: return _mm_shuffle_epi32(a, 0xB9);
		case 0xBA: return _mm_shuffle_epi32(a, 0xBA);
		case 0xBB: return _mm_shuffle_epi32(a, 0xBB);
		case 0xBC: return _mm_shuffle_epi32(a, 0xBC);
		case 0xBD: return _mm_shuffle_epi32(a, 0xBD);
		case 0xBE: return _mm_shuffle_epi32(a, 0xBE);
		case 0xBF: return _mm_shuffle_epi32(a, 0xBF);
		case 0xC0: return _mm_shuffle_epi32(a, 0xC0);
		case 0xC1: return _mm_shuffle_epi32(a, 0xC1);
		case 0xC2: return _mm_shuffle_epi32(a, 0xC2);
		case 0xC3: return _mm_shuffle_epi32(a, 0xC3);
		case 0xC4: return _mm_shuffle_epi32(a, 0xC4);
		case 0xC5: return _mm_shuffle_epi32(a, 0xC5);
		case 0xC6: return _mm_shuffle_epi32(a, 0xC6);
		case 0xC7: return _mm_shuffle_epi32(a, 0xC7);
		case 0xC8: return _mm_shuffle_epi32(a, 0xC8);
		case 0xC9: return _mm_shuffle_epi32(a, 0xC9);
		case 0xCA: return _mm_shuffle_epi32(a, 0xCA);
		case 0xCB: return _mm_shuffle_epi32(a, 0xCB);
		case 0xCC: return _mm_shuffle_epi32(a, 0xCC);
		case 0xCD: return _mm_shuffle_epi32(a, 0xCD);
		case 0xCE: return _mm_shuffle_epi32(a, 0xCE);
		case 0xCF: return _mm_shuffle_epi32(a, 0xCF);
		case 0xD0: return _mm_shuffle_epi32(a, 0xD0);
		case 0xD1: return _mm_shuffle_epi32(a, 0xD1);
		case 0xD2: return _mm_shuffle_epi32(a, 0xD2);
		case 0xD3: return _mm_shuffle_epi32(a, 0xD3);
		case 0xD4: return _mm_shuffle_epi32(a, 0xD4);
		case 0xD5: return _mm_shuffle_epi32(a, 0xD5);
		case 0xD6: return _mm_shuffle_epi32(a, 0xD6);
		case 0xD7: return _mm_shuffle_epi32(a, 0xD7);
		case 0xD8: return _mm_shuffle_epi32(a, 0xD8);
		case 0xD9: return _mm_shuffle_epi32(a, 0xD9);
		case 0xDA: return _mm_shuffle_epi32(a, 0xDA);
		case 0xDB: return _mm_shuffle_epi32(a, 0xDB);
		case 0xDC: return _mm_shuffle_epi32(a, 0xDC);
		case 0xDD: return _mm_shuffle_epi32(a, 0xDD);
		case 0xDE: return _mm_shuffle_epi32(a, 0xDE);
		case 0xDF: return _mm_shuffle_epi32(a, 0xDF);
		case 0xE0: return _mm_shuffle_epi32(a, 0xE0);
		case 0xE1: return _mm_shuffle_epi32(a, 0xE1);
		case 0xE2: return _mm_shuffle_epi32(a, 0xE2);
		case 0xE3: return _mm_shuffle_epi32(a, 0xE3);
		case 0xE4: return _mm_shuffle_epi32(a, 0xE4);
		case 0xE5: return _mm_shuffle_epi32(a, 0xE5);
		case 0xE6: return _mm_shuffle_epi32(a, 0xE6);
		case 0xE7: return _mm_shuffle_epi32(a, 0xE7);
		case 0xE8: return _mm_shuffle_epi32(a, 0xE8);
		case 0xE9: return _mm_shuffle_epi32(a, 0xE9);
		case 0xEA: return _mm_shuffle_epi32(a, 0xEA);
		case 0xEB: return _mm_shuffle_epi32(a, 0xEB);
		case 0xEC: return _mm_shuffle_epi32(a, 0xEC);
		case 0xED: return _mm_shuffle_epi32(a, 0xED);
		case 0xEE: return _mm_shuffle_epi32(a, 0xEE);
		case 0xEF: return _mm_shuffle_epi32(a, 0xEF);
		case 0xF0: return _mm_shuffle_epi32(a, 0xF0);
		case 0xF1: return _mm_shuffle_epi32(a, 0xF1);
		case 0xF2: return _mm_shuffle_epi32(a, 0xF2);
		case 0xF3: return _mm_shuffle_epi32(a, 0xF3);
		case 0xF4: return _mm_shuffle_epi32(a, 0xF4);
		case 0xF5: return _mm_shuffle_epi32(a, 0xF5);
		case 0xF6: return _mm_shuffle_epi32(a, 0xF6);
		case 0xF7: return _mm_shuffle_epi32(a, 0xF7);
		case 0xF8: return _mm_shuffle_epi32(a, 0xF8);
		case 0xF9: return _mm_shuffle_epi32(a, 0xF9);
		case 0xFA: return _mm_shuffle_epi32(a, 0xFA);
		case 0xFB: return _mm_shuffle_epi32(a, 0xFB);
		case 0xFC: return _mm_shuffle_epi32(a, 0xFC);
		case 0xFD: return _mm_shuffle_epi32(a, 0xFD);
		case 0xFE: return _mm_shuffle_epi32(a, 0xFE);
		default:   return _mm_shuffle_epi32(a, 0xFF);
	}
}

__m128d sse2_shuffle_pd(__m128d a, __m128d b, int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_shuffle_pd(a, b, 0);
		case 1:  return _mm_shuffle_pd(a, b, 1);
		case 2:  return _mm_shuffle_pd(a, b, 2);
		default: return _mm_shuffle_pd(a, b, 3);
	}
}

__m128i sse2_shufflehi_epi16(__m128i a, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_shufflehi_epi16(a, 0x00);
		case 0x01: return _mm_shufflehi_epi16(a, 0x01);
		case 0x02: return _mm_shufflehi_epi16(a, 0x02);
		case 0x03: return _mm_shufflehi_epi16(a, 0x03);
		case 0x04: return _mm_shufflehi_epi16(a, 0x04);
		case 0x05: return _mm_shufflehi_epi16(a, 0x05);
		case 0x06: return _mm_shufflehi_epi16(a, 0x06);
		case 0x07: return _mm_shufflehi_epi16(a, 0x07);
		case 0x08: return _mm_shufflehi_epi16(a, 0x08);
		case 0x09: return _mm_shufflehi_epi16(a, 0x09);
		case 0x0A: return _mm_shufflehi_epi16(a, 0x0A);
		case 0x0B: return _mm_shufflehi_epi16(a, 0x0B);
		case 0x0C: return _mm_shufflehi_epi16(a, 0x0C);
		case 0x0D: return _mm_shufflehi_epi16(a, 0x0D);
		case 0x0E: return _mm_shufflehi_epi16(a, 0x0E);
		case 0x0F: return _mm_shufflehi_epi16(a, 0x0F);
		case 0x10: return _mm_shufflehi_epi16(a, 0x10);
		case 0x11: return _mm_shufflehi_epi16(a, 0x11);
		case 0x12: return _mm_shufflehi_epi16(a, 0x12);
		case 0x13: return _mm_shufflehi_epi16(a, 0x13);
		case 0x14: return _mm_shufflehi_epi16(a, 0x14);
		case 0x15: return _mm_shufflehi_epi16(a, 0x15);
		case 0x16: return _mm_shufflehi_epi16(a, 0x16);
		case 0x17: return _mm_shufflehi_epi16(a, 0x17);
		case 0x18: return _mm_shufflehi_epi16(a, 0x18);
		case 0x19: return _mm_shufflehi_epi16(a, 0x19);
		case 0x1A: return _mm_shufflehi_epi16(a, 0x1A);
		case 0x1B: return _mm_shufflehi_epi16(a, 0x1B);
		case 0x1C: return _mm_shufflehi_epi16(a, 0x1C);
		case 0x1D: return _mm_shufflehi_epi16(a, 0x1D);
		case 0x1E: return _mm_shufflehi_epi16(a, 0x1E);
		case 0x1F: return _mm_shufflehi_epi16(a, 0x1F);
		case 0x20: return _mm_shufflehi_epi16(a, 0x20);
		case 0x21: return _mm_shufflehi_epi16(a, 0x21);
		case 0x22: return _mm_shufflehi_epi16(a, 0x22);
		case 0x23: return _mm_shufflehi_epi16(a, 0x23);
		case 0x24: return _mm_shufflehi_epi16(a, 0x24);
		case 0x25: return _mm_shufflehi_epi16(a, 0x25);
		case 0x26: return _mm_shufflehi_epi16(a, 0x26);
		case 0x27: return _mm_shufflehi_epi16(a, 0x27);
		case 0x28: return _mm_shufflehi_epi16(a, 0x28);
		case 0x29: return _mm_shufflehi_epi16(a, 0x29);
		case 0x2A: return _mm_shufflehi_epi16(a, 0x2A);
		case 0x2B: return _mm_shufflehi_epi16(a, 0x2B);
		case 0x2C: return _mm_shufflehi_epi16(a, 0x2C);
		case 0x2D: return _mm_shufflehi_epi16(a, 0x2D);
		case 0x2E: return _mm_shufflehi_epi16(a, 0x2E);
		case 0x2F: return _mm_shufflehi_epi16(a, 0x2F);
		case 0x30: return _mm_shufflehi_epi16(a, 0x30);
		case 0x31: return _mm_shufflehi_epi16(a, 0x31);
		case 0x32: return _mm_shufflehi_epi16(a, 0x32);
		case 0x33: return _mm_shufflehi_epi16(a, 0x33);
		case 0x34: return _mm_shufflehi_epi16(a, 0x34);
		case 0x35: return _mm_shufflehi_epi16(a, 0x35);
		case 0x36: return _mm_shufflehi_epi16(a, 0x36);
		case 0x37: return _mm_shufflehi_epi16(a, 0x37);
		case 0x38: return _mm_shufflehi_epi16(a, 0x38);
		case 0x39: return _mm_shufflehi_epi16(a, 0x39);
		case 0x3A: return _mm_shufflehi_epi16(a, 0x3A);
		case 0x3B: return _mm_shufflehi_epi16(a, 0x3B);
		case 0x3C: return _mm_shufflehi_epi16(a, 0x3C);
		case 0x3D: return _mm_shufflehi_epi16(a, 0x3D);
		case 0x3E: return _mm_shufflehi_epi16(a, 0x3E);
		case 0x3F: return _mm_shufflehi_epi16(a, 0x3F);
		case 0x40: return _mm_shufflehi_epi16(a, 0x40);
		case 0x41: return _mm_shufflehi_epi16(a, 0x41);
		case 0x42: return _mm_shufflehi_epi16(a, 0x42);
		case 0x43: return _mm_shufflehi_epi16(a, 0x43);
		case 0x44: return _mm_shufflehi_epi16(a, 0x44);
		case 0x45: return _mm_shufflehi_epi16(a, 0x45);
		case 0x46: return _mm_shufflehi_epi16(a, 0x46);
		case 0x47: return _mm_shufflehi_epi16(a, 0x47);
		case 0x48: return _mm_shufflehi_epi16(a, 0x48);
		case 0x49: return _mm_shufflehi_epi16(a, 0x49);
		case 0x4A: return _mm_shufflehi_epi16(a, 0x4A);
		case 0x4B: return _mm_shufflehi_epi16(a, 0x4B);
		case 0x4C: return _mm_shufflehi_epi16(a, 0x4C);
		case 0x4D: return _mm_shufflehi_epi16(a, 0x4D);
		case 0x4E: return _mm_shufflehi_epi16(a, 0x4E);
		case 0x4F: return _mm_shufflehi_epi16(a, 0x4F);
		case 0x50: return _mm_shufflehi_epi16(a, 0x50);
		case 0x51: return _mm_shufflehi_epi16(a, 0x51);
		case 0x52: return _mm_shufflehi_epi16(a, 0x52);
		case 0x53: return _mm_shufflehi_epi16(a, 0x53);
		case 0x54: return _mm_shufflehi_epi16(a, 0x54);
		case 0x55: return _mm_shufflehi_epi16(a, 0x55);
		case 0x56: return _mm_shufflehi_epi16(a, 0x56);
		case 0x57: return _mm_shufflehi_epi16(a, 0x57);
		case 0x58: return _mm_shufflehi_epi16(a, 0x58);
		case 0x59: return _mm_shufflehi_epi16(a, 0x59);
		case 0x5A: return _mm_shufflehi_epi16(a, 0x5A);
		case 0x5B: return _mm_shufflehi_epi16(a, 0x5B);
		case 0x5C: return _mm_shufflehi_epi16(a, 0x5C);
		case 0x5D: return _mm_shufflehi_epi16(a, 0x5D);
		case 0x5E: return _mm_shufflehi_epi16(a, 0x5E);
		case 0x5F: return _mm_shufflehi_epi16(a, 0x5F);
		case 0x60: return _mm_shufflehi_epi16(a, 0x60);
		case 0x61: return _mm_shufflehi_epi16(a, 0x61);
		case 0x62: return _mm_shufflehi_epi16(a, 0x62);
		case 0x63: return _mm_shufflehi_epi16(a, 0x63);
		case 0x64: return _mm_shufflehi_epi16(a, 0x64);
		case 0x65: return _mm_shufflehi_epi16(a, 0x65);
		case 0x66: return _mm_shufflehi_epi16(a, 0x66);
		case 0x67: return _mm_shufflehi_epi16(a, 0x67);
		case 0x68: return _mm_shufflehi_epi16(a, 0x68);
		case 0x69: return _mm_shufflehi_epi16(a, 0x69);
		case 0x6A: return _mm_shufflehi_epi16(a, 0x6A);
		case 0x6B: return _mm_shufflehi_epi16(a, 0x6B);
		case 0x6C: return _mm_shufflehi_epi16(a, 0x6C);
		case 0x6D: return _mm_shufflehi_epi16(a, 0x6D);
		case 0x6E: return _mm_shufflehi_epi16(a, 0x6E);
		case 0x6F: return _mm_shufflehi_epi16(a, 0x6F);
		case 0x70: return _mm_shufflehi_epi16(a, 0x70);
		case 0x71: return _mm_shufflehi_epi16(a, 0x71);
		case 0x72: return _mm_shufflehi_epi16(a, 0x72);
		case 0x73: return _mm_shufflehi_epi16(a, 0x73);
		case 0x74: return _mm_shufflehi_epi16(a, 0x74);
		case 0x75: return _mm_shufflehi_epi16(a, 0x75);
		case 0x76: return _mm_shufflehi_epi16(a, 0x76);
		case 0x77: return _mm_shufflehi_epi16(a, 0x77);
		case 0x78: return _mm_shufflehi_epi16(a, 0x78);
		case 0x79: return _mm_shufflehi_epi16(a, 0x79);
		case 0x7A: return _mm_shufflehi_epi16(a, 0x7A);
		case 0x7B: return _mm_shufflehi_epi16(a, 0x7B);
		case 0x7C: return _mm_shufflehi_epi16(a, 0x7C);
		case 0x7D: return _mm_shufflehi_epi16(a, 0x7D);
		case 0x7E: return _mm_shufflehi_epi16(a, 0x7E);
		case 0x7F: return _mm_shufflehi_epi16(a, 0x7F);
		case 0x80: return _mm_shufflehi_epi16(a, 0x80);
		case 0x81: return _mm_shufflehi_epi16(a, 0x81);
		case 0x82: return _mm_shufflehi_epi16(a, 0x82);
		case 0x83: return _mm_shufflehi_epi16(a, 0x83);
		case 0x84: return _mm_shufflehi_epi16(a, 0x84);
		case 0x85: return _mm_shufflehi_epi16(a, 0x85);
		case 0x86: return _mm_shufflehi_epi16(a, 0x86);
		case 0x87: return _mm_shufflehi_epi16(a, 0x87);
		case 0x88: return _mm_shufflehi_epi16(a, 0x88);
		case 0x89: return _mm_shufflehi_epi16(a, 0x89);
		case 0x8A: return _mm_shufflehi_epi16(a, 0x8A);
		case 0x8B: return _mm_shufflehi_epi16(a, 0x8B);
		case 0x8C: return _mm_shufflehi_epi16(a, 0x8C);
		case 0x8D: return _mm_shufflehi_epi16(a, 0x8D);
		case 0x8E: return _mm_shufflehi_epi16(a, 0x8E);
		case 0x8F: return _mm_shufflehi_epi16(a, 0x8F);
		case 0x90: return _mm_shufflehi_epi16(a, 0x90);
		case 0x91: return _mm_shufflehi_epi16(a, 0x91);
		case 0x92: return _mm_shufflehi_epi16(a, 0x92);
		case 0x93: return _mm_shufflehi_epi16(a, 0x93);
		case 0x94: return _mm_shufflehi_epi16(a, 0x94);
		case 0x95: return _mm_shufflehi_epi16(a, 0x95);
		case 0x96: return _mm_shufflehi_epi16(a, 0x96);
		case 0x97: return _mm_shufflehi_epi16(a, 0x97);
		case 0x98: return _mm_shufflehi_epi16(a, 0x98);
		case 0x99: return _mm_shufflehi_epi16(a, 0x99);
		case 0x9A: return _mm_shufflehi_epi16(a, 0x9A);
		case 0x9B: return _mm_shufflehi_epi16(a, 0x9B);
		case 0x9C: return _mm_shufflehi_epi16(a, 0x9C);
		case 0x9D: return _mm_shufflehi_epi16(a, 0x9D);
		case 0x9E: return _mm_shufflehi_epi16(a, 0x9E);
		case 0x9F: return _mm_shufflehi_epi16(a, 0x9F);
		case 0xA0: return _mm_shufflehi_epi16(a, 0xA0);
		case 0xA1: return _mm_shufflehi_epi16(a, 0xA1);
		case 0xA2: return _mm_shufflehi_epi16(a, 0xA2);
		case 0xA3: return _mm_shufflehi_epi16(a, 0xA3);
		case 0xA4: return _mm_shufflehi_epi16(a, 0xA4);
		case 0xA5: return _mm_shufflehi_epi16(a, 0xA5);
		case 0xA6: return _mm_shufflehi_epi16(a, 0xA6);
		case 0xA7: return _mm_shufflehi_epi16(a, 0xA7);
		case 0xA8: return _mm_shufflehi_epi16(a, 0xA8);
		case 0xA9: return _mm_shufflehi_epi16(a, 0xA9);
		case 0xAA: return _mm_shufflehi_epi16(a, 0xAA);
		case 0xAB: return _mm_shufflehi_epi16(a, 0xAB);
		case 0xAC: return _mm_shufflehi_epi16(a, 0xAC);
		case 0xAD: return _mm_shufflehi_epi16(a, 0xAD);
		case 0xAE: return _mm_shufflehi_epi16(a, 0xAE);
		case 0xAF: return _mm_shufflehi_epi16(a, 0xAF);
		case 0xB0: return _mm_shufflehi_epi16(a, 0xB0);
		case 0xB1: return _mm_shufflehi_epi16(a, 0xB1);
		case 0xB2: return _mm_shufflehi_epi16(a, 0xB2);
		case 0xB3: return _mm_shufflehi_epi16(a, 0xB3);
		case 0xB4: return _mm_shufflehi_epi16(a, 0xB4);
		case 0xB5: return _mm_shufflehi_epi16(a, 0xB5);
		case 0xB6: return _mm_shufflehi_epi16(a, 0xB6);
		case 0xB7: return _mm_shufflehi_epi16(a, 0xB7);
		case 0xB8: return _mm_shufflehi_epi16(a, 0xB8);
		case 0xB9: return _mm_shufflehi_epi16(a, 0xB9);
		case 0xBA: return _mm_shufflehi_epi16(a, 0xBA);
		case 0xBB: return _mm_shufflehi_epi16(a, 0xBB);
		case 0xBC: return _mm_shufflehi_epi16(a, 0xBC);
		case 0xBD: return _mm_shufflehi_epi16(a, 0xBD);
		case 0xBE: return _mm_shufflehi_epi16(a, 0xBE);
		case 0xBF: return _mm_shufflehi_epi16(a, 0xBF);
		case 0xC0: return _mm_shufflehi_epi16(a, 0xC0);
		case 0xC1: return _mm_shufflehi_epi16(a, 0xC1);
		case 0xC2: return _mm_shufflehi_epi16(a, 0xC2);
		case 0xC3: return _mm_shufflehi_epi16(a, 0xC3);
		case 0xC4: return _mm_shufflehi_epi16(a, 0xC4);
		case 0xC5: return _mm_shufflehi_epi16(a, 0xC5);
		case 0xC6: return _mm_shufflehi_epi16(a, 0xC6);
		case 0xC7: return _mm_shufflehi_epi16(a, 0xC7);
		case 0xC8: return _mm_shufflehi_epi16(a, 0xC8);
		case 0xC9: return _mm_shufflehi_epi16(a, 0xC9);
		case 0xCA: return _mm_shufflehi_epi16(a, 0xCA);
		case 0xCB: return _mm_shufflehi_epi16(a, 0xCB);
		case 0xCC: return _mm_shufflehi_epi16(a, 0xCC);
		case 0xCD: return _mm_shufflehi_epi16(a, 0xCD);
		case 0xCE: return _mm_shufflehi_epi16(a, 0xCE);
		case 0xCF: return _mm_shufflehi_epi16(a, 0xCF);
		case 0xD0: return _mm_shufflehi_epi16(a, 0xD0);
		case 0xD1: return _mm_shufflehi_epi16(a, 0xD1);
		case 0xD2: return _mm_shufflehi_epi16(a, 0xD2);
		case 0xD3: return _mm_shufflehi_epi16(a, 0xD3);
		case 0xD4: return _mm_shufflehi_epi16(a, 0xD4);
		case 0xD5: return _mm_shufflehi_epi16(a, 0xD5);
		case 0xD6: return _mm_shufflehi_epi16(a, 0xD6);
		case 0xD7: return _mm_shufflehi_epi16(a, 0xD7);
		case 0xD8: return _mm_shufflehi_epi16(a, 0xD8);
		case 0xD9: return _mm_shufflehi_epi16(a, 0xD9);
		case 0xDA: return _mm_shufflehi_epi16(a, 0xDA);
		case 0xDB: return _mm_shufflehi_epi16(a, 0xDB);
		case 0xDC: return _mm_shufflehi_epi16(a, 0xDC);
		case 0xDD: return _mm_shufflehi_epi16(a, 0xDD);
		case 0xDE: return _mm_shufflehi_epi16(a, 0xDE);
		case 0xDF: return _mm_shufflehi_epi16(a, 0xDF);
		case 0xE0: return _mm_shufflehi_epi16(a, 0xE0);
		case 0xE1: return _mm_shufflehi_epi16(a, 0xE1);
		case 0xE2: return _mm_shufflehi_epi16(a, 0xE2);
		case 0xE3: return _mm_shufflehi_epi16(a, 0xE3);
		case 0xE4: return _mm_shufflehi_epi16(a, 0xE4);
		case 0xE5: return _mm_shufflehi_epi16(a, 0xE5);
		case 0xE6: return _mm_shufflehi_epi16(a, 0xE6);
		case 0xE7: return _mm_shufflehi_epi16(a, 0xE7);
		case 0xE8: return _mm_shufflehi_epi16(a, 0xE8);
		case 0xE9: return _mm_shufflehi_epi16(a, 0xE9);
		case 0xEA: return _mm_shufflehi_epi16(a, 0xEA);
		case 0xEB: return _mm_shufflehi_epi16(a, 0xEB);
		case 0xEC: return _mm_shufflehi_epi16(a, 0xEC);
		case 0xED: return _mm_shufflehi_epi16(a, 0xED);
		case 0xEE: return _mm_shufflehi_epi16(a, 0xEE);
		case 0xEF: return _mm_shufflehi_epi16(a, 0xEF);
		case 0xF0: return _mm_shufflehi_epi16(a, 0xF0);
		case 0xF1: return _mm_shufflehi_epi16(a, 0xF1);
		case 0xF2: return _mm_shufflehi_epi16(a, 0xF2);
		case 0xF3: return _mm_shufflehi_epi16(a, 0xF3);
		case 0xF4: return _mm_shufflehi_epi16(a, 0xF4);
		case 0xF5: return _mm_shufflehi_epi16(a, 0xF5);
		case 0xF6: return _mm_shufflehi_epi16(a, 0xF6);
		case 0xF7: return _mm_shufflehi_epi16(a, 0xF7);
		case 0xF8: return _mm_shufflehi_epi16(a, 0xF8);
		case 0xF9: return _mm_shufflehi_epi16(a, 0xF9);
		case 0xFA: return _mm_shufflehi_epi16(a, 0xFA);
		case 0xFB: return _mm_shufflehi_epi16(a, 0xFB);
		case 0xFC: return _mm_shufflehi_epi16(a, 0xFC);
		case 0xFD: return _mm_shufflehi_epi16(a, 0xFD);
		case 0xFE: return _mm_shufflehi_epi16(a, 0xFE);
		default:   return _mm_shufflehi_epi16(a, 0xFF);
	}
}

__m128i sse2_shufflelo_epi16(__m128i a, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_shufflelo_epi16(a, 0x00);
		case 0x01: return _mm_shufflelo_epi16(a, 0x01);
		case 0x02: return _mm_shufflelo_epi16(a, 0x02);
		case 0x03: return _mm_shufflelo_epi16(a, 0x03);
		case 0x04: return _mm_shufflelo_epi16(a, 0x04);
		case 0x05: return _mm_shufflelo_epi16(a, 0x05);
		case 0x06: return _mm_shufflelo_epi16(a, 0x06);
		case 0x07: return _mm_shufflelo_epi16(a, 0x07);
		case 0x08: return _mm_shufflelo_epi16(a, 0x08);
		case 0x09: return _mm_shufflelo_epi16(a, 0x09);
		case 0x0A: return _mm_shufflelo_epi16(a, 0x0A);
		case 0x0B: return _mm_shufflelo_epi16(a, 0x0B);
		case 0x0C: return _mm_shufflelo_epi16(a, 0x0C);
		case 0x0D: return _mm_shufflelo_epi16(a, 0x0D);
		case 0x0E: return _mm_shufflelo_epi16(a, 0x0E);
		case 0x0F: return _mm_shufflelo_epi16(a, 0x0F);
		case 0x10: return _mm_shufflelo_epi16(a, 0x10);
		case 0x11: return _mm_shufflelo_epi16(a, 0x11);
		case 0x12: return _mm_shufflelo_epi16(a, 0x12);
		case 0x13: return _mm_shufflelo_epi16(a, 0x13);
		case 0x14: return _mm_shufflelo_epi16(a, 0x14);
		case 0x15: return _mm_shufflelo_epi16(a, 0x15);
		case 0x16: return _mm_shufflelo_epi16(a, 0x16);
		case 0x17: return _mm_shufflelo_epi16(a, 0x17);
		case 0x18: return _mm_shufflelo_epi16(a, 0x18);
		case 0x19: return _mm_shufflelo_epi16(a, 0x19);
		case 0x1A: return _mm_shufflelo_epi16(a, 0x1A);
		case 0x1B: return _mm_shufflelo_epi16(a, 0x1B);
		case 0x1C: return _mm_shufflelo_epi16(a, 0x1C);
		case 0x1D: return _mm_shufflelo_epi16(a, 0x1D);
		case 0x1E: return _mm_shufflelo_epi16(a, 0x1E);
		case 0x1F: return _mm_shufflelo_epi16(a, 0x1F);
		case 0x20: return _mm_shufflelo_epi16(a, 0x20);
		case 0x21: return _mm_shufflelo_epi16(a, 0x21);
		case 0x22: return _mm_shufflelo_epi16(a, 0x22);
		case 0x23: return _mm_shufflelo_epi16(a, 0x23);
		case 0x24: return _mm_shufflelo_epi16(a, 0x24);
		case 0x25: return _mm_shufflelo_epi16(a, 0x25);
		case 0x26: return _mm_shufflelo_epi16(a, 0x26);
		case 0x27: return _mm_shufflelo_epi16(a, 0x27);
		case 0x28: return _mm_shufflelo_epi16(a, 0x28);
		case 0x29: return _mm_shufflelo_epi16(a, 0x29);
		case 0x2A: return _mm_shufflelo_epi16(a, 0x2A);
		case 0x2B: return _mm_shufflelo_epi16(a, 0x2B);
		case 0x2C: return _mm_shufflelo_epi16(a, 0x2C);
		case 0x2D: return _mm_shufflelo_epi16(a, 0x2D);
		case 0x2E: return _mm_shufflelo_epi16(a, 0x2E);
		case 0x2F: return _mm_shufflelo_epi16(a, 0x2F);
		case 0x30: return _mm_shufflelo_epi16(a, 0x30);
		case 0x31: return _mm_shufflelo_epi16(a, 0x31);
		case 0x32: return _mm_shufflelo_epi16(a, 0x32);
		case 0x33: return _mm_shufflelo_epi16(a, 0x33);
		case 0x34: return _mm_shufflelo_epi16(a, 0x34);
		case 0x35: return _mm_shufflelo_epi16(a, 0x35);
		case 0x36: return _mm_shufflelo_epi16(a, 0x36);
		case 0x37: return _mm_shufflelo_epi16(a, 0x37);
		case 0x38: return _mm_shufflelo_epi16(a, 0x38);
		case 0x39: return _mm_shufflelo_epi16(a, 0x39);
		case 0x3A: return _mm_shufflelo_epi16(a, 0x3A);
		case 0x3B: return _mm_shufflelo_epi16(a, 0x3B);
		case 0x3C: return _mm_shufflelo_epi16(a, 0x3C);
		case 0x3D: return _mm_shufflelo_epi16(a, 0x3D);
		case 0x3E: return _mm_shufflelo_epi16(a, 0x3E);
		case 0x3F: return _mm_shufflelo_epi16(a, 0x3F);
		case 0x40: return _mm_shufflelo_epi16(a, 0x40);
		case 0x41: return _mm_shufflelo_epi16(a, 0x41);
		case 0x42: return _mm_shufflelo_epi16(a, 0x42);
		case 0x43: return _mm_shufflelo_epi16(a, 0x43);
		case 0x44: return _mm_shufflelo_epi16(a, 0x44);
		case 0x45: return _mm_shufflelo_epi16(a, 0x45);
		case 0x46: return _mm_shufflelo_epi16(a, 0x46);
		case 0x47: return _mm_shufflelo_epi16(a, 0x47);
		case 0x48: return _mm_shufflelo_epi16(a, 0x48);
		case 0x49: return _mm_shufflelo_epi16(a, 0x49);
		case 0x4A: return _mm_shufflelo_epi16(a, 0x4A);
		case 0x4B: return _mm_shufflelo_epi16(a, 0x4B);
		case 0x4C: return _mm_shufflelo_epi16(a, 0x4C);
		case 0x4D: return _mm_shufflelo_epi16(a, 0x4D);
		case 0x4E: return _mm_shufflelo_epi16(a, 0x4E);
		case 0x4F: return _mm_shufflelo_epi16(a, 0x4F);
		case 0x50: return _mm_shufflelo_epi16(a, 0x50);
		case 0x51: return _mm_shufflelo_epi16(a, 0x51);
		case 0x52: return _mm_shufflelo_epi16(a, 0x52);
		case 0x53: return _mm_shufflelo_epi16(a, 0x53);
		case 0x54: return _mm_shufflelo_epi16(a, 0x54);
		case 0x55: return _mm_shufflelo_epi16(a, 0x55);
		case 0x56: return _mm_shufflelo_epi16(a, 0x56);
		case 0x57: return _mm_shufflelo_epi16(a, 0x57);
		case 0x58: return _mm_shufflelo_epi16(a, 0x58);
		case 0x59: return _mm_shufflelo_epi16(a, 0x59);
		case 0x5A: return _mm_shufflelo_epi16(a, 0x5A);
		case 0x5B: return _mm_shufflelo_epi16(a, 0x5B);
		case 0x5C: return _mm_shufflelo_epi16(a, 0x5C);
		case 0x5D: return _mm_shufflelo_epi16(a, 0x5D);
		case 0x5E: return _mm_shufflelo_epi16(a, 0x5E);
		case 0x5F: return _mm_shufflelo_epi16(a, 0x5F);
		case 0x60: return _mm_shufflelo_epi16(a, 0x60);
		case 0x61: return _mm_shufflelo_epi16(a, 0x61);
		case 0x62: return _mm_shufflelo_epi16(a, 0x62);
		case 0x63: return _mm_shufflelo_epi16(a, 0x63);
		case 0x64: return _mm_shufflelo_epi16(a, 0x64);
		case 0x65: return _mm_shufflelo_epi16(a, 0x65);
		case 0x66: return _mm_shufflelo_epi16(a, 0x66);
		case 0x67: return _mm_shufflelo_epi16(a, 0x67);
		case 0x68: return _mm_shufflelo_epi16(a, 0x68);
		case 0x69: return _mm_shufflelo_epi16(a, 0x69);
		case 0x6A: return _mm_shufflelo_epi16(a, 0x6A);
		case 0x6B: return _mm_shufflelo_epi16(a, 0x6B);
		case 0x6C: return _mm_shufflelo_epi16(a, 0x6C);
		case 0x6D: return _mm_shufflelo_epi16(a, 0x6D);
		case 0x6E: return _mm_shufflelo_epi16(a, 0x6E);
		case 0x6F: return _mm_shufflelo_epi16(a, 0x6F);
		case 0x70: return _mm_shufflelo_epi16(a, 0x70);
		case 0x71: return _mm_shufflelo_epi16(a, 0x71);
		case 0x72: return _mm_shufflelo_epi16(a, 0x72);
		case 0x73: return _mm_shufflelo_epi16(a, 0x73);
		case 0x74: return _mm_shufflelo_epi16(a, 0x74);
		case 0x75: return _mm_shufflelo_epi16(a, 0x75);
		case 0x76: return _mm_shufflelo_epi16(a, 0x76);
		case 0x77: return _mm_shufflelo_epi16(a, 0x77);
		case 0x78: return _mm_shufflelo_epi16(a, 0x78);
		case 0x79: return _mm_shufflelo_epi16(a, 0x79);
		case 0x7A: return _mm_shufflelo_epi16(a, 0x7A);
		case 0x7B: return _mm_shufflelo_epi16(a, 0x7B);
		case 0x7C: return _mm_shufflelo_epi16(a, 0x7C);
		case 0x7D: return _mm_shufflelo_epi16(a, 0x7D);
		case 0x7E: return _mm_shufflelo_epi16(a, 0x7E);
		case 0x7F: return _mm_shufflelo_epi16(a, 0x7F);
		case 0x80: return _mm_shufflelo_epi16(a, 0x80);
		case 0x81: return _mm_shufflelo_epi16(a, 0x81);
		case 0x82: return _mm_shufflelo_epi16(a, 0x82);
		case 0x83: return _mm_shufflelo_epi16(a, 0x83);
		case 0x84: return _mm_shufflelo_epi16(a, 0x84);
		case 0x85: return _mm_shufflelo_epi16(a, 0x85);
		case 0x86: return _mm_shufflelo_epi16(a, 0x86);
		case 0x87: return _mm_shufflelo_epi16(a, 0x87);
		case 0x88: return _mm_shufflelo_epi16(a, 0x88);
		case 0x89: return _mm_shufflelo_epi16(a, 0x89);
		case 0x8A: return _mm_shufflelo_epi16(a, 0x8A);
		case 0x8B: return _mm_shufflelo_epi16(a, 0x8B);
		case 0x8C: return _mm_shufflelo_epi16(a, 0x8C);
		case 0x8D: return _mm_shufflelo_epi16(a, 0x8D);
		case 0x8E: return _mm_shufflelo_epi16(a, 0x8E);
		case 0x8F: return _mm_shufflelo_epi16(a, 0x8F);
		case 0x90: return _mm_shufflelo_epi16(a, 0x90);
		case 0x91: return _mm_shufflelo_epi16(a, 0x91);
		case 0x92: return _mm_shufflelo_epi16(a, 0x92);
		case 0x93: return _mm_shufflelo_epi16(a, 0x93);
		case 0x94: return _mm_shufflelo_epi16(a, 0x94);
		case 0x95: return _mm_shufflelo_epi16(a, 0x95);
		case 0x96: return _mm_shufflelo_epi16(a, 0x96);
		case 0x97: return _mm_shufflelo_epi16(a, 0x97);
		case 0x98: return _mm_shufflelo_epi16(a, 0x98);
		case 0x99: return _mm_shufflelo_epi16(a, 0x99);
		case 0x9A: return _mm_shufflelo_epi16(a, 0x9A);
		case 0x9B: return _mm_shufflelo_epi16(a, 0x9B);
		case 0x9C: return _mm_shufflelo_epi16(a, 0x9C);
		case 0x9D: return _mm_shufflelo_epi16(a, 0x9D);
		case 0x9E: return _mm_shufflelo_epi16(a, 0x9E);
		case 0x9F: return _mm_shufflelo_epi16(a, 0x9F);
		case 0xA0: return _mm_shufflelo_epi16(a, 0xA0);
		case 0xA1: return _mm_shufflelo_epi16(a, 0xA1);
		case 0xA2: return _mm_shufflelo_epi16(a, 0xA2);
		case 0xA3: return _mm_shufflelo_epi16(a, 0xA3);
		case 0xA4: return _mm_shufflelo_epi16(a, 0xA4);
		case 0xA5: return _mm_shufflelo_epi16(a, 0xA5);
		case 0xA6: return _mm_shufflelo_epi16(a, 0xA6);
		case 0xA7: return _mm_shufflelo_epi16(a, 0xA7);
		case 0xA8: return _mm_shufflelo_epi16(a, 0xA8);
		case 0xA9: return _mm_shufflelo_epi16(a, 0xA9);
		case 0xAA: return _mm_shufflelo_epi16(a, 0xAA);
		case 0xAB: return _mm_shufflelo_epi16(a, 0xAB);
		case 0xAC: return _mm_shufflelo_epi16(a, 0xAC);
		case 0xAD: return _mm_shufflelo_epi16(a, 0xAD);
		case 0xAE: return _mm_shufflelo_epi16(a, 0xAE);
		case 0xAF: return _mm_shufflelo_epi16(a, 0xAF);
		case 0xB0: return _mm_shufflelo_epi16(a, 0xB0);
		case 0xB1: return _mm_shufflelo_epi16(a, 0xB1);
		case 0xB2: return _mm_shufflelo_epi16(a, 0xB2);
		case 0xB3: return _mm_shufflelo_epi16(a, 0xB3);
		case 0xB4: return _mm_shufflelo_epi16(a, 0xB4);
		case 0xB5: return _mm_shufflelo_epi16(a, 0xB5);
		case 0xB6: return _mm_shufflelo_epi16(a, 0xB6);
		case 0xB7: return _mm_shufflelo_epi16(a, 0xB7);
		case 0xB8: return _mm_shufflelo_epi16(a, 0xB8);
		case 0xB9: return _mm_shufflelo_epi16(a, 0xB9);
		case 0xBA: return _mm_shufflelo_epi16(a, 0xBA);
		case 0xBB: return _mm_shufflelo_epi16(a, 0xBB);
		case 0xBC: return _mm_shufflelo_epi16(a, 0xBC);
		case 0xBD: return _mm_shufflelo_epi16(a, 0xBD);
		case 0xBE: return _mm_shufflelo_epi16(a, 0xBE);
		case 0xBF: return _mm_shufflelo_epi16(a, 0xBF);
		case 0xC0: return _mm_shufflelo_epi16(a, 0xC0);
		case 0xC1: return _mm_shufflelo_epi16(a, 0xC1);
		case 0xC2: return _mm_shufflelo_epi16(a, 0xC2);
		case 0xC3: return _mm_shufflelo_epi16(a, 0xC3);
		case 0xC4: return _mm_shufflelo_epi16(a, 0xC4);
		case 0xC5: return _mm_shufflelo_epi16(a, 0xC5);
		case 0xC6: return _mm_shufflelo_epi16(a, 0xC6);
		case 0xC7: return _mm_shufflelo_epi16(a, 0xC7);
		case 0xC8: return _mm_shufflelo_epi16(a, 0xC8);
		case 0xC9: return _mm_shufflelo_epi16(a, 0xC9);
		case 0xCA: return _mm_shufflelo_epi16(a, 0xCA);
		case 0xCB: return _mm_shufflelo_epi16(a, 0xCB);
		case 0xCC: return _mm_shufflelo_epi16(a, 0xCC);
		case 0xCD: return _mm_shufflelo_epi16(a, 0xCD);
		case 0xCE: return _mm_shufflelo_epi16(a, 0xCE);
		case 0xCF: return _mm_shufflelo_epi16(a, 0xCF);
		case 0xD0: return _mm_shufflelo_epi16(a, 0xD0);
		case 0xD1: return _mm_shufflelo_epi16(a, 0xD1);
		case 0xD2: return _mm_shufflelo_epi16(a, 0xD2);
		case 0xD3: return _mm_shufflelo_epi16(a, 0xD3);
		case 0xD4: return _mm_shufflelo_epi16(a, 0xD4);
		case 0xD5: return _mm_shufflelo_epi16(a, 0xD5);
		case 0xD6: return _mm_shufflelo_epi16(a, 0xD6);
		case 0xD7: return _mm_shufflelo_epi16(a, 0xD7);
		case 0xD8: return _mm_shufflelo_epi16(a, 0xD8);
		case 0xD9: return _mm_shufflelo_epi16(a, 0xD9);
		case 0xDA: return _mm_shufflelo_epi16(a, 0xDA);
		case 0xDB: return _mm_shufflelo_epi16(a, 0xDB);
		case 0xDC: return _mm_shufflelo_epi16(a, 0xDC);
		case 0xDD: return _mm_shufflelo_epi16(a, 0xDD);
		case 0xDE: return _mm_shufflelo_epi16(a, 0xDE);
		case 0xDF: return _mm_shufflelo_epi16(a, 0xDF);
		case 0xE0: return _mm_shufflelo_epi16(a, 0xE0);
		case 0xE1: return _mm_shufflelo_epi16(a, 0xE1);
		case 0xE2: return _mm_shufflelo_epi16(a, 0xE2);
		case 0xE3: return _mm_shufflelo_epi16(a, 0xE3);
		case 0xE4: return _mm_shufflelo_epi16(a, 0xE4);
		case 0xE5: return _mm_shufflelo_epi16(a, 0xE5);
		case 0xE6: return _mm_shufflelo_epi16(a, 0xE6);
		case 0xE7: return _mm_shufflelo_epi16(a, 0xE7);
		case 0xE8: return _mm_shufflelo_epi16(a, 0xE8);
		case 0xE9: return _mm_shufflelo_epi16(a, 0xE9);
		case 0xEA: return _mm_shufflelo_epi16(a, 0xEA);
		case 0xEB: return _mm_shufflelo_epi16(a, 0xEB);
		case 0xEC: return _mm_shufflelo_epi16(a, 0xEC);
		case 0xED: return _mm_shufflelo_epi16(a, 0xED);
		case 0xEE: return _mm_shufflelo_epi16(a, 0xEE);
		case 0xEF: return _mm_shufflelo_epi16(a, 0xEF);
		case 0xF0: return _mm_shufflelo_epi16(a, 0xF0);
		case 0xF1: return _mm_shufflelo_epi16(a, 0xF1);
		case 0xF2: return _mm_shufflelo_epi16(a, 0xF2);
		case 0xF3: return _mm_shufflelo_epi16(a, 0xF3);
		case 0xF4: return _mm_shufflelo_epi16(a, 0xF4);
		case 0xF5: return _mm_shufflelo_epi16(a, 0xF5);
		case 0xF6: return _mm_shufflelo_epi16(a, 0xF6);
		case 0xF7: return _mm_shufflelo_epi16(a, 0xF7);
		case 0xF8: return _mm_shufflelo_epi16(a, 0xF8);
		case 0xF9: return _mm_shufflelo_epi16(a, 0xF9);
		case 0xFA: return _mm_shufflelo_epi16(a, 0xFA);
		case 0xFB: return _mm_shufflelo_epi16(a, 0xFB);
		case 0xFC: return _mm_shufflelo_epi16(a, 0xFC);
		case 0xFD: return _mm_shufflelo_epi16(a, 0xFD);
		case 0xFE: return _mm_shufflelo_epi16(a, 0xFE);
		default:   return _mm_shufflelo_epi16(a, 0xFF);
	}
}

__m128i sse2_sll_epi16(__m128i a, __m128i count) { return _mm_sll_epi16(a, count); }

__m128i sse2_sll_epi32(__m128i a, __m128i count) { return _mm_sll_epi32(a, count); }

__m128i sse2_sll_epi64(__m128i a, __m128i count) { return _mm_sll_epi64(a, count); }

__m128i sse2_slli_epi16(__m128i a, int imm8) {
	switch (imm8) {
		case  0: return _mm_slli_epi16(a,  0);
		case  1: return _mm_slli_epi16(a,  1);
		case  2: return _mm_slli_epi16(a,  2);
		case  3: return _mm_slli_epi16(a,  3);
		case  4: return _mm_slli_epi16(a,  4);
		case  5: return _mm_slli_epi16(a,  5);
		case  6: return _mm_slli_epi16(a,  6);
		case  7: return _mm_slli_epi16(a,  7);
		case  8: return _mm_slli_epi16(a,  8);
		case  9: return _mm_slli_epi16(a,  9);
		case 10: return _mm_slli_epi16(a, 10);
		case 11: return _mm_slli_epi16(a, 11);
		case 12: return _mm_slli_epi16(a, 12);
		case 13: return _mm_slli_epi16(a, 13);
		case 14: return _mm_slli_epi16(a, 14);
		case 15: return _mm_slli_epi16(a, 15);
		default: return _mm_slli_epi16(a, 16);
	}
}

__m128i sse2_slli_epi32(__m128i a, int imm8) { return _mm_slli_epi32(a, imm8); }

__m128i sse2_slli_epi64(__m128i a, int imm8) { return _mm_slli_epi64(a, imm8); }

__m128i sse2_slli_si128(__m128i a, int imm8) {
	switch (imm8) {
		case  0: return _mm_slli_si128(a,  0);
		case  1: return _mm_slli_si128(a,  1);
		case  2: return _mm_slli_si128(a,  2);
		case  3: return _mm_slli_si128(a,  3);
		case  4: return _mm_slli_si128(a,  4);
		case  5: return _mm_slli_si128(a,  5);
		case  6: return _mm_slli_si128(a,  6);
		case  7: return _mm_slli_si128(a,  7);
		case  8: return _mm_slli_si128(a,  8);
		case  9: return _mm_slli_si128(a,  9);
		case 10: return _mm_slli_si128(a, 10);
		case 11: return _mm_slli_si128(a, 11);
		case 12: return _mm_slli_si128(a, 12);
		case 13: return _mm_slli_si128(a, 13);
		case 14: return _mm_slli_si128(a, 14);
		case 15: return _mm_slli_si128(a, 15);
		default: return _mm_slli_si128(a, 16);
	}
}

__m128d sse2_sqrt_pd(__m128d a) { return _mm_sqrt_pd(a); }

__m128d sse2_sqrt_sd(__m128d a, __m128d b) { return _mm_sqrt_sd(a, b); }

__m128i sse2_sra_epi16(__m128i a, __m128i count) { return _mm_sra_epi16(a, count); }

__m128i sse2_sra_epi32(__m128i a, __m128i count) { return _mm_sra_epi32(a, count); }

__m128i sse2_srai_epi16(__m128i a, int imm8) { return _mm_srai_epi16(a, imm8); }

__m128i sse2_srai_epi32(__m128i a, int imm8) { return _mm_srai_epi32(a, imm8); }

__m128i sse2_srl_epi16(__m128i a, __m128i count) { return _mm_srl_epi16(a, count); }

__m128i sse2_srl_epi32(__m128i a, __m128i count) { return _mm_srl_epi32(a, count); }

__m128i sse2_srl_epi64(__m128i a, __m128i count) { return _mm_srl_epi64(a, count); }

__m128i sse2_srli_epi16(__m128i a, int imm8) { return _mm_srli_epi16(a, imm8); }

__m128i sse2_srli_epi32(__m128i a, int imm8) { return _mm_srli_epi32(a, imm8); }

__m128i sse2_srli_epi64(__m128i a, int imm8) { return _mm_srli_epi64(a, imm8); }

__m128i sse2_srli_si128(__m128i a, int imm8) {
	switch (imm8) {
		case  0: return _mm_srli_si128(a,  0);
		case  1: return _mm_srli_si128(a,  1);
		case  2: return _mm_srli_si128(a,  2);
		case  3: return _mm_srli_si128(a,  3);
		case  4: return _mm_srli_si128(a,  4);
		case  5: return _mm_srli_si128(a,  5);
		case  6: return _mm_srli_si128(a,  6);
		case  7: return _mm_srli_si128(a,  7);
		case  8: return _mm_srli_si128(a,  8);
		case  9: return _mm_srli_si128(a,  9);
		case 10: return _mm_srli_si128(a, 10);
		case 11: return _mm_srli_si128(a, 11);
		case 12: return _mm_srli_si128(a, 12);
		case 13: return _mm_srli_si128(a, 13);
		case 14: return _mm_srli_si128(a, 14);
		case 15: return _mm_srli_si128(a, 15);
		default: return _mm_srli_si128(a, 16);
	}
}

void sse2_store_pd(double* mem_addr, __m128d a) { return _mm_store_pd(mem_addr, a); }

void sse2_store_pd1(double* mem_addr, __m128d a) { return _mm_store_pd1(mem_addr, a); }

void sse2_store_sd(double* mem_addr, __m128d a) { return _mm_store_sd(mem_addr, a); }

void sse2_store_si128(__m128i* mem_addr, __m128i a) { return _mm_store_si128(mem_addr, a); }

void sse2_store1_pd(double* mem_addr, __m128d a) { return _mm_store1_pd(mem_addr, a); }

void sse2_storeh_pd(double* mem_addr, __m128d a) { return _mm_storeh_pd(mem_addr, a); }

void sse2_storel_epi64(__m128i* mem_addr, __m128i a) { return _mm_storel_epi64(mem_addr, a); }

void sse2_storel_pd(double* mem_addr, __m128d a) { return _mm_storel_pd(mem_addr, a); }

void sse2_storer_pd(double* mem_addr, __m128d a) { return _mm_storer_pd(mem_addr, a); }

void sse2_storeu_pd(double* mem_addr, __m128d a) { return _mm_storeu_pd(mem_addr, a); }

void sse2_storeu_si128(__m128i* mem_addr, __m128i a) { return _mm_storeu_si128(mem_addr, a); }

void sse2_storeu_si32(void* mem_addr, __m128i a) { return _mm_storeu_si32(mem_addr, a); }

void sse2_stream_pd(double* mem_addr, __m128d a) { return _mm_stream_pd(mem_addr, a); }

void sse2_stream_si128(__m128i* mem_addr, __m128i a) { return _mm_stream_si128(mem_addr, a); }

void sse2_stream_si32(int* mem_addr, int a) { return _mm_stream_si32(mem_addr, a); }

void sse2_stream_si64(long long* mem_addr, long long a) { return _mm_stream_si64(mem_addr, a); }

__m128i sse2_sub_epi16(__m128i a, __m128i b) { return _mm_sub_epi16(a, b); }

__m128i sse2_sub_epi32(__m128i a, __m128i b) { return _mm_sub_epi32(a, b); }

__m128i sse2_sub_epi64(__m128i a, __m128i b) { return _mm_sub_epi64(a, b); }

__m128i sse2_sub_epi8(__m128i a, __m128i b) { return _mm_sub_epi8(a, b); }

__m128d sse2_sub_pd(__m128d a, __m128d b) { return _mm_sub_pd(a, b); }

__m128d sse2_sub_sd(__m128d a, __m128d b) { return _mm_sub_sd(a, b); }

__m128i sse2_subs_epi16(__m128i a, __m128i b) { return _mm_subs_epi16(a, b); }

__m128i sse2_subs_epi8(__m128i a, __m128i b) { return _mm_subs_epi8(a, b); }

__m128i sse2_subs_epu16(__m128i a, __m128i b) { return _mm_subs_epu16(a, b); }

__m128i sse2_subs_epu8(__m128i a, __m128i b) { return _mm_subs_epu8(a, b); }

int sse2_ucomieq_sd(__m128d a, __m128d b) { return _mm_ucomieq_sd(a, b); }

int sse2_ucomige_sd(__m128d a, __m128d b) { return _mm_ucomige_sd(a, b); }

int sse2_ucomigt_sd(__m128d a, __m128d b) { return _mm_ucomigt_sd(a, b); }

int sse2_ucomile_sd(__m128d a, __m128d b) { return _mm_ucomile_sd(a, b); }

int sse2_ucomilt_sd(__m128d a, __m128d b) { return _mm_ucomilt_sd(a, b); }

int sse2_ucomineq_sd(__m128d a, __m128d b) { return _mm_ucomineq_sd(a, b); }

__m128d sse2_undefined_pd() { return _mm_undefined_pd(); }

__m128i sse2_undefined_si128() { return _mm_undefined_si128(); }

__m128i sse2_unpackhi_epi16(__m128i a, __m128i b) { return _mm_unpackhi_epi16(a, b); }

__m128i sse2_unpackhi_epi32(__m128i a, __m128i b) { return _mm_unpackhi_epi32(a, b); }

__m128i sse2_unpackhi_epi64(__m128i a, __m128i b) { return _mm_unpackhi_epi64(a, b); }

__m128i sse2_unpackhi_epi8(__m128i a, __m128i b) { return _mm_unpackhi_epi8(a, b); }

__m128d sse2_unpackhi_pd(__m128d a, __m128d b) { return _mm_unpackhi_pd(a, b); }

__m128i sse2_unpacklo_epi16(__m128i a, __m128i b) { return _mm_unpacklo_epi16(a, b); }

__m128i sse2_unpacklo_epi32(__m128i a, __m128i b) { return _mm_unpacklo_epi32(a, b); }

__m128i sse2_unpacklo_epi64(__m128i a, __m128i b) { return _mm_unpacklo_epi64(a, b); }

__m128i sse2_unpacklo_epi8(__m128i a, __m128i b) { return _mm_unpacklo_epi8(a, b); }

__m128d sse2_unpacklo_pd(__m128d a, __m128d b) { return _mm_unpacklo_pd(a, b); }

__m128d sse2_xor_pd(__m128d a, __m128d b) { return _mm_xor_pd(a, b); }

__m128i sse2_xor_si128(__m128i a, __m128i b) { return _mm_xor_si128(a, b); }
