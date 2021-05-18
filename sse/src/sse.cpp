#include <immintrin.h>

#include "sse.h"

__m128 sse_add_ps(__m128 a, __m128 b) { return _mm_add_ps(a, b); }

__m128 sse_add_ss(__m128 a, __m128 b) { return _mm_add_ss(a, b); }

__m128 sse_and_ps(__m128 a, __m128 b) { return _mm_and_ps(a, b); }

__m128 sse_andnot_ps(__m128 a, __m128 b) { return _mm_andnot_ps(a, b); }

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

int sse_comieq_ss(__m128 a, __m128 b) { return _mm_comieq_ss(a, b); }

int sse_comige_ss(__m128 a, __m128 b) { return _mm_comige_ss(a, b); }

int sse_comigt_ss(__m128 a, __m128 b) { return _mm_comigt_ss(a, b); }

int sse_comile_ss(__m128 a, __m128 b) { return _mm_comile_ss(a, b); }

int sse_comilt_ss(__m128 a, __m128 b) { return _mm_comilt_ss(a, b); }

int sse_comineq_ss(__m128 a, __m128 b) { return _mm_comineq_ss(a, b); }

__m128 sse_cvt_si2ss(__m128 a, int b) { return _mm_cvt_si2ss(a, b); }

int sse_cvt_ss2si(__m128 a) { return _mm_cvt_ss2si(a); }

__m128 sse_cvtsi32_ss(__m128 a, int b) { return _mm_cvtsi32_ss(a, b); }

__m128 sse_cvtsi64_ss(__m128 a, long long b) { return _mm_cvtsi64_ss(a, b); }

float sse_cvtss_f32(__m128 a) { return _mm_cvtss_f32(a); }

int sse_cvtss_si32(__m128 a) { return _mm_cvtss_si32(a); }

long long sse_cvtss_si64(__m128 a) { return _mm_cvtss_si64(a); }

int sse_cvtt_ss2si(__m128 a) { return _mm_cvtt_ss2si(a); }

int sse_cvttss_si32(__m128 a) { return _mm_cvttss_si32(a); }

long long sse_cvttss_si64(__m128 a) { return _mm_cvttss_si64(a); }

__m128 sse_div_ps(__m128 a, __m128 b) { return _mm_div_ps(a, b); }

__m128 sse_div_ss(__m128 a, __m128 b) { return _mm_div_ss(a, b); }

void sse_free(void* mem_addr) { return _mm_free(mem_addr); }

unsigned int sse_get_exception_mask() { return _MM_GET_EXCEPTION_MASK(); }

unsigned int sse_get_exception_state() { return _MM_GET_EXCEPTION_STATE(); }

unsigned int sse_get_flush_zero_mode() { return _MM_GET_FLUSH_ZERO_MODE(); }

unsigned int sse_get_rounding_mode() { return _MM_GET_ROUNDING_MODE(); }

unsigned int sse_getcsr() { return _mm_getcsr(); }

__m128 sse_load_ps(const float* mem_addr) { return _mm_load_ps(mem_addr); }

__m128 sse_load_ps1(const float* mem_addr) { return _mm_load_ps1(mem_addr); }

__m128 sse_load_ss(const float* mem_addr) { return _mm_load_ss(mem_addr); }

__m128 sse_load1_ps(const float* mem_addr) { return _mm_load1_ps(mem_addr); }

__m128 sse_loadr_ps(const float* mem_addr) { return _mm_loadr_ps(mem_addr); }

__m128 sse_loadu_ps(const float* mem_addr) { return _mm_loadu_ps(mem_addr); }

__m128i sse_loadu_si16(const void* mem_addr) { return _mm_loadu_si16(mem_addr); }

__m128i sse_loadu_si64(const void* mem_addr) { return _mm_loadu_si64(mem_addr); }

void* sse_malloc(size_t size, size_t align) { return _mm_malloc(size, align); }

__m128 sse_max_ps(__m128 a, __m128 b) { return _mm_max_ps(a, b); }

__m128 sse_max_ss(__m128 a, __m128 b) { return _mm_max_ss(a, b); }

__m128 sse_min_ps(__m128 a, __m128 b) { return _mm_min_ps(a, b); }

__m128 sse_min_ss(__m128 a, __m128 b) { return _mm_min_ss(a, b); }

