#ifndef SSE_H
#define SSE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

extern const bool SSE;

#ifndef __m128
typedef float __m128 __attribute__((__vector_size__(16), __aligned__(16)));
#endif

#ifdef __cplusplus
extern "C" {
#endif

__m128 sse_add_ps(__m128 a, __m128 b);
__m128 sse_add_ss(__m128 a, __m128 b);
__m128 sse_and_ps(__m128 a, __m128 b);
__m128 sse_andnot_ps(__m128 a, __m128 b);
__m128 sse_cmpeq_ps(__m128 a, __m128 b);
__m128 sse_cmpeq_ss(__m128 a, __m128 b);
__m128 sse_cmpge_ps(__m128 a, __m128 b);
__m128 sse_cmpge_ss(__m128 a, __m128 b);
__m128 sse_cmpgt_ps(__m128 a, __m128 b);
__m128 sse_cmpgt_ss(__m128 a, __m128 b);
__m128 sse_cmple_ps(__m128 a, __m128 b);
__m128 sse_cmple_ss(__m128 a, __m128 b);
__m128 sse_cmplt_ps(__m128 a, __m128 b);
__m128 sse_cmplt_ss(__m128 a, __m128 b);
__m128 sse_cmpneq_ps(__m128 a, __m128 b);
__m128 sse_cmpneq_ss(__m128 a, __m128 b);
__m128 sse_cmpnge_ps(__m128 a, __m128 b);
__m128 sse_cmpnge_ss(__m128 a, __m128 b);
__m128 sse_cmpngt_ps(__m128 a, __m128 b);
__m128 sse_cmpngt_ss(__m128 a, __m128 b);
__m128 sse_cmpnle_ps(__m128 a, __m128 b);
__m128 sse_cmpnle_ss(__m128 a, __m128 b);
__m128 sse_cmpnlt_ps(__m128 a, __m128 b);
__m128 sse_cmpnlt_ss(__m128 a, __m128 b);
__m128 sse_cmpord_ps(__m128 a, __m128 b);
__m128 sse_cmpord_ss(__m128 a, __m128 b);
__m128 sse_cmpunord_ps(__m128 a, __m128 b);
__m128 sse_cmpunord_ss(__m128 a, __m128 b);
bool sse_comieq_ss(__m128 a, __m128 b);
bool sse_comige_ss(__m128 a, __m128 b);
bool sse_comigt_ss(__m128 a, __m128 b);
bool sse_comile_ss(__m128 a, __m128 b);
bool sse_comilt_ss(__m128 a, __m128 b);
bool sse_comineq_ss(__m128 a, __m128 b);
__m128 sse_cvt_si2ss(__m128 a, int32_t b);
int32_t sse_cvt_ss2si(__m128 a);
__m128 sse_cvtsi32_ss(__m128 a, int32_t b);
__m128 sse_cvtsi64_ss(__m128 a, int64_t b);
float sse_cvtss_f32(__m128 a);
int32_t sse_cvtss_si32(__m128 a);
int64_t sse_cvtss_si64(__m128 a);
int32_t sse_cvtt_ss2si(__m128 a);
int32_t sse_cvttss_si32(__m128 a);
int64_t sse_cvttss_si64(__m128 a);
__m128 sse_div_ps(__m128 a, __m128 b);
__m128 sse_div_ss(__m128 a, __m128 b);
void sse_free(void* mem_addr);
uint32_t sse_get_exception_mask();
uint32_t sse_get_exception_state();
uint32_t sse_get_flush_zero_mode();
uint32_t sse_get_rounding_mode();
uint32_t sse_getcsr(void);
__m128 sse_load_ps(const float* mem_addr);
__m128 sse_load_ps1(const float* mem_addr);
__m128 sse_load_ss(const float* mem_addr);
__m128 sse_load1_ps(const float* mem_addr);
__m128 sse_loadr_ps(const float* mem_addr);
__m128 sse_loadu_ps(const float* mem_addr);
void* sse_malloc(size_t size, size_t align);
__m128 sse_max_ps(__m128 a, __m128 b);
__m128 sse_max_ss(__m128 a, __m128 b);
__m128 sse_min_ps(__m128 a, __m128 b);
__m128 sse_min_ss(__m128 a, __m128 b);
__m128 sse_move_ss(__m128 a, __m128 b);
__m128 sse_movehl_ps(__m128 a, __m128 b);
__m128 sse_movelh_ps(__m128 a, __m128 b);
int32_t sse_movemask_ps(__m128 a);
__m128 sse_mul_ps(__m128 a, __m128 b);
__m128 sse_mul_ss(__m128 a, __m128 b);
__m128 sse_or_ps(__m128 a, __m128 b);
void sse_prefetch(const int8_t* p, int32_t i);
__m128 sse_rcp_ps(__m128 a);
__m128 sse_rcp_ss(__m128 a);
__m128 sse_rsqrt_ps(__m128 a);
__m128 sse_rsqrt_ss(__m128 a);
void sse_set_exception_mask(uint32_t a);
void sse_set_exception_state(uint32_t a);
void sse_set_flush_zero_mode(uint32_t a);
__m128 sse_set_ps(float e3, float e2, float e1, float e0);
__m128 sse_set_ps1(float a);
void sse_set_rounding_mode(uint32_t a);
__m128 sse_set_ss(float a);
__m128 sse_set1_ps(float a);
void sse_setcsr(uint32_t a);
__m128 sse_setr_ps(float e3, float e2, float e1, float e0);
__m128 sse_setzero_ps(void);
void sse_sfence(void);
__m128 sse_shuffle_ps(__m128 a, __m128 b, uint8_t imm8);
__m128 sse_sqrt_ps(__m128 a);
__m128 sse_sqrt_ss(__m128 a);
void sse_store_ps(float* mem_addr, __m128 a);
void sse_store_ps1(float* mem_addr, __m128 a);
void sse_store_ss(float* mem_addr, __m128 a);
void sse_store1_ps(float* mem_addr, __m128 a);
void sse_storer_ps(float* mem_addr, __m128 a);
void sse_storeu_ps(float* mem_addr, __m128 a);
void sse_stream_ps(float* mem_addr, __m128 a);
__m128 sse_sub_ps(__m128 a, __m128 b);
__m128 sse_sub_ss(__m128 a, __m128 b);
void sse_transpose4_ps(__m128 row0, __m128 row1, __m128 row2, __m128 row3);
bool sse_ucomieq_ss(__m128 a, __m128 b);
bool sse_ucomige_ss(__m128 a, __m128 b);
bool sse_ucomigt_ss(__m128 a, __m128 b);
bool sse_ucomile_ss(__m128 a, __m128 b);
bool sse_ucomilt_ss(__m128 a, __m128 b);
bool sse_ucomineq_ss(__m128 a, __m128 b);
__m128 sse_undefined_ps(void);
__m128 sse_unpackhi_ps(__m128 a, __m128 b);
__m128 sse_unpacklo_ps(__m128 a, __m128 b);
__m128 sse_xor_ps(__m128 a, __m128 b);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // SSE_H
