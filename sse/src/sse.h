#ifndef SSE_H
#define SSE_H

#ifndef __cplusplus
#include <stdbool.h>
#endif

extern const bool SSE;

#include <stddef.h>

#ifndef __m128
#ifdef _MSC_VER
typedef struct __declspec(intrin_type) __declspec(align(16)) __m128 {
	float m128_f32[4];
} __m128;
#else
typedef float __m128 __attribute__((__vector_size__(16)));
#endif //_MSC_VER
#endif //__m128

#ifndef __m128i
#ifdef _MSC_VER
typedef struct __declspec(intrin_type) __declspec(align(16)) __m128i {
	int m128_i32[4];
} __m128i;
#else
typedef long long __m128i __attribute__((__vector_size__(16)));
#endif //_MSC_VER
#endif //__m128i

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

int sse_comieq_ss(__m128 a, __m128 b);

int sse_comige_ss(__m128 a, __m128 b);

int sse_comigt_ss(__m128 a, __m128 b);

int sse_comile_ss(__m128 a, __m128 b);

int sse_comilt_ss(__m128 a, __m128 b);

int sse_comineq_ss(__m128 a, __m128 b);

__m128 sse_cvt_si2ss(__m128 a, int b);

int sse_cvt_ss2si(__m128 a);

__m128 sse_cvtsi32_ss(__m128 a, int b);

__m128 sse_cvtsi64_ss(__m128 a, long long b);

float sse_cvtss_f32(__m128 a);

int sse_cvtss_si32(__m128 a);

long long sse_cvtss_si64(__m128 a);

int sse_cvtt_ss2si(__m128 a);

int sse_cvttss_si32(__m128 a);

long long sse_cvttss_si64(__m128 a);

__m128 sse_div_ps(__m128 a, __m128 b);

__m128 sse_div_ss(__m128 a, __m128 b);

void sse_free(void* mem_addr);

unsigned int sse_get_exception_mask();

unsigned int sse_get_exception_state();

unsigned int sse_get_flush_zero_mode();

unsigned int sse_get_rounding_mode();

unsigned int sse_getcsr();

__m128 sse_load_ps(const float* mem_addr);

__m128 sse_load_ps1(const float* mem_addr);

__m128 sse_load_ss(const float* mem_addr);

__m128 sse_load1_ps(const float* mem_addr);

__m128 sse_loadr_ps(const float* mem_addr);

__m128 sse_loadu_ps(const float* mem_addr);

__m128i sse_loadu_si16(const void* mem_addr);

__m128i sse_loadu_si64(const void* mem_addr);

void* sse_malloc(size_t size, size_t align);

__m128 sse_max_ps(__m128 a, __m128 b);

__m128 sse_max_ss(__m128 a, __m128 b);

__m128 sse_min_ps(__m128 a, __m128 b);

__m128 sse_min_ss(__m128 a, __m128 b);

__m128 sse_move_ss(__m128 a, __m128 b);

__m128 sse_movehl_ps(__m128 a, __m128 b);

__m128 sse_movelh_ps(__m128 a, __m128 b);

int sse_movemask_ps(__m128 a);

__m128 sse_mul_ps(__m128 a, __m128 b);

__m128 sse_mul_ss(__m128 a, __m128 b);

__m128 sse_or_ps(__m128 a, __m128 b);

void sse_prefetchnta(const char* p);

void sse_prefetcht0(const char* p);

void sse_prefetcht1(const char* p);

void sse_prefetcht2(const char* p);

__m128 sse_rcp_ps(__m128 a);

__m128 sse_rcp_ss(__m128 a);

__m128 sse_rsqrt_ps(__m128 a);

__m128 sse_rsqrt_ss(__m128 a);

void sse_set_exception_mask(unsigned int a);

void sse_set_exception_state(unsigned int a);

void sse_set_flush_zero_mode(unsigned int a);

__m128 sse_set_ps(float e3, float e2, float e1, float e0);

__m128 sse_set_ps1(float a);

void sse_set_rounding_mode(unsigned int a);

__m128 sse_set_ss(float a);

__m128 sse_set1_ps(float a);

void sse_setcsr(unsigned int a);

__m128 sse_setr_ps(float e3, float e2, float e1, float e0);

__m128 sse_setzero_ps();

void sse_sfence();

__m128 sse_shuffle_ps(__m128 a, __m128 b, unsigned int imm8);

__m128 sse_sqrt_ps(__m128 a);

__m128 sse_sqrt_ss(__m128 a);

void sse_store_ps(float* mem_addr, __m128 a);

void sse_store_ps1(float* mem_addr, __m128 a);

void sse_store_ss(float* mem_addr, __m128 a);

void sse_store1_ps(float* mem_addr, __m128 a);

void sse_storer_ps(float* mem_addr, __m128 a);

void sse_storeu_ps(float* mem_addr, __m128 a);

void sse_storeu_si16(void* mem_addr, __m128i a);

void sse_storeu_si64(void* mem_addr, __m128i a);

void sse_stream_ps(float* mem_addr, __m128 a);

__m128 sse_sub_ps(__m128 a, __m128 b);

__m128 sse_sub_ss(__m128 a, __m128 b);

int sse_ucomieq_ss(__m128 a, __m128 b);

int sse_ucomige_ss(__m128 a, __m128 b);

int sse_ucomigt_ss(__m128 a, __m128 b);

int sse_ucomile_ss(__m128 a, __m128 b);

int sse_ucomilt_ss(__m128 a, __m128 b);

int sse_ucomineq_ss(__m128 a, __m128 b);

__m128 sse_undefined_ps();

__m128 sse_unpackhi_ps(__m128 a, __m128 b);

__m128 sse_unpacklo_ps(__m128 a, __m128 b);

__m128 sse_xor_ps(__m128 a, __m128 b);

#ifdef __cplusplus
} //extern "C"
#endif

#endif //SSE_H