__m128 sse_move_ss(__m128 a, __m128 b) { return _mm_move_ss(a, b); }

__m128 sse_movehl_ps(__m128 a, __m128 b) { return _mm_movehl_ps(a, b); }

__m128 sse_movelh_ps(__m128 a, __m128 b) { return _mm_movelh_ps(a, b); }

int sse_movemask_ps(__m128 a) { return _mm_movemask_ps(a); }

__m128 sse_mul_ps(__m128 a, __m128 b) { return _mm_mul_ps(a, b); }

__m128 sse_mul_ss(__m128 a, __m128 b) { return _mm_mul_ss(a, b); }

__m128 sse_or_ps(__m128 a, __m128 b) { return _mm_or_ps(a, b); }

void sse_prefetchnta(const char* p) { return _mm_prefetch(p, _MM_HINT_NTA); }

void sse_prefetcht0(const char* p) { return _mm_prefetch(p, _MM_HINT_T0); }

void sse_prefetcht1(const char* p) { return _mm_prefetch(p, _MM_HINT_T1); }

void sse_prefetcht2(const char* p) { return _mm_prefetch(p, _MM_HINT_T2); }

__m128 sse_rcp_ps(__m128 a) { return _mm_rcp_ps(a); }

__m128 sse_rcp_ss(__m128 a) { return _mm_rcp_ss(a); }

__m128 sse_rsqrt_ps(__m128 a) { return _mm_rsqrt_ps(a); }

__m128 sse_rsqrt_ss(__m128 a) { return _mm_rsqrt_ss(a); }

void sse_set_exception_mask(unsigned int a) { return _MM_SET_EXCEPTION_MASK(a); }

void sse_set_exception_state(unsigned int a) { return _MM_SET_EXCEPTION_STATE(a); }

void sse_set_flush_zero_mode(unsigned int a) { return _MM_SET_FLUSH_ZERO_MODE(a); }

__m128 sse_set_ps(float e3, float e2, float e1, float e0) { return _mm_set_ps(e3, e2, e1, e0); }

__m128 sse_set_ps1(float a) { return _mm_set_ps1(a); }

void sse_set_rounding_mode(unsigned int a) { return _MM_SET_ROUNDING_MODE(a); }

__m128 sse_set_ss(float a) { return _mm_set_ss(a); }

__m128 sse_set1_ps(float a) { return _mm_set1_ps(a); }

void sse_setcsr(unsigned int a) { return _mm_setcsr(a); }

__m128 sse_setr_ps(float e3, float e2, float e1, float e0) { return _mm_setr_ps(e3, e2, e1, e0); }

__m128 sse_setzero_ps() { return _mm_setzero_ps(); }

void sse_sfence() { return _mm_sfence(); }

