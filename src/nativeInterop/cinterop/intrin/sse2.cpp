#include <emmintrin.h>

#include <functional>
#include <unordered_map>

#include "sse2.h"

using namespace std;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-attributes"

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
namespace bslli_si128 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{ 0, [](__m128i a) { return _mm_bslli_si128(a,  0); }},
		{ 1, [](__m128i a) { return _mm_bslli_si128(a,  1); }},
		{ 2, [](__m128i a) { return _mm_bslli_si128(a,  2); }},
		{ 3, [](__m128i a) { return _mm_bslli_si128(a,  3); }},
		{ 4, [](__m128i a) { return _mm_bslli_si128(a,  4); }},
		{ 5, [](__m128i a) { return _mm_bslli_si128(a,  5); }},
		{ 6, [](__m128i a) { return _mm_bslli_si128(a,  6); }},
		{ 7, [](__m128i a) { return _mm_bslli_si128(a,  7); }},
		{ 8, [](__m128i a) { return _mm_bslli_si128(a,  8); }},
		{ 9, [](__m128i a) { return _mm_bslli_si128(a,  9); }},
		{10, [](__m128i a) { return _mm_bslli_si128(a, 10); }},
		{11, [](__m128i a) { return _mm_bslli_si128(a, 11); }},
		{12, [](__m128i a) { return _mm_bslli_si128(a, 12); }},
		{13, [](__m128i a) { return _mm_bslli_si128(a, 13); }},
		{14, [](__m128i a) { return _mm_bslli_si128(a, 14); }},
		{15, [](__m128i a) { return _mm_bslli_si128(a, 15); }},
		{16, [](__m128i a) { return _mm_bslli_si128(a, 16); }},
	};
} // namespace bslli_si128
__m128i sse2_bslli_si128(__m128i a, int32_t imm8) { if (imm8 > 16) imm8 = 16; return bslli_si128::map.at(imm8)(a); }
namespace bsrli_si128 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{ 0, [](__m128i a) { return _mm_bsrli_si128(a,  0); }},
		{ 1, [](__m128i a) { return _mm_bsrli_si128(a,  1); }},
		{ 2, [](__m128i a) { return _mm_bsrli_si128(a,  2); }},
		{ 3, [](__m128i a) { return _mm_bsrli_si128(a,  3); }},
		{ 4, [](__m128i a) { return _mm_bsrli_si128(a,  4); }},
		{ 5, [](__m128i a) { return _mm_bsrli_si128(a,  5); }},
		{ 6, [](__m128i a) { return _mm_bsrli_si128(a,  6); }},
		{ 7, [](__m128i a) { return _mm_bsrli_si128(a,  7); }},
		{ 8, [](__m128i a) { return _mm_bsrli_si128(a,  8); }},
		{ 9, [](__m128i a) { return _mm_bsrli_si128(a,  9); }},
		{10, [](__m128i a) { return _mm_bsrli_si128(a, 10); }},
		{11, [](__m128i a) { return _mm_bsrli_si128(a, 11); }},
		{12, [](__m128i a) { return _mm_bsrli_si128(a, 12); }},
		{13, [](__m128i a) { return _mm_bsrli_si128(a, 13); }},
		{14, [](__m128i a) { return _mm_bsrli_si128(a, 14); }},
		{15, [](__m128i a) { return _mm_bsrli_si128(a, 15); }},
		{16, [](__m128i a) { return _mm_bsrli_si128(a, 16); }},
	};
} // namespace bsrli_si128
__m128i sse2_bsrli_si128(__m128i a, int32_t imm8) { if (imm8 > 16) imm8 = 16; return bsrli_si128::map.at(imm8)(a); }
__m128 sse2_castpd_ps(__m128d a) { return _mm_castpd_ps(a); }
__m128i sse2_castpd_si128(__m128d a) { return _mm_castpd_si128(a); }
__m128d sse2_castps_pd(__m128 a) { return _mm_castps_pd(a); }
__m128i sse2_castps_si128(__m128 a) { return _mm_castps_si128(a); }
__m128d sse2_castsi128_pd(__m128i a) { return _mm_castsi128_pd(a); }
__m128 sse2_castsi128_ps(__m128i a) { return _mm_castsi128_ps(a); }
void sse2_clflush(const void* p) { _mm_clflush(p); }
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
bool sse2_comieq_sd(__m128d a, __m128d b) { return _mm_comieq_sd(a, b); }
bool sse2_comige_sd(__m128d a, __m128d b) { return _mm_comige_sd(a, b); }
bool sse2_comigt_sd(__m128d a, __m128d b) { return _mm_comigt_sd(a, b); }
bool sse2_comile_sd(__m128d a, __m128d b) { return _mm_comile_sd(a, b); }
bool sse2_comilt_sd(__m128d a, __m128d b) { return _mm_comilt_sd(a, b); }
bool sse2_comineq_sd(__m128d a, __m128d b) { return _mm_comineq_sd(a, b); }
__m128d sse2_cvtepi32_pd(__m128i a) { return _mm_cvtepi32_pd(a); }
__m128 sse2_cvtepi32_ps(__m128i a) { return _mm_cvtepi32_ps(a); }
__m128i sse2_cvtpd_epi32(__m128d a) { return _mm_cvtpd_epi32(a); }
__m128 sse2_cvtpd_ps(__m128d a) { return _mm_cvtpd_ps(a); }
__m128i sse2_cvtps_epi32(__m128 a) { return _mm_cvtps_epi32(a); }
__m128d sse2_cvtps_pd(__m128 a) { return _mm_cvtps_pd(a); }
double sse2_cvtsd_f64(__m128d a) { return _mm_cvtsd_f64(a); }
int32_t sse2_cvtsd_si32(__m128d a) { return _mm_cvtsd_si32(a); }
int64_t sse2_cvtsd_si64(__m128d a) { return _mm_cvtsd_si64(a); }
int64_t sse2_cvtsd_si64x(__m128d a) { return _mm_cvtsd_si64x(a); }
__m128 sse2_cvtsd_ss(__m128 a, __m128d b) { return _mm_cvtsd_ss(a, b); }
int32_t sse2_cvtsi128_si32(__m128i a) { return _mm_cvtsi128_si32(a); }
int64_t sse2_cvtsi128_si64(__m128i a) { return _mm_cvtsi128_si64(a); }
int64_t sse2_cvtsi128_si64x(__m128i a) { return _mm_cvtsi128_si64x(a); }
__m128d sse2_cvtsi32_sd(__m128d a, int32_t b) { return _mm_cvtsi32_sd(a, b); }
__m128i sse2_cvtsi32_si128(int32_t a) { return _mm_cvtsi32_si128(a); }
__m128d sse2_cvtsi64_sd(__m128d a, int64_t b) { return _mm_cvtsi64_sd(a, b); }
__m128i sse2_cvtsi64_si128(int64_t a) { return _mm_cvtsi64_si128(a); }
__m128d sse2_cvtsi64x_sd(__m128d a, int64_t b) { return _mm_cvtsi64x_sd(a, b); }
__m128i sse2_cvtsi64x_si128(int64_t a) { return _mm_cvtsi64x_si128(a); }
__m128d sse2_cvtss_sd(__m128d a, __m128 b) { return _mm_cvtss_sd(a, b); }
__m128i sse2_cvttpd_epi32(__m128d a) { return _mm_cvttpd_epi32(a); }
__m128i sse2_cvttps_epi32(__m128 a) { return _mm_cvttps_epi32(a); }
int32_t sse2_cvttsd_si32(__m128d a) { return _mm_cvttsd_si32(a); }
int64_t sse2_cvttsd_si64(__m128d a) { return _mm_cvttsd_si64(a); }
int64_t sse2_cvttsd_si64x(__m128d a) { return _mm_cvttsd_si64x(a); }
__m128d sse2_div_pd(__m128d a, __m128d b) { return _mm_div_pd(a, b); }
__m128d sse2_div_sd(__m128d a, __m128d b) { return _mm_div_sd(a, b); }
namespace extract_epi16 {
	const unordered_map<int8_t, function<int16_t(__m128i)>> map{
		{0, [](__m128i a) { return _mm_extract_epi16(a, 0); }},
		{1, [](__m128i a) { return _mm_extract_epi16(a, 1); }},
		{2, [](__m128i a) { return _mm_extract_epi16(a, 2); }},
		{3, [](__m128i a) { return _mm_extract_epi16(a, 3); }},
		{4, [](__m128i a) { return _mm_extract_epi16(a, 4); }},
		{5, [](__m128i a) { return _mm_extract_epi16(a, 5); }},
		{6, [](__m128i a) { return _mm_extract_epi16(a, 6); }},
		{7, [](__m128i a) { return _mm_extract_epi16(a, 7); }},
	};
} // namespace extract_epi16
int16_t sse2_extract_epi16(__m128i a, int32_t imm8) { return extract_epi16::map.at(imm8 & 0x7)(a); }
namespace insert_epi16 {
	const unordered_map<int8_t, function<__m128i(__m128i, int16_t)>> map{
		{0, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 0); }},
		{1, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 1); }},
		{2, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 2); }},
		{3, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 3); }},
		{4, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 4); }},
		{5, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 5); }},
		{6, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 6); }},
		{7, [](__m128i a, int16_t i) { return _mm_insert_epi16(a, i, 7); }},
	};
} // namespace insert_epi16
__m128i sse2_insert_epi16(__m128i a, int16_t i, int32_t imm8) { return insert_epi16::map.at(imm8 & 0x7)(a, i); }
void sse2_lfence(void) { _mm_lfence(); }
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
__m128i sse2_madd_epi16(__m128i a, __m128i b) { return _mm_madd_epi16(a, b); }
void sse2_maskmoveu_si128(__m128i a, __m128i mask, int8_t* mem_addr) { _mm_maskmoveu_si128(a, mask, (char*)mem_addr); }
__m128i sse2_max_epi16(__m128i a, __m128i b) { return _mm_max_epi16(a, b); }
__m128i sse2_max_epu8(__m128i a, __m128i b) { return _mm_max_epu8(a, b); }
__m128d sse2_max_pd(__m128d a, __m128d b) { return _mm_max_pd(a, b); }
__m128d sse2_max_sd(__m128d a, __m128d b) { return _mm_max_sd(a, b); }
void sse2_mfence(void) { _mm_mfence(); }
__m128i sse2_min_epi16(__m128i a, __m128i b) { return _mm_min_epi16(a, b); }
__m128i sse2_min_epu8(__m128i a, __m128i b) { return _mm_min_epu8(a, b); }
__m128d sse2_min_pd(__m128d a, __m128d b) { return _mm_min_pd(a, b); }
__m128d sse2_min_sd(__m128d a, __m128d b) { return _mm_min_sd(a, b); }
__m128i sse2_move_epi64(__m128i a) { return _mm_move_epi64(a); }
__m128d sse2_move_sd(__m128d a, __m128d b) { return _mm_move_sd(a, b); }
int32_t sse2_movemask_epi8(__m128i a) { return _mm_movemask_epi8(a); }
int32_t sse2_movemask_pd(__m128d a) { return _mm_movemask_pd(a); }
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
void sse2_pause(void) { _mm_pause(); }
__m128i sse2_sad_epu8(__m128i a, __m128i b) { return _mm_sad_epu8(a, b); }
__m128i sse2_set_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0) { return _mm_set_epi16(e7, e6, e5, e4, e3, e2, e1, e0); }
__m128i sse2_set_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0) { return _mm_set_epi32(e3, e2, e1, e0); }
__m128i sse2_set_epi64x(int64_t e1, int64_t e0) { return _mm_set_epi64x(e1, e0); }
__m128i sse2_set_epi8(int8_t e15, int8_t e14, int8_t e13, int8_t e12, int8_t e11, int8_t e10, int8_t e9, int8_t e8, int8_t e7, int8_t e6, int8_t e5, int8_t e4, int8_t e3, int8_t e2, int8_t e1, int8_t e0) { return _mm_set_epi8(e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }
__m128d sse2_set_pd(double e1, double e0) { return _mm_set_pd(e1, e0); }
__m128d sse2_set_pd1(double a) { return _mm_set_pd1(a); }
__m128d sse2_set_sd(double a) { return _mm_set_sd(a); }
__m128i sse2_set1_epi16(int16_t a) { return _mm_set1_epi16(a); }
__m128i sse2_set1_epi32(int32_t a) { return _mm_set1_epi32(a); }
__m128i sse2_set1_epi64x(int64_t a) { return _mm_set1_epi64x(a); }
__m128i sse2_set1_epi8(int8_t a) { return _mm_set1_epi8(a); }
__m128d sse2_set1_pd(double a) { return _mm_set1_pd(a); }
__m128i sse2_setr_epi16(int16_t e7, int16_t e6, int16_t e5, int16_t e4, int16_t e3, int16_t e2, int16_t e1, int16_t e0) { return _mm_setr_epi16(e7, e6, e5, e4, e3, e2, e1, e0); }
__m128i sse2_setr_epi32(int32_t e3, int32_t e2, int32_t e1, int32_t e0) { return _mm_setr_epi32(e3, e2, e1, e0); }
__m128i sse2_setr_epi8(int8_t e15, int8_t e14, int8_t e13, int8_t e12, int8_t e11, int8_t e10, int8_t e9, int8_t e8, int8_t e7, int8_t e6, int8_t e5, int8_t e4, int8_t e3, int8_t e2, int8_t e1, int8_t e0) { return _mm_setr_epi8(e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }
__m128d sse2_setr_pd(double e1, double e0) { return _mm_setr_pd(e1, e0); }
__m128d sse2_setzero_pd(void) { return _mm_setzero_pd(); }
__m128i sse2_setzero_si128() { return _mm_setzero_si128(); }
namespace shuffle_epi32 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{0, [](__m128i a) { return _mm_shuffle_epi32(a, 0); }},
		{1, [](__m128i a) { return _mm_shuffle_epi32(a, 1); }},
		{2, [](__m128i a) { return _mm_shuffle_epi32(a, 2); }},
		{3, [](__m128i a) { return _mm_shuffle_epi32(a, 3); }},
	};
} // namespace shuffle_epi32
__m128i sse2_shuffle_epi32(__m128i a, int32_t imm8) { return shuffle_epi32::map.at(imm8 & 0x3)(a); }
namespace shuffle_pd {
	const unordered_map<int8_t, function<__m128d(__m128d, __m128d)>> map{
		{0, [](__m128d a, __m128d b) { return _mm_shuffle_pd(a, b, 0); }},
		{1, [](__m128d a, __m128d b) { return _mm_shuffle_pd(a, b, 1); }},
		{2, [](__m128d a, __m128d b) { return _mm_shuffle_pd(a, b, 2); }},
		{3, [](__m128d a, __m128d b) { return _mm_shuffle_pd(a, b, 3); }},
	};
} // namespace shuffle_pd
__m128d sse2_shuffle_pd(__m128d a, __m128d b, int32_t imm8) { return shuffle_pd::map.at(imm8 & 0x3)(a, b); }
namespace shufflehi_epi16 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{0x00, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x00); }},
		{0x01, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x01); }},
		{0x02, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x02); }},
		{0x03, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x03); }},
		{0x04, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x04); }},
		{0x05, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x05); }},
		{0x06, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x06); }},
		{0x07, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x07); }},
		{0x08, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x08); }},
		{0x09, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x09); }},
		{0x0A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x0A); }},
		{0x0B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x0B); }},
		{0x0C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x0C); }},
		{0x0D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x0D); }},
		{0x0E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x0E); }},
		{0x0F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x0F); }},
		{0x10, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x10); }},
		{0x11, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x11); }},
		{0x12, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x12); }},
		{0x13, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x13); }},
		{0x14, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x14); }},
		{0x15, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x15); }},
		{0x16, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x16); }},
		{0x17, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x17); }},
		{0x18, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x18); }},
		{0x19, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x19); }},
		{0x1A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x1A); }},
		{0x1B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x1B); }},
		{0x1C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x1C); }},
		{0x1D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x1D); }},
		{0x1E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x1E); }},
		{0x1F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x1F); }},
		{0x20, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x20); }},
		{0x21, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x21); }},
		{0x22, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x22); }},
		{0x23, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x23); }},
		{0x24, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x24); }},
		{0x25, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x25); }},
		{0x26, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x26); }},
		{0x27, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x27); }},
		{0x28, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x28); }},
		{0x29, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x29); }},
		{0x2A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x2A); }},
		{0x2B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x2B); }},
		{0x2C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x2C); }},
		{0x2D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x2D); }},
		{0x2E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x2E); }},
		{0x2F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x2F); }},
		{0x30, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x30); }},
		{0x31, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x31); }},
		{0x32, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x32); }},
		{0x33, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x33); }},
		{0x34, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x34); }},
		{0x35, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x35); }},
		{0x36, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x36); }},
		{0x37, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x37); }},
		{0x38, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x38); }},
		{0x39, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x39); }},
		{0x3A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x3A); }},
		{0x3B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x3B); }},
		{0x3C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x3C); }},
		{0x3D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x3D); }},
		{0x3E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x3E); }},
		{0x3F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x3F); }},
		{0x40, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x40); }},
		{0x41, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x41); }},
		{0x42, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x42); }},
		{0x43, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x43); }},
		{0x44, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x44); }},
		{0x45, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x45); }},
		{0x46, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x46); }},
		{0x47, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x47); }},
		{0x48, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x48); }},
		{0x49, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x49); }},
		{0x4A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x4A); }},
		{0x4B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x4B); }},
		{0x4C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x4C); }},
		{0x4D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x4D); }},
		{0x4E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x4E); }},
		{0x4F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x4F); }},
		{0x50, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x50); }},
		{0x51, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x51); }},
		{0x52, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x52); }},
		{0x53, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x53); }},
		{0x54, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x54); }},
		{0x55, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x55); }},
		{0x56, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x56); }},
		{0x57, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x57); }},
		{0x58, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x58); }},
		{0x59, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x59); }},
		{0x5A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x5A); }},
		{0x5B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x5B); }},
		{0x5C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x5C); }},
		{0x5D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x5D); }},
		{0x5E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x5E); }},
		{0x5F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x5F); }},
		{0x60, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x60); }},
		{0x61, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x61); }},
		{0x62, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x62); }},
		{0x63, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x63); }},
		{0x64, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x64); }},
		{0x65, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x65); }},
		{0x66, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x66); }},
		{0x67, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x67); }},
		{0x68, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x68); }},
		{0x69, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x69); }},
		{0x6A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x6A); }},
		{0x6B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x6B); }},
		{0x6C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x6C); }},
		{0x6D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x6D); }},
		{0x6E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x6E); }},
		{0x6F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x6F); }},
		{0x70, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x70); }},
		{0x71, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x71); }},
		{0x72, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x72); }},
		{0x73, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x73); }},
		{0x74, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x74); }},
		{0x75, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x75); }},
		{0x76, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x76); }},
		{0x77, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x77); }},
		{0x78, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x78); }},
		{0x79, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x79); }},
		{0x7A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x7A); }},
		{0x7B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x7B); }},
		{0x7C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x7C); }},
		{0x7D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x7D); }},
		{0x7E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x7E); }},
		{0x7F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x7F); }},
		{0x80, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x80); }},
		{0x81, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x81); }},
		{0x82, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x82); }},
		{0x83, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x83); }},
		{0x84, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x84); }},
		{0x85, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x85); }},
		{0x86, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x86); }},
		{0x87, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x87); }},
		{0x88, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x88); }},
		{0x89, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x89); }},
		{0x8A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x8A); }},
		{0x8B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x8B); }},
		{0x8C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x8C); }},
		{0x8D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x8D); }},
		{0x8E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x8E); }},
		{0x8F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x8F); }},
		{0x90, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x90); }},
		{0x91, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x91); }},
		{0x92, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x92); }},
		{0x93, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x93); }},
		{0x94, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x94); }},
		{0x95, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x95); }},
		{0x96, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x96); }},
		{0x97, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x97); }},
		{0x98, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x98); }},
		{0x99, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x99); }},
		{0x9A, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x9A); }},
		{0x9B, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x9B); }},
		{0x9C, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x9C); }},
		{0x9D, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x9D); }},
		{0x9E, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x9E); }},
		{0x9F, [](__m128i a) { return _mm_shufflehi_epi16(a, 0x9F); }},
		{0xA0, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA0); }},
		{0xA1, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA1); }},
		{0xA2, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA2); }},
		{0xA3, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA3); }},
		{0xA4, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA4); }},
		{0xA5, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA5); }},
		{0xA6, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA6); }},
		{0xA7, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA7); }},
		{0xA8, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA8); }},
		{0xA9, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xA9); }},
		{0xAA, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xAA); }},
		{0xAB, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xAB); }},
		{0xAC, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xAC); }},
		{0xAD, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xAD); }},
		{0xAE, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xAE); }},
		{0xAF, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xAF); }},
		{0xB0, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB0); }},
		{0xB1, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB1); }},
		{0xB2, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB2); }},
		{0xB3, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB3); }},
		{0xB4, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB4); }},
		{0xB5, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB5); }},
		{0xB6, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB6); }},
		{0xB7, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB7); }},
		{0xB8, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB8); }},
		{0xB9, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xB9); }},
		{0xBA, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xBA); }},
		{0xBB, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xBB); }},
		{0xBC, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xBC); }},
		{0xBD, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xBD); }},
		{0xBE, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xBE); }},
		{0xBF, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xBF); }},
		{0xC0, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC0); }},
		{0xC1, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC1); }},
		{0xC2, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC2); }},
		{0xC3, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC3); }},
		{0xC4, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC4); }},
		{0xC5, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC5); }},
		{0xC6, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC6); }},
		{0xC7, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC7); }},
		{0xC8, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC8); }},
		{0xC9, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xC9); }},
		{0xCA, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xCA); }},
		{0xCB, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xCB); }},
		{0xCC, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xCC); }},
		{0xCD, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xCD); }},
		{0xCE, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xCE); }},
		{0xCF, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xCF); }},
		{0xD0, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD0); }},
		{0xD1, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD1); }},
		{0xD2, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD2); }},
		{0xD3, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD3); }},
		{0xD4, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD4); }},
		{0xD5, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD5); }},
		{0xD6, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD6); }},
		{0xD7, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD7); }},
		{0xD8, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD8); }},
		{0xD9, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xD9); }},
		{0xDA, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xDA); }},
		{0xDB, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xDB); }},
		{0xDC, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xDC); }},
		{0xDD, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xDD); }},
		{0xDE, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xDE); }},
		{0xDF, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xDF); }},
		{0xE0, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE0); }},
		{0xE1, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE1); }},
		{0xE2, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE2); }},
		{0xE3, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE3); }},
		{0xE4, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE4); }},
		{0xE5, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE5); }},
		{0xE6, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE6); }},
		{0xE7, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE7); }},
		{0xE8, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE8); }},
		{0xE9, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xE9); }},
		{0xEA, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xEA); }},
		{0xEB, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xEB); }},
		{0xEC, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xEC); }},
		{0xED, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xED); }},
		{0xEE, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xEE); }},
		{0xEF, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xEF); }},
		{0xF0, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF0); }},
		{0xF1, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF1); }},
		{0xF2, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF2); }},
		{0xF3, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF3); }},
		{0xF4, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF4); }},
		{0xF5, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF5); }},
		{0xF6, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF6); }},
		{0xF7, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF7); }},
		{0xF8, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF8); }},
		{0xF9, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xF9); }},
		{0xFA, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xFA); }},
		{0xFB, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xFB); }},
		{0xFC, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xFC); }},
		{0xFD, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xFD); }},
		{0xFE, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xFE); }},
		{0xFF, [](__m128i a) { return _mm_shufflehi_epi16(a, 0xFF); }},
	};
} // namespace shufflehi_epi16
__m128i sse2_shufflehi_epi16(__m128i a, int32_t imm8) { return shufflehi_epi16::map.at(imm8)(a); }
namespace shufflelo_epi16 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{0x00, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x00); }},
		{0x01, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x01); }},
		{0x02, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x02); }},
		{0x03, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x03); }},
		{0x04, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x04); }},
		{0x05, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x05); }},
		{0x06, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x06); }},
		{0x07, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x07); }},
		{0x08, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x08); }},
		{0x09, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x09); }},
		{0x0A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x0A); }},
		{0x0B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x0B); }},
		{0x0C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x0C); }},
		{0x0D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x0D); }},
		{0x0E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x0E); }},
		{0x0F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x0F); }},
		{0x10, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x10); }},
		{0x11, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x11); }},
		{0x12, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x12); }},
		{0x13, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x13); }},
		{0x14, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x14); }},
		{0x15, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x15); }},
		{0x16, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x16); }},
		{0x17, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x17); }},
		{0x18, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x18); }},
		{0x19, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x19); }},
		{0x1A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x1A); }},
		{0x1B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x1B); }},
		{0x1C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x1C); }},
		{0x1D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x1D); }},
		{0x1E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x1E); }},
		{0x1F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x1F); }},
		{0x20, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x20); }},
		{0x21, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x21); }},
		{0x22, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x22); }},
		{0x23, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x23); }},
		{0x24, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x24); }},
		{0x25, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x25); }},
		{0x26, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x26); }},
		{0x27, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x27); }},
		{0x28, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x28); }},
		{0x29, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x29); }},
		{0x2A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x2A); }},
		{0x2B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x2B); }},
		{0x2C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x2C); }},
		{0x2D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x2D); }},
		{0x2E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x2E); }},
		{0x2F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x2F); }},
		{0x30, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x30); }},
		{0x31, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x31); }},
		{0x32, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x32); }},
		{0x33, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x33); }},
		{0x34, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x34); }},
		{0x35, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x35); }},
		{0x36, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x36); }},
		{0x37, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x37); }},
		{0x38, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x38); }},
		{0x39, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x39); }},
		{0x3A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x3A); }},
		{0x3B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x3B); }},
		{0x3C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x3C); }},
		{0x3D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x3D); }},
		{0x3E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x3E); }},
		{0x3F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x3F); }},
		{0x40, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x40); }},
		{0x41, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x41); }},
		{0x42, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x42); }},
		{0x43, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x43); }},
		{0x44, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x44); }},
		{0x45, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x45); }},
		{0x46, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x46); }},
		{0x47, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x47); }},
		{0x48, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x48); }},
		{0x49, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x49); }},
		{0x4A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x4A); }},
		{0x4B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x4B); }},
		{0x4C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x4C); }},
		{0x4D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x4D); }},
		{0x4E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x4E); }},
		{0x4F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x4F); }},
		{0x50, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x50); }},
		{0x51, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x51); }},
		{0x52, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x52); }},
		{0x53, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x53); }},
		{0x54, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x54); }},
		{0x55, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x55); }},
		{0x56, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x56); }},
		{0x57, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x57); }},
		{0x58, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x58); }},
		{0x59, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x59); }},
		{0x5A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x5A); }},
		{0x5B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x5B); }},
		{0x5C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x5C); }},
		{0x5D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x5D); }},
		{0x5E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x5E); }},
		{0x5F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x5F); }},
		{0x60, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x60); }},
		{0x61, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x61); }},
		{0x62, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x62); }},
		{0x63, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x63); }},
		{0x64, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x64); }},
		{0x65, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x65); }},
		{0x66, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x66); }},
		{0x67, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x67); }},
		{0x68, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x68); }},
		{0x69, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x69); }},
		{0x6A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x6A); }},
		{0x6B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x6B); }},
		{0x6C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x6C); }},
		{0x6D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x6D); }},
		{0x6E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x6E); }},
		{0x6F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x6F); }},
		{0x70, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x70); }},
		{0x71, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x71); }},
		{0x72, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x72); }},
		{0x73, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x73); }},
		{0x74, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x74); }},
		{0x75, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x75); }},
		{0x76, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x76); }},
		{0x77, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x77); }},
		{0x78, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x78); }},
		{0x79, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x79); }},
		{0x7A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x7A); }},
		{0x7B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x7B); }},
		{0x7C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x7C); }},
		{0x7D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x7D); }},
		{0x7E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x7E); }},
		{0x7F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x7F); }},
		{0x80, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x80); }},
		{0x81, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x81); }},
		{0x82, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x82); }},
		{0x83, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x83); }},
		{0x84, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x84); }},
		{0x85, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x85); }},
		{0x86, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x86); }},
		{0x87, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x87); }},
		{0x88, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x88); }},
		{0x89, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x89); }},
		{0x8A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x8A); }},
		{0x8B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x8B); }},
		{0x8C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x8C); }},
		{0x8D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x8D); }},
		{0x8E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x8E); }},
		{0x8F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x8F); }},
		{0x90, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x90); }},
		{0x91, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x91); }},
		{0x92, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x92); }},
		{0x93, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x93); }},
		{0x94, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x94); }},
		{0x95, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x95); }},
		{0x96, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x96); }},
		{0x97, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x97); }},
		{0x98, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x98); }},
		{0x99, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x99); }},
		{0x9A, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x9A); }},
		{0x9B, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x9B); }},
		{0x9C, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x9C); }},
		{0x9D, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x9D); }},
		{0x9E, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x9E); }},
		{0x9F, [](__m128i a) { return _mm_shufflelo_epi16(a, 0x9F); }},
		{0xA0, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA0); }},
		{0xA1, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA1); }},
		{0xA2, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA2); }},
		{0xA3, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA3); }},
		{0xA4, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA4); }},
		{0xA5, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA5); }},
		{0xA6, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA6); }},
		{0xA7, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA7); }},
		{0xA8, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA8); }},
		{0xA9, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xA9); }},
		{0xAA, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xAA); }},
		{0xAB, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xAB); }},
		{0xAC, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xAC); }},
		{0xAD, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xAD); }},
		{0xAE, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xAE); }},
		{0xAF, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xAF); }},
		{0xB0, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB0); }},
		{0xB1, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB1); }},
		{0xB2, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB2); }},
		{0xB3, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB3); }},
		{0xB4, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB4); }},
		{0xB5, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB5); }},
		{0xB6, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB6); }},
		{0xB7, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB7); }},
		{0xB8, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB8); }},
		{0xB9, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xB9); }},
		{0xBA, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xBA); }},
		{0xBB, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xBB); }},
		{0xBC, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xBC); }},
		{0xBD, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xBD); }},
		{0xBE, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xBE); }},
		{0xBF, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xBF); }},
		{0xC0, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC0); }},
		{0xC1, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC1); }},
		{0xC2, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC2); }},
		{0xC3, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC3); }},
		{0xC4, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC4); }},
		{0xC5, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC5); }},
		{0xC6, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC6); }},
		{0xC7, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC7); }},
		{0xC8, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC8); }},
		{0xC9, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xC9); }},
		{0xCA, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xCA); }},
		{0xCB, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xCB); }},
		{0xCC, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xCC); }},
		{0xCD, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xCD); }},
		{0xCE, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xCE); }},
		{0xCF, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xCF); }},
		{0xD0, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD0); }},
		{0xD1, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD1); }},
		{0xD2, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD2); }},
		{0xD3, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD3); }},
		{0xD4, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD4); }},
		{0xD5, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD5); }},
		{0xD6, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD6); }},
		{0xD7, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD7); }},
		{0xD8, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD8); }},
		{0xD9, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xD9); }},
		{0xDA, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xDA); }},
		{0xDB, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xDB); }},
		{0xDC, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xDC); }},
		{0xDD, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xDD); }},
		{0xDE, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xDE); }},
		{0xDF, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xDF); }},
		{0xE0, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE0); }},
		{0xE1, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE1); }},
		{0xE2, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE2); }},
		{0xE3, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE3); }},
		{0xE4, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE4); }},
		{0xE5, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE5); }},
		{0xE6, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE6); }},
		{0xE7, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE7); }},
		{0xE8, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE8); }},
		{0xE9, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xE9); }},
		{0xEA, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xEA); }},
		{0xEB, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xEB); }},
		{0xEC, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xEC); }},
		{0xED, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xED); }},
		{0xEE, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xEE); }},
		{0xEF, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xEF); }},
		{0xF0, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF0); }},
		{0xF1, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF1); }},
		{0xF2, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF2); }},
		{0xF3, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF3); }},
		{0xF4, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF4); }},
		{0xF5, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF5); }},
		{0xF6, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF6); }},
		{0xF7, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF7); }},
		{0xF8, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF8); }},
		{0xF9, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xF9); }},
		{0xFA, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xFA); }},
		{0xFB, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xFB); }},
		{0xFC, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xFC); }},
		{0xFD, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xFD); }},
		{0xFE, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xFE); }},
		{0xFF, [](__m128i a) { return _mm_shufflelo_epi16(a, 0xFF); }},
	};
} // namespace shufflelo_epi16
__m128i sse2_shufflelo_epi16(__m128i a, int32_t imm8) { return shufflelo_epi16::map.at(imm8)(a); }
__m128i sse2_sll_epi16(__m128i a, __m128i count) { return _mm_sll_epi16(a, count); }
__m128i sse2_sll_epi32(__m128i a, __m128i count) { return _mm_sll_epi32(a, count); }
__m128i sse2_sll_epi64(__m128i a, __m128i count) { return _mm_sll_epi64(a, count); }
__m128i sse2_slli_epi16(__m128i a, int32_t imm8) { return _mm_slli_epi16(a, imm8); }
__m128i sse2_slli_epi32(__m128i a, int32_t imm8) { return _mm_slli_epi32(a, imm8); }
__m128i sse2_slli_epi64(__m128i a, int32_t imm8) { return _mm_slli_epi64(a, imm8); }
namespace slli_si128 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{ 0, [](__m128i a) { return _mm_slli_si128(a,  0); }},
		{ 1, [](__m128i a) { return _mm_slli_si128(a,  1); }},
		{ 2, [](__m128i a) { return _mm_slli_si128(a,  2); }},
		{ 3, [](__m128i a) { return _mm_slli_si128(a,  3); }},
		{ 4, [](__m128i a) { return _mm_slli_si128(a,  4); }},
		{ 5, [](__m128i a) { return _mm_slli_si128(a,  5); }},
		{ 6, [](__m128i a) { return _mm_slli_si128(a,  6); }},
		{ 7, [](__m128i a) { return _mm_slli_si128(a,  7); }},
		{ 8, [](__m128i a) { return _mm_slli_si128(a,  8); }},
		{ 9, [](__m128i a) { return _mm_slli_si128(a,  9); }},
		{10, [](__m128i a) { return _mm_slli_si128(a, 10); }},
		{11, [](__m128i a) { return _mm_slli_si128(a, 11); }},
		{12, [](__m128i a) { return _mm_slli_si128(a, 12); }},
		{13, [](__m128i a) { return _mm_slli_si128(a, 13); }},
		{14, [](__m128i a) { return _mm_slli_si128(a, 14); }},
		{15, [](__m128i a) { return _mm_slli_si128(a, 15); }},
		{16, [](__m128i a) { return _mm_slli_si128(a, 16); }},
	};
} // namespace slli_si128
__m128i sse2_slli_si128(__m128i a, int32_t imm8) { if (imm8 > 16) imm8 = 16; return slli_si128::map.at(imm8)(a); }
__m128d sse2_sqrt_pd(__m128d a) { return _mm_sqrt_pd(a); }
__m128d sse2_sqrt_sd(__m128d a, __m128d b) { return _mm_sqrt_sd(a, b); }
__m128i sse2_sra_epi16(__m128i a, __m128i count) { return _mm_sra_epi16(a, count); }
__m128i sse2_sra_epi32(__m128i a, __m128i count) { return _mm_sra_epi32(a, count); }
__m128i sse2_srai_epi16(__m128i a, int32_t imm8) { return _mm_srai_epi16(a, imm8); }
__m128i sse2_srai_epi32(__m128i a, int32_t imm8) { return _mm_srai_epi32(a, imm8); }
__m128i sse2_srl_epi16(__m128i a, __m128i count) { return _mm_srl_epi16(a, count); }
__m128i sse2_srl_epi32(__m128i a, __m128i count) { return _mm_srl_epi32(a, count); }
__m128i sse2_srl_epi64(__m128i a, __m128i count) { return _mm_srl_epi64(a, count); }
__m128i sse2_srli_epi16(__m128i a, int32_t imm8) { return _mm_srli_epi16(a, imm8); }
__m128i sse2_srli_epi32(__m128i a, int32_t imm8) { return _mm_srli_epi32(a, imm8); }
__m128i sse2_srli_epi64(__m128i a, int32_t imm8) { return _mm_srli_epi64(a, imm8); }
namespace srli_si128 {
	const unordered_map<int8_t, function<__m128i(__m128i)>> map{
		{ 0, [](__m128i a) { return _mm_srli_si128(a,  0); }},
		{ 1, [](__m128i a) { return _mm_srli_si128(a,  1); }},
		{ 2, [](__m128i a) { return _mm_srli_si128(a,  2); }},
		{ 3, [](__m128i a) { return _mm_srli_si128(a,  3); }},
		{ 4, [](__m128i a) { return _mm_srli_si128(a,  4); }},
		{ 5, [](__m128i a) { return _mm_srli_si128(a,  5); }},
		{ 6, [](__m128i a) { return _mm_srli_si128(a,  6); }},
		{ 7, [](__m128i a) { return _mm_srli_si128(a,  7); }},
		{ 8, [](__m128i a) { return _mm_srli_si128(a,  8); }},
		{ 9, [](__m128i a) { return _mm_srli_si128(a,  9); }},
		{10, [](__m128i a) { return _mm_srli_si128(a, 10); }},
		{11, [](__m128i a) { return _mm_srli_si128(a, 11); }},
		{12, [](__m128i a) { return _mm_srli_si128(a, 12); }},
		{13, [](__m128i a) { return _mm_srli_si128(a, 13); }},
		{14, [](__m128i a) { return _mm_srli_si128(a, 14); }},
		{15, [](__m128i a) { return _mm_srli_si128(a, 15); }},
		{16, [](__m128i a) { return _mm_srli_si128(a, 16); }},
	};
} // namespace srli_si128
__m128i sse2_srli_si128(__m128i a, int32_t imm8) { if (imm8 > 16) imm8 = 16; return srli_si128::map.at(imm8)(a); }
void sse2_store_pd(double* mem_addr, __m128d a) { _mm_store_pd(mem_addr, a); }
void sse2_store_pd1(double* mem_addr, __m128d a) { _mm_store_pd1(mem_addr, a); }
void sse2_store_sd(double* mem_addr, __m128d a) { _mm_store_sd(mem_addr, a); }
void sse2_store_si128(__m128i* mem_addr, __m128i a) { _mm_store_si128(mem_addr, a); }
void sse2_store1_pd(double* mem_addr, __m128d a) { _mm_store1_pd(mem_addr, a); }
void sse2_storeh_pd(double* mem_addr, __m128d a) { _mm_storeh_pd(mem_addr, a); }
void sse2_storel_epi64(__m128i* mem_addr, __m128i a) { _mm_storel_epi64(mem_addr, a); }
void sse2_storel_pd(double* mem_addr, __m128d a) { _mm_storel_pd(mem_addr, a); }
void sse2_storer_pd(double* mem_addr, __m128d a) { _mm_storer_pd(mem_addr, a); }
void sse2_storeu_pd(double* mem_addr, __m128d a) { _mm_storeu_pd(mem_addr, a); }
void sse2_storeu_si128(__m128i* mem_addr, __m128i a) { _mm_storeu_si128(mem_addr, a); }
void sse2_stream_pd(double* mem_addr, __m128d a) { _mm_stream_pd(mem_addr, a); }
void sse2_stream_si128(__m128i* mem_addr, __m128i a) { _mm_stream_si128(mem_addr, a); }
void sse2_stream_si32(int32_t* mem_addr, int32_t a) { _mm_stream_si32(mem_addr, a); }
void sse2_stream_si64(int64_t* mem_addr, int64_t a) { _mm_stream_si64((long long*)mem_addr, a); }
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
bool sse2_ucomieq_sd(__m128d a, __m128d b) { return _mm_ucomieq_sd(a, b); }
bool sse2_ucomige_sd(__m128d a, __m128d b) { return _mm_ucomige_sd(a, b); }
bool sse2_ucomigt_sd(__m128d a, __m128d b) { return _mm_ucomigt_sd(a, b); }
bool sse2_ucomile_sd(__m128d a, __m128d b) { return _mm_ucomile_sd(a, b); }
bool sse2_ucomilt_sd(__m128d a, __m128d b) { return _mm_ucomilt_sd(a, b); }
bool sse2_ucomineq_sd(__m128d a, __m128d b) { return _mm_ucomineq_sd(a, b); }
__m128d sse2_undefined_pd(void) { return _mm_undefined_pd(); }
__m128i sse2_undefined_si128(void) { return _mm_undefined_si128(); }
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

#pragma GCC diagnostic pop
