#include <xmmintrin.h>

#include "sse.h"

#include <functional>
#include <unordered_map>

using namespace std;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-attributes"

__m128 sse_add_ps(__m128 a, __m128 b) { return _mm_add_ps(a, b); }
__m128 sse_add_ss(__m128 a, __m128 b) { return _mm_add_ss(a, b); }
__m128 sse_and_ps(__m128 a, __m128 b) { return _mm_and_ps(a, b); }
__m128 sse_andnot_ps(__m128 a, __m128 b) { return _mm_andnot_ps(a, b); }
__m64 sse_avg_pu16(__m64 a, __m64 b) { return _mm_avg_pu16(a, b); }
__m64 sse_avg_pu8(__m64 a, __m64 b) { return _mm_avg_pu8(a, b); }
__m128 sse_cmpeq_ps(__m128 a, __m128 b) { return _mm_cmpeq_ps(a, b); }
__m128 sse_cmpeq_ss(__m128 a, __m128 b) { return _mm_cmpeq_ss(a, b); }
__m128 sse_cmpge_ps(__m128 a, __m128 b) { return _mm_cmpge_ps(a, b); }
__m128 sse_cmpge_ss(__m128 a, __m128 b) { return _mm_cmpge_ss(a, b); }
__m128 sse_cmpgt_ps(__m128 a, __m128 b) { return _mm_cmpgt_ps(a, b); }
__m128 sse_cmpgt_ss(__m128 a, __m128 b) { return _mm_cmpgt_ss(a, b); }
__m128 sse_cmple_ps(__m128 a, __m128 b) { return _mm_cmple_ps(a, b); }
__m128 sse_cmple_ss(__m128 a, __m128 b) { return _mm_cmple_ss(a, b); }
__m128 sse_cmplt_ps(__m128 a, __m128 b) { return _mm_cmplt_ps(a, b); }
__m128 sse_cmplt_ss(__m128 a, __m128 b) { return _mm_cmplt_ss(a, b); }
__m128 sse_cmpneq_ps(__m128 a, __m128 b) { return _mm_cmpneq_ps(a, b); }
__m128 sse_cmpneq_ss(__m128 a, __m128 b) { return _mm_cmpneq_ss(a, b); }
__m128 sse_cmpnge_ps(__m128 a, __m128 b) { return _mm_cmpnge_ps(a, b); }
__m128 sse_cmpnge_ss(__m128 a, __m128 b) { return _mm_cmpnge_ss(a, b); }
__m128 sse_cmpngt_ps(__m128 a, __m128 b) { return _mm_cmpngt_ps(a, b); }
__m128 sse_cmpngt_ss(__m128 a, __m128 b) { return _mm_cmpngt_ss(a, b); }
__m128 sse_cmpnle_ps(__m128 a, __m128 b) { return _mm_cmpnle_ps(a, b); }
__m128 sse_cmpnle_ss(__m128 a, __m128 b) { return _mm_cmpnle_ss(a, b); }
__m128 sse_cmpnlt_ps(__m128 a, __m128 b) { return _mm_cmpnlt_ps(a, b); }
__m128 sse_cmpnlt_ss(__m128 a, __m128 b) { return _mm_cmpnlt_ss(a, b); }
__m128 sse_cmpord_ps(__m128 a, __m128 b) { return _mm_cmpord_ps(a, b); }
__m128 sse_cmpord_ss(__m128 a, __m128 b) { return _mm_cmpord_ss(a, b); }
__m128 sse_cmpunord_ps(__m128 a, __m128 b) { return _mm_cmpunord_ps(a, b); }
__m128 sse_cmpunord_ss(__m128 a, __m128 b) { return _mm_cmpunord_ss(a, b); }
bool sse_comieq_ss(__m128 a, __m128 b) { return _mm_comieq_ss(a, b); }
bool sse_comige_ss(__m128 a, __m128 b) { return _mm_comige_ss(a, b); }
bool sse_comigt_ss(__m128 a, __m128 b) { return _mm_comigt_ss(a, b); }
bool sse_comile_ss(__m128 a, __m128 b) { return _mm_comile_ss(a, b); }
bool sse_comilt_ss(__m128 a, __m128 b) { return _mm_comilt_ss(a, b); }
bool sse_comineq_ss(__m128 a, __m128 b) { return _mm_comineq_ss(a, b); }
__m128 sse_cvt_pi2ps(__m128 a, __m64 b) { return _mm_cvt_pi2ps(a, b); }
__m64 sse_cvt_ps2pi(__m128 a) { return _mm_cvt_ps2pi(a); }
__m128 sse_cvt_si2ss(__m128 a, int32_t b) { return _mm_cvt_si2ss(a, b); }
int32_t sse_cvt_ss2si(__m128 a) { return _mm_cvt_ss2si(a); }
__m128 sse_cvtpi16_ps(__m64 a) { return _mm_cvtpi16_ps(a); }
__m128 sse_cvtpi32_ps(__m128 a, __m64 b) { return _mm_cvtpi32_ps(a, b); }
__m128 sse_cvtpi32x2_ps(__m64 a, __m64 b) { return _mm_cvtpi32x2_ps(a, b); }
__m128 sse_cvtpi8_ps(__m64 a) { return _mm_cvtpi8_ps(a); }
__m64 sse_cvtps_pi16(__m128 a) { return _mm_cvtps_pi16(a); }
__m64 sse_cvtps_pi32(__m128 a) { return _mm_cvtps_pi32(a); }
__m64 sse_cvtps_pi8(__m128 a) { return _mm_cvtps_pi8(a); }
__m128 sse_cvtpu16_ps(__m64 a) { return _mm_cvtpu16_ps(a); }
__m128 sse_cvtpu8_ps(__m64 a) { return _mm_cvtpu8_ps(a); }
__m128 sse_cvtsi32_ss(__m128 a, int32_t b) { return _mm_cvtsi32_ss(a, b); }
__m128 sse_cvtsi64_ss(__m128 a, int64_t b) { return _mm_cvtsi64_ss(a, b); }
float sse_cvtss_f32(__m128 a) { return _mm_cvtss_f32(a); }
int32_t sse_cvtss_si32(__m128 a) { return _mm_cvtss_si32(a); }
int64_t sse_cvtss_si64(__m128 a) { return _mm_cvtss_si64(a); }
__m64 sse_cvtt_ps2pi(__m128 a) { return _mm_cvtt_ps2pi(a); }
int32_t sse_cvtt_ss2si(__m128 a) { return _mm_cvtt_ss2si(a); }
__m64 sse_cvttps_pi32(__m128 a) { return _mm_cvttps_pi32(a); }
int32_t sse_cvttss_si32(__m128 a) { return _mm_cvttss_si32(a); }
int64_t sse_cvttss_si64(__m128 a) { return _mm_cvttss_si64(a); }
__m128 sse_div_ps(__m128 a, __m128 b) { return _mm_div_ps(a, b); }
__m128 sse_div_ss(__m128 a, __m128 b) { return _mm_div_ss(a, b); }
namespace extract_pi16 {
	const unordered_map<int8_t, function<int16_t(__m64)>> map{
		{0, [](__m64 a) { return _mm_extract_pi16(a, 0); }},
		{1, [](__m64 a) { return _mm_extract_pi16(a, 1); }},
		{2, [](__m64 a) { return _mm_extract_pi16(a, 2); }},
		{3, [](__m64 a) { return _mm_extract_pi16(a, 3); }},
	};
} // namespace extract_pi16
int16_t sse_extract_pi16(__m64 a, int8_t imm8) { return extract_pi16::map.at(imm8 & 0x3)(a); }
void sse_free(void* mem_addr) { return _mm_free(mem_addr); }
uint32_t sse_get_exception_mask() { return _MM_GET_EXCEPTION_MASK(); }
uint32_t sse_get_exception_state() { return _MM_GET_EXCEPTION_STATE(); }
uint32_t sse_get_flush_zero_mode() { return _MM_GET_FLUSH_ZERO_MODE(); }
uint32_t sse_get_rounding_mode() { return _MM_GET_ROUNDING_MODE(); }
uint32_t sse_getcsr(void) { return _mm_getcsr(); }
namespace insert_pi16 {
	const unordered_map<int8_t, function<__m64(__m64, int16_t)>> map{
		{0, [](__m64 a, int16_t i) { return _mm_insert_pi16(a, i, 0); }},
		{1, [](__m64 a, int16_t i) { return _mm_insert_pi16(a, i, 1); }},
		{2, [](__m64 a, int16_t i) { return _mm_insert_pi16(a, i, 2); }},
		{3, [](__m64 a, int16_t i) { return _mm_insert_pi16(a, i, 3); }},
	};
} // namespace insert_pi16
__m64 sse_insert_pi16(__m64 a, int16_t i, int8_t imm8) { return insert_pi16::map.at(imm8 & 0x3)(a, i); }
__m128 sse_load_ps(const float* mem_addr) { return _mm_load_ps(mem_addr); }
__m128 sse_load_ps1(const float* mem_addr) { return _mm_load_ps1(mem_addr); }
__m128 sse_load_ss(const float* mem_addr) { return _mm_load_ss(mem_addr); }
__m128 sse_load1_ps(const float* mem_addr) { return _mm_load1_ps(mem_addr); }
__m128 sse_loadh_pi(__m128 a, const __m64* mem_addr) { return _mm_loadh_pi(a, mem_addr); }
__m128 sse_loadl_pi(__m128 a, const __m64* mem_addr) { return _mm_loadl_pi(a, mem_addr); }
__m128 sse_loadr_ps(const float* mem_addr) { return _mm_loadr_ps(mem_addr); }
__m128 sse_loadu_ps(const float* mem_addr) { return _mm_loadu_ps(mem_addr); }
void* sse_malloc(size_t size, size_t align) { return _mm_malloc(size, align); }
void sse_maskmove_si64(__m64 a, __m64 mask, int8_t* mem_addr) { return _mm_maskmove_si64(a, mask, (char*)mem_addr); }
__m64 sse_max_pi16(__m64 a, __m64 b) { return _mm_max_pi16(a, b); }
__m128 sse_max_ps(__m128 a, __m128 b) { return _mm_max_ps(a, b); }
__m64 sse_max_pu8(__m64 a, __m64 b) { return _mm_max_pu8(a, b); }
__m128 sse_max_ss(__m128 a, __m128 b) { return _mm_max_ss(a, b); }
__m64 sse_min_pi16(__m64 a, __m64 b) { return _mm_min_pi16(a, b); }
__m128 sse_min_ps(__m128 a, __m128 b) { return _mm_min_ps(a, b); }
__m64 sse_min_pu8(__m64 a, __m64 b) { return _mm_min_pu8(a, b); }
__m128 sse_min_ss(__m128 a, __m128 b) { return _mm_min_ss(a, b); }
__m128 sse_move_ss(__m128 a, __m128 b) { return _mm_move_ss(a, b); }
__m128 sse_movehl_ps(__m128 a, __m128 b) { return _mm_movehl_ps(a, b); }
__m128 sse_movelh_ps(__m128 a, __m128 b) { return _mm_movelh_ps(a, b); }
int32_t sse_movemask_pi8(__m64 a) { return _mm_movemask_pi8(a); }
int32_t sse_movemask_ps(__m128 a) { return _mm_movemask_ps(a); }
__m128 sse_mul_ps(__m128 a, __m128 b) { return _mm_mul_ps(a, b); }
__m128 sse_mul_ss(__m128 a, __m128 b) { return _mm_mul_ss(a, b); }
__m64 sse_mulhi_pu16(__m64 a, __m64 b) { return _mm_mulhi_pu16(a, b); }
__m128 sse_or_ps(__m128 a, __m128 b) { return _mm_or_ps(a, b); }
namespace prefetch {
	const unordered_map<int32_t, function<void(const int8_t*)>> map{
		{0, [](const int8_t* p) { return _mm_prefetch(p, (_mm_hint)0); }},
		{1, [](const int8_t* p) { return _mm_prefetch(p, (_mm_hint)1); }},
		{2, [](const int8_t* p) { return _mm_prefetch(p, (_mm_hint)2); }},
		{3, [](const int8_t* p) { return _mm_prefetch(p, (_mm_hint)3); }},
	};
} // namespace prefetch
void sse_prefetch(const int8_t* p, int32_t i) { return prefetch::map.at(i & 0x3)(p); }
__m128 sse_rcp_ps(__m128 a) { return _mm_rcp_ps(a); }
__m128 sse_rcp_ss(__m128 a) { return _mm_rcp_ss(a); }
__m128 sse_rsqrt_ps(__m128 a) { return _mm_rsqrt_ps(a); }
__m128 sse_rsqrt_ss(__m128 a) { return _mm_rsqrt_ss(a); }
__m64 sse_sad_pu8(__m64 a, __m64 b) { return _mm_sad_pu8(a, b); }
void sse_set_exception_mask(uint32_t a) { return _MM_SET_EXCEPTION_MASK(a); }
void sse_set_exception_state(uint32_t a) { return _MM_SET_EXCEPTION_STATE(a); }
void sse_set_flush_zero_mode(uint32_t a) { return _MM_SET_FLUSH_ZERO_MODE(a); }
__m128 sse_set_ps(float e3, float e2, float e1, float e0) { return _mm_set_ps(e3, e2, e1, e0); }
__m128 sse_set_ps1(float a) { return _mm_set_ps1(a); }
void sse_set_rounding_mode(uint32_t a) { return _MM_SET_ROUNDING_MODE(a); }
__m128 sse_set_ss(float a) { return _mm_set_ss(a); }
__m128 sse_set1_ps(float a) { return _mm_set1_ps(a); }
void sse_setcsr(uint32_t a) { return _mm_setcsr(a); }
__m128 sse_setr_ps(float e3, float e2, float e1, float e0) { return _mm_setr_ps(e3, e2, e1, e0); }
__m128 sse_setzero_ps(void) { return _mm_setzero_ps(); }
void sse_sfence(void) { return _mm_sfence(); }
namespace shuffle_pi16 {
	const unordered_map<int8_t, function<__m64(__m64)>> map{
		{0, [](__m64 a) { return _mm_shuffle_pi16(a, 0); }},
		{1, [](__m64 a) { return _mm_shuffle_pi16(a, 1); }},
		{2, [](__m64 a) { return _mm_shuffle_pi16(a, 2); }},
		{3, [](__m64 a) { return _mm_shuffle_pi16(a, 3); }},
	};
} // namespace shuffle_pi16
__m64 sse_shuffle_pi16(__m64 a, int8_t imm8) { return shuffle_pi16::map.at(imm8 & 0x3)(a); }
namespace shuffle_ps {
	const unordered_map<int8_t, function<__m128(__m128, __m128)>> map{
		{0, [](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 0); }},
		{1, [](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 1); }},
		{2, [](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 2); }},
		{3, [](__m128 a, __m128 b) { return _mm_shuffle_ps(a, b, 3); }},
	};
} // namespace shuffle_pss
__m128 sse_shuffle_ps(__m128 a, __m128 b, uint32_t imm8) { return shuffle_ps::map.at(imm8 & 0x3)(a, b); }
__m128 sse_sqrt_ps(__m128 a) { return _mm_sqrt_ps(a); }
__m128 sse_sqrt_ss(__m128 a) { return _mm_sqrt_ss(a); }
void sse_store_ps(float* mem_addr, __m128 a) { return _mm_store_ps(mem_addr, a); }
void sse_store_ps1(float* mem_addr, __m128 a) { return _mm_store_ps1(mem_addr, a); }
void sse_store_ss(float* mem_addr, __m128 a) { return _mm_store_ss(mem_addr, a); }
void sse_store1_ps(float* mem_addr, __m128 a) { return _mm_store1_ps(mem_addr, a); }
void sse_storeh_pi(__m64* mem_addr, __m128 a) { return _mm_storeh_pi(mem_addr, a); }
void sse_storel_pi(__m64* mem_addr, __m128 a) { return _mm_storel_pi(mem_addr, a); }
void sse_storer_ps(float* mem_addr, __m128 a) { return _mm_storer_ps(mem_addr, a); }
void sse_storeu_ps(float* mem_addr, __m128 a) { return _mm_storeu_ps(mem_addr, a); }
void sse_stream_pi(__m64* mem_addr, __m64 a) { return _mm_stream_pi(mem_addr, a); }
void sse_stream_ps(float* mem_addr, __m128 a) { return _mm_stream_ps(mem_addr, a); }
__m128 sse_sub_ps(__m128 a, __m128 b) { return _mm_sub_ps(a, b); }
__m128 sse_sub_ss(__m128 a, __m128 b) { return _mm_sub_ss(a, b); }
//void sse_transpose4_ps(__m128 row0, __m128 row1, __m128 row2, __m128 row3) { return _MM_TRANSPOSE4_PS(row0, row1, row2, row3); }
bool sse_ucomieq_ss(__m128 a, __m128 b) { return _mm_ucomieq_ss(a, b); }
bool sse_ucomige_ss(__m128 a, __m128 b) { return _mm_ucomige_ss(a, b); }
bool sse_ucomigt_ss(__m128 a, __m128 b) { return _mm_ucomigt_ss(a, b); }
bool sse_ucomile_ss(__m128 a, __m128 b) { return _mm_ucomile_ss(a, b); }
bool sse_ucomilt_ss(__m128 a, __m128 b) { return _mm_ucomilt_ss(a, b); }
bool sse_ucomineq_ss(__m128 a, __m128 b) { return _mm_ucomineq_ss(a, b); }
__m128 sse_undefined_ps(void) { return _mm_undefined_ps(); }
__m128 sse_unpackhi_ps(__m128 a, __m128 b) { return _mm_unpackhi_ps(a, b); }
__m128 sse_unpacklo_ps(__m128 a, __m128 b) { return _mm_unpacklo_ps(a, b); }
__m128 sse_xor_ps(__m128 a, __m128 b) { return _mm_xor_ps(a, b); }

#pragma GCC diagnostic pop