__m128 sse_shuffle_ps(__m128 a, __m128 b, unsigned int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_shuffle_ps(a, b, 0x00);
		case 0x01: return _mm_shuffle_ps(a, b, 0x01);
		case 0x02: return _mm_shuffle_ps(a, b, 0x02);
		case 0x03: return _mm_shuffle_ps(a, b, 0x03);
		case 0x04: return _mm_shuffle_ps(a, b, 0x04);
		case 0x05: return _mm_shuffle_ps(a, b, 0x05);
		case 0x06: return _mm_shuffle_ps(a, b, 0x06);
		case 0x07: return _mm_shuffle_ps(a, b, 0x07);
		case 0x08: return _mm_shuffle_ps(a, b, 0x08);
		case 0x09: return _mm_shuffle_ps(a, b, 0x09);
		case 0x0A: return _mm_shuffle_ps(a, b, 0x0A);
		case 0x0B: return _mm_shuffle_ps(a, b, 0x0B);
		case 0x0C: return _mm_shuffle_ps(a, b, 0x0C);
		case 0x0D: return _mm_shuffle_ps(a, b, 0x0D);
		case 0x0E: return _mm_shuffle_ps(a, b, 0x0E);
		case 0x0F: return _mm_shuffle_ps(a, b, 0x0F);
		case 0x10: return _mm_shuffle_ps(a, b, 0x10);
		case 0x11: return _mm_shuffle_ps(a, b, 0x11);
		case 0x12: return _mm_shuffle_ps(a, b, 0x12);
		case 0x13: return _mm_shuffle_ps(a, b, 0x13);
		case 0x14: return _mm_shuffle_ps(a, b, 0x14);
		case 0x15: return _mm_shuffle_ps(a, b, 0x15);
		case 0x16: return _mm_shuffle_ps(a, b, 0x16);
		case 0x17: return _mm_shuffle_ps(a, b, 0x17);
		case 0x18: return _mm_shuffle_ps(a, b, 0x18);
		case 0x19: return _mm_shuffle_ps(a, b, 0x19);
		case 0x1A: return _mm_shuffle_ps(a, b, 0x1A);
		case 0x1B: return _mm_shuffle_ps(a, b, 0x1B);
		case 0x1C: return _mm_shuffle_ps(a, b, 0x1C);
		case 0x1D: return _mm_shuffle_ps(a, b, 0x1D);
		case 0x1E: return _mm_shuffle_ps(a, b, 0x1E);
		case 0x1F: return _mm_shuffle_ps(a, b, 0x1F);
		case 0x20: return _mm_shuffle_ps(a, b, 0x20);
		case 0x21: return _mm_shuffle_ps(a, b, 0x21);
		case 0x22: return _mm_shuffle_ps(a, b, 0x22);
		case 0x23: return _mm_shuffle_ps(a, b, 0x23);
		case 0x24: return _mm_shuffle_ps(a, b, 0x24);
		case 0x25: return _mm_shuffle_ps(a, b, 0x25);
		case 0x26: return _mm_shuffle_ps(a, b, 0x26);
		case 0x27: return _mm_shuffle_ps(a, b, 0x27);
		case 0x28: return _mm_shuffle_ps(a, b, 0x28);
		case 0x29: return _mm_shuffle_ps(a, b, 0x29);
		case 0x2A: return _mm_shuffle_ps(a, b, 0x2A);
		case 0x2B: return _mm_shuffle_ps(a, b, 0x2B);
		case 0x2C: return _mm_shuffle_ps(a, b, 0x2C);
		case 0x2D: return _mm_shuffle_ps(a, b, 0x2D);
		case 0x2E: return _mm_shuffle_ps(a, b, 0x2E);
		case 0x2F: return _mm_shuffle_ps(a, b, 0x2F);
		case 0x30: return _mm_shuffle_ps(a, b, 0x30);
		case 0x31: return _mm_shuffle_ps(a, b, 0x31);
		case 0x32: return _mm_shuffle_ps(a, b, 0x32);
		case 0x33: return _mm_shuffle_ps(a, b, 0x33);
		case 0x34: return _mm_shuffle_ps(a, b, 0x34);
		case 0x35: return _mm_shuffle_ps(a, b, 0x35);
		case 0x36: return _mm_shuffle_ps(a, b, 0x36);
		case 0x37: return _mm_shuffle_ps(a, b, 0x37);
		case 0x38: return _mm_shuffle_ps(a, b, 0x38);
		case 0x39: return _mm_shuffle_ps(a, b, 0x39);
		case 0x3A: return _mm_shuffle_ps(a, b, 0x3A);
		case 0x3B: return _mm_shuffle_ps(a, b, 0x3B);
		case 0x3C: return _mm_shuffle_ps(a, b, 0x3C);
		case 0x3D: return _mm_shuffle_ps(a, b, 0x3D);
		case 0x3E: return _mm_shuffle_ps(a, b, 0x3E);
		case 0x3F: return _mm_shuffle_ps(a, b, 0x3F);
		case 0x40: return _mm_shuffle_ps(a, b, 0x40);
		case 0x41: return _mm_shuffle_ps(a, b, 0x41);
		case 0x42: return _mm_shuffle_ps(a, b, 0x42);
		case 0x43: return _mm_shuffle_ps(a, b, 0x43);
		case 0x44: return _mm_shuffle_ps(a, b, 0x44);
		case 0x45: return _mm_shuffle_ps(a, b, 0x45);
		case 0x46: return _mm_shuffle_ps(a, b, 0x46);
		case 0x47: return _mm_shuffle_ps(a, b, 0x47);
		case 0x48: return _mm_shuffle_ps(a, b, 0x48);
		case 0x49: return _mm_shuffle_ps(a, b, 0x49);
		case 0x4A: return _mm_shuffle_ps(a, b, 0x4A);
		case 0x4B: return _mm_shuffle_ps(a, b, 0x4B);
		case 0x4C: return _mm_shuffle_ps(a, b, 0x4C);
		case 0x4D: return _mm_shuffle_ps(a, b, 0x4D);
		case 0x4E: return _mm_shuffle_ps(a, b, 0x4E);
		case 0x4F: return _mm_shuffle_ps(a, b, 0x4F);
		case 0x50: return _mm_shuffle_ps(a, b, 0x50);
		case 0x51: return _mm_shuffle_ps(a, b, 0x51);
		case 0x52: return _mm_shuffle_ps(a, b, 0x52);
		case 0x53: return _mm_shuffle_ps(a, b, 0x53);
		case 0x54: return _mm_shuffle_ps(a, b, 0x54);
		case 0x55: return _mm_shuffle_ps(a, b, 0x55);
		case 0x56: return _mm_shuffle_ps(a, b, 0x56);
		case 0x57: return _mm_shuffle_ps(a, b, 0x57);
		case 0x58: return _mm_shuffle_ps(a, b, 0x58);
		case 0x59: return _mm_shuffle_ps(a, b, 0x59);
		case 0x5A: return _mm_shuffle_ps(a, b, 0x5A);
		case 0x5B: return _mm_shuffle_ps(a, b, 0x5B);
		case 0x5C: return _mm_shuffle_ps(a, b, 0x5C);
		case 0x5D: return _mm_shuffle_ps(a, b, 0x5D);
		case 0x5E: return _mm_shuffle_ps(a, b, 0x5E);
		case 0x5F: return _mm_shuffle_ps(a, b, 0x5F);
		case 0x60: return _mm_shuffle_ps(a, b, 0x60);
		case 0x61: return _mm_shuffle_ps(a, b, 0x61);
		case 0x62: return _mm_shuffle_ps(a, b, 0x62);
		case 0x63: return _mm_shuffle_ps(a, b, 0x63);
		case 0x64: return _mm_shuffle_ps(a, b, 0x64);
		case 0x65: return _mm_shuffle_ps(a, b, 0x65);
		case 0x66: return _mm_shuffle_ps(a, b, 0x66);
		case 0x67: return _mm_shuffle_ps(a, b, 0x67);
		case 0x68: return _mm_shuffle_ps(a, b, 0x68);
		case 0x69: return _mm_shuffle_ps(a, b, 0x69);
		case 0x6A: return _mm_shuffle_ps(a, b, 0x6A);
		case 0x6B: return _mm_shuffle_ps(a, b, 0x6B);
		case 0x6C: return _mm_shuffle_ps(a, b, 0x6C);
		case 0x6D: return _mm_shuffle_ps(a, b, 0x6D);
		case 0x6E: return _mm_shuffle_ps(a, b, 0x6E);
		case 0x6F: return _mm_shuffle_ps(a, b, 0x6F);
		case 0x70: return _mm_shuffle_ps(a, b, 0x70);
		case 0x71: return _mm_shuffle_ps(a, b, 0x71);
		case 0x72: return _mm_shuffle_ps(a, b, 0x72);
		case 0x73: return _mm_shuffle_ps(a, b, 0x73);
		case 0x74: return _mm_shuffle_ps(a, b, 0x74);
		case 0x75: return _mm_shuffle_ps(a, b, 0x75);
		case 0x76: return _mm_shuffle_ps(a, b, 0x76);
		case 0x77: return _mm_shuffle_ps(a, b, 0x77);
		case 0x78: return _mm_shuffle_ps(a, b, 0x78);
		case 0x79: return _mm_shuffle_ps(a, b, 0x79);
		case 0x7A: return _mm_shuffle_ps(a, b, 0x7A);
		case 0x7B: return _mm_shuffle_ps(a, b, 0x7B);
		case 0x7C: return _mm_shuffle_ps(a, b, 0x7C);
		case 0x7D: return _mm_shuffle_ps(a, b, 0x7D);
		case 0x7E: return _mm_shuffle_ps(a, b, 0x7E);
		case 0x7F: return _mm_shuffle_ps(a, b, 0x7F);
		case 0x80: return _mm_shuffle_ps(a, b, 0x80);
		case 0x81: return _mm_shuffle_ps(a, b, 0x81);
		case 0x82: return _mm_shuffle_ps(a, b, 0x82);
		case 0x83: return _mm_shuffle_ps(a, b, 0x83);
		case 0x84: return _mm_shuffle_ps(a, b, 0x84);
		case 0x85: return _mm_shuffle_ps(a, b, 0x85);
		case 0x86: return _mm_shuffle_ps(a, b, 0x86);
		case 0x87: return _mm_shuffle_ps(a, b, 0x87);
		case 0x88: return _mm_shuffle_ps(a, b, 0x88);
		case 0x89: return _mm_shuffle_ps(a, b, 0x89);
		case 0x8A: return _mm_shuffle_ps(a, b, 0x8A);
		case 0x8B: return _mm_shuffle_ps(a, b, 0x8B);
		case 0x8C: return _mm_shuffle_ps(a, b, 0x8C);
		case 0x8D: return _mm_shuffle_ps(a, b, 0x8D);
		case 0x8E: return _mm_shuffle_ps(a, b, 0x8E);
		case 0x8F: return _mm_shuffle_ps(a, b, 0x8F);
		case 0x90: return _mm_shuffle_ps(a, b, 0x90);
		case 0x91: return _mm_shuffle_ps(a, b, 0x91);
		case 0x92: return _mm_shuffle_ps(a, b, 0x92);
		case 0x93: return _mm_shuffle_ps(a, b, 0x93);
		case 0x94: return _mm_shuffle_ps(a, b, 0x94);
		case 0x95: return _mm_shuffle_ps(a, b, 0x95);
		case 0x96: return _mm_shuffle_ps(a, b, 0x96);
		case 0x97: return _mm_shuffle_ps(a, b, 0x97);
		case 0x98: return _mm_shuffle_ps(a, b, 0x98);
		case 0x99: return _mm_shuffle_ps(a, b, 0x99);
		case 0x9A: return _mm_shuffle_ps(a, b, 0x9A);
		case 0x9B: return _mm_shuffle_ps(a, b, 0x9B);
		case 0x9C: return _mm_shuffle_ps(a, b, 0x9C);
		case 0x9D: return _mm_shuffle_ps(a, b, 0x9D);
		case 0x9E: return _mm_shuffle_ps(a, b, 0x9E);
		case 0x9F: return _mm_shuffle_ps(a, b, 0x9F);
		case 0xA0: return _mm_shuffle_ps(a, b, 0xA0);
		case 0xA1: return _mm_shuffle_ps(a, b, 0xA1);
		case 0xA2: return _mm_shuffle_ps(a, b, 0xA2);
		case 0xA3: return _mm_shuffle_ps(a, b, 0xA3);
		case 0xA4: return _mm_shuffle_ps(a, b, 0xA4);
		case 0xA5: return _mm_shuffle_ps(a, b, 0xA5);
		case 0xA6: return _mm_shuffle_ps(a, b, 0xA6);
		case 0xA7: return _mm_shuffle_ps(a, b, 0xA7);
		case 0xA8: return _mm_shuffle_ps(a, b, 0xA8);
		case 0xA9: return _mm_shuffle_ps(a, b, 0xA9);
		case 0xAA: return _mm_shuffle_ps(a, b, 0xAA);
		case 0xAB: return _mm_shuffle_ps(a, b, 0xAB);
		case 0xAC: return _mm_shuffle_ps(a, b, 0xAC);
		case 0xAD: return _mm_shuffle_ps(a, b, 0xAD);
		case 0xAE: return _mm_shuffle_ps(a, b, 0xAE);
		case 0xAF: return _mm_shuffle_ps(a, b, 0xAF);
		case 0xB0: return _mm_shuffle_ps(a, b, 0xB0);
		case 0xB1: return _mm_shuffle_ps(a, b, 0xB1);
		case 0xB2: return _mm_shuffle_ps(a, b, 0xB2);
		case 0xB3: return _mm_shuffle_ps(a, b, 0xB3);
		case 0xB4: return _mm_shuffle_ps(a, b, 0xB4);
		case 0xB5: return _mm_shuffle_ps(a, b, 0xB5);
		case 0xB6: return _mm_shuffle_ps(a, b, 0xB6);
		case 0xB7: return _mm_shuffle_ps(a, b, 0xB7);
		case 0xB8: return _mm_shuffle_ps(a, b, 0xB8);
		case 0xB9: return _mm_shuffle_ps(a, b, 0xB9);
		case 0xBA: return _mm_shuffle_ps(a, b, 0xBA);
		case 0xBB: return _mm_shuffle_ps(a, b, 0xBB);
		case 0xBC: return _mm_shuffle_ps(a, b, 0xBC);
		case 0xBD: return _mm_shuffle_ps(a, b, 0xBD);
		case 0xBE: return _mm_shuffle_ps(a, b, 0xBE);
		case 0xBF: return _mm_shuffle_ps(a, b, 0xBF);
		case 0xC0: return _mm_shuffle_ps(a, b, 0xC0);
		case 0xC1: return _mm_shuffle_ps(a, b, 0xC1);
		case 0xC2: return _mm_shuffle_ps(a, b, 0xC2);
		case 0xC3: return _mm_shuffle_ps(a, b, 0xC3);
		case 0xC4: return _mm_shuffle_ps(a, b, 0xC4);
		case 0xC5: return _mm_shuffle_ps(a, b, 0xC5);
		case 0xC6: return _mm_shuffle_ps(a, b, 0xC6);
		case 0xC7: return _mm_shuffle_ps(a, b, 0xC7);
		case 0xC8: return _mm_shuffle_ps(a, b, 0xC8);
		case 0xC9: return _mm_shuffle_ps(a, b, 0xC9);
		case 0xCA: return _mm_shuffle_ps(a, b, 0xCA);
		case 0xCB: return _mm_shuffle_ps(a, b, 0xCB);
		case 0xCC: return _mm_shuffle_ps(a, b, 0xCC);
		case 0xCD: return _mm_shuffle_ps(a, b, 0xCD);
		case 0xCE: return _mm_shuffle_ps(a, b, 0xCE);
		case 0xCF: return _mm_shuffle_ps(a, b, 0xCF);
		case 0xD0: return _mm_shuffle_ps(a, b, 0xD0);
		case 0xD1: return _mm_shuffle_ps(a, b, 0xD1);
		case 0xD2: return _mm_shuffle_ps(a, b, 0xD2);
		case 0xD3: return _mm_shuffle_ps(a, b, 0xD3);
		case 0xD4: return _mm_shuffle_ps(a, b, 0xD4);
		case 0xD5: return _mm_shuffle_ps(a, b, 0xD5);
		case 0xD6: return _mm_shuffle_ps(a, b, 0xD6);
		case 0xD7: return _mm_shuffle_ps(a, b, 0xD7);
		case 0xD8: return _mm_shuffle_ps(a, b, 0xD8);
		case 0xD9: return _mm_shuffle_ps(a, b, 0xD9);
		case 0xDA: return _mm_shuffle_ps(a, b, 0xDA);
		case 0xDB: return _mm_shuffle_ps(a, b, 0xDB);
		case 0xDC: return _mm_shuffle_ps(a, b, 0xDC);
		case 0xDD: return _mm_shuffle_ps(a, b, 0xDD);
		case 0xDE: return _mm_shuffle_ps(a, b, 0xDE);
		case 0xDF: return _mm_shuffle_ps(a, b, 0xDF);
		case 0xE0: return _mm_shuffle_ps(a, b, 0xE0);
		case 0xE1: return _mm_shuffle_ps(a, b, 0xE1);
		case 0xE2: return _mm_shuffle_ps(a, b, 0xE2);
		case 0xE3: return _mm_shuffle_ps(a, b, 0xE3);
		case 0xE4: return _mm_shuffle_ps(a, b, 0xE4);
		case 0xE5: return _mm_shuffle_ps(a, b, 0xE5);
		case 0xE6: return _mm_shuffle_ps(a, b, 0xE6);
		case 0xE7: return _mm_shuffle_ps(a, b, 0xE7);
		case 0xE8: return _mm_shuffle_ps(a, b, 0xE8);
		case 0xE9: return _mm_shuffle_ps(a, b, 0xE9);
		case 0xEA: return _mm_shuffle_ps(a, b, 0xEA);
		case 0xEB: return _mm_shuffle_ps(a, b, 0xEB);
		case 0xEC: return _mm_shuffle_ps(a, b, 0xEC);
		case 0xED: return _mm_shuffle_ps(a, b, 0xED);
		case 0xEE: return _mm_shuffle_ps(a, b, 0xEE);
		case 0xEF: return _mm_shuffle_ps(a, b, 0xEF);
		case 0xF0: return _mm_shuffle_ps(a, b, 0xF0);
		case 0xF1: return _mm_shuffle_ps(a, b, 0xF1);
		case 0xF2: return _mm_shuffle_ps(a, b, 0xF2);
		case 0xF3: return _mm_shuffle_ps(a, b, 0xF3);
		case 0xF4: return _mm_shuffle_ps(a, b, 0xF4);
		case 0xF5: return _mm_shuffle_ps(a, b, 0xF5);
		case 0xF6: return _mm_shuffle_ps(a, b, 0xF6);
		case 0xF7: return _mm_shuffle_ps(a, b, 0xF7);
		case 0xF8: return _mm_shuffle_ps(a, b, 0xF8);
		case 0xF9: return _mm_shuffle_ps(a, b, 0xF9);
		case 0xFA: return _mm_shuffle_ps(a, b, 0xFA);
		case 0xFB: return _mm_shuffle_ps(a, b, 0xFB);
		case 0xFC: return _mm_shuffle_ps(a, b, 0xFC);
		case 0xFD: return _mm_shuffle_ps(a, b, 0xFD);
		case 0xFE: return _mm_shuffle_ps(a, b, 0xFE);
		default:   return _mm_shuffle_ps(a, b, 0xFF);
	}
}

__m128 sse_sqrt_ps(__m128 a) { return _mm_sqrt_ps(a); }

__m128 sse_sqrt_ss(__m128 a) { return _mm_sqrt_ss(a); }

void sse_store_ps(float* mem_addr, __m128 a) { return _mm_store_ps(mem_addr, a); }

void sse_store_ps1(float* mem_addr, __m128 a) { return _mm_store_ps1(mem_addr, a); }

void sse_store_ss(float* mem_addr, __m128 a) { return _mm_store_ss(mem_addr, a); }

void sse_store1_ps(float* mem_addr, __m128 a) { return _mm_store1_ps(mem_addr, a); }

void sse_storer_ps(float* mem_addr, __m128 a) { return _mm_storer_ps(mem_addr, a); }

void sse_storeu_ps(float* mem_addr, __m128 a) { return _mm_storeu_ps(mem_addr, a); }

void sse_storeu_si16(void* mem_addr, __m128i a) { return _mm_storeu_si16(mem_addr, a); }

void sse_storeu_si64(void* mem_addr, __m128i a) { return _mm_storeu_si16(mem_addr, a); }

void sse_stream_ps(float* mem_addr, __m128 a) { return _mm_stream_ps(mem_addr, a); }

__m128 sse_sub_ps(__m128 a, __m128 b) { return _mm_sub_ps(a, b); }

__m128 sse_sub_ss(__m128 a, __m128 b) { return _mm_sub_ss(a, b); }

int sse_ucomieq_ss(__m128 a, __m128 b) { return _mm_ucomieq_ss(a, b); }

int sse_ucomige_ss(__m128 a, __m128 b) { return _mm_ucomige_ss(a, b); }

int sse_ucomigt_ss(__m128 a, __m128 b) { return _mm_ucomigt_ss(a, b); }

int sse_ucomile_ss(__m128 a, __m128 b) { return _mm_ucomile_ss(a, b); }

int sse_ucomilt_ss(__m128 a, __m128 b) { return _mm_ucomilt_ss(a, b); }

int sse_ucomineq_ss(__m128 a, __m128 b) { return _mm_ucomineq_ss(a, b); }

__m128 sse_undefined_ps() { return _mm_undefined_ps(); }

__m128 sse_unpackhi_ps(__m128 a, __m128 b) { return _mm_unpackhi_ps(a, b); }

__m128 sse_unpacklo_ps(__m128 a, __m128 b) { return _mm_unpacklo_ps(a, b); }

__m128 sse_xor_ps(__m128 a, __m128 b) { return _mm_xor_ps(a, b); }
