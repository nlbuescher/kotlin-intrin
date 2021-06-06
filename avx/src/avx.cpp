#include <immintrin.h>

#include "avx.h"

__m256d avx256_add_pd(__m256d a, __m256d b) { return _mm256_add_pd(a, b); }

__m256 avx256_add_ps(__m256 a, __m256 b) { return _mm256_add_ps(a, b); }

__m256d avx256_addsub_pd(__m256d a, __m256d b) { return _mm256_addsub_pd(a, b); }

__m256 avx256_addsub_ps(__m256 a, __m256 b) { return _mm256_addsub_ps(a, b); }

__m256d avx256_and_pd(__m256d a, __m256d b) { return _mm256_and_pd(a, b); }

__m256 avx256_and_ps(__m256 a, __m256 b) { return _mm256_and_ps(a, b); }

__m256d avx256_andnot_pd(__m256d a, __m256d b) { return _mm256_andnot_pd(a, b); }

__m256 avx256_andnot_ps(__m256 a, __m256 b) { return _mm256_andnot_ps(a, b); }

__m256d avx256_blend_pd(__m256d a, __m256d b, const int imm8) {
	switch (imm8 & 0xF) {
		case  0: return _mm256_blend_pd(a, b,  0);
		case  1: return _mm256_blend_pd(a, b,  1);
		case  2: return _mm256_blend_pd(a, b,  2);
		case  3: return _mm256_blend_pd(a, b,  3);
		case  4: return _mm256_blend_pd(a, b,  4);
		case  5: return _mm256_blend_pd(a, b,  5);
		case  6: return _mm256_blend_pd(a, b,  6);
		case  7: return _mm256_blend_pd(a, b,  7);
		case  8: return _mm256_blend_pd(a, b,  8);
		case  9: return _mm256_blend_pd(a, b,  9);
		case 10: return _mm256_blend_pd(a, b, 10);
		case 11: return _mm256_blend_pd(a, b, 11);
		case 12: return _mm256_blend_pd(a, b, 12);
		case 13: return _mm256_blend_pd(a, b, 13);
		case 14: return _mm256_blend_pd(a, b, 14);
		default: return _mm256_blend_pd(a, b, 15);
	}
}

__m256 avx256_blend_ps(__m256 a, __m256 b, const int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_blend_ps(a, b, 0x00);
		case 0x01: return _mm256_blend_ps(a, b, 0x01);
		case 0x02: return _mm256_blend_ps(a, b, 0x02);
		case 0x03: return _mm256_blend_ps(a, b, 0x03);
		case 0x04: return _mm256_blend_ps(a, b, 0x04);
		case 0x05: return _mm256_blend_ps(a, b, 0x05);
		case 0x06: return _mm256_blend_ps(a, b, 0x06);
		case 0x07: return _mm256_blend_ps(a, b, 0x07);
		case 0x08: return _mm256_blend_ps(a, b, 0x08);
		case 0x09: return _mm256_blend_ps(a, b, 0x09);
		case 0x0A: return _mm256_blend_ps(a, b, 0x0A);
		case 0x0B: return _mm256_blend_ps(a, b, 0x0B);
		case 0x0C: return _mm256_blend_ps(a, b, 0x0C);
		case 0x0D: return _mm256_blend_ps(a, b, 0x0D);
		case 0x0E: return _mm256_blend_ps(a, b, 0x0E);
		case 0x0F: return _mm256_blend_ps(a, b, 0x0F);
		case 0x10: return _mm256_blend_ps(a, b, 0x10);
		case 0x11: return _mm256_blend_ps(a, b, 0x11);
		case 0x12: return _mm256_blend_ps(a, b, 0x12);
		case 0x13: return _mm256_blend_ps(a, b, 0x13);
		case 0x14: return _mm256_blend_ps(a, b, 0x14);
		case 0x15: return _mm256_blend_ps(a, b, 0x15);
		case 0x16: return _mm256_blend_ps(a, b, 0x16);
		case 0x17: return _mm256_blend_ps(a, b, 0x17);
		case 0x18: return _mm256_blend_ps(a, b, 0x18);
		case 0x19: return _mm256_blend_ps(a, b, 0x19);
		case 0x1A: return _mm256_blend_ps(a, b, 0x1A);
		case 0x1B: return _mm256_blend_ps(a, b, 0x1B);
		case 0x1C: return _mm256_blend_ps(a, b, 0x1C);
		case 0x1D: return _mm256_blend_ps(a, b, 0x1D);
		case 0x1E: return _mm256_blend_ps(a, b, 0x1E);
		case 0x1F: return _mm256_blend_ps(a, b, 0x1F);
		case 0x20: return _mm256_blend_ps(a, b, 0x20);
		case 0x21: return _mm256_blend_ps(a, b, 0x21);
		case 0x22: return _mm256_blend_ps(a, b, 0x22);
		case 0x23: return _mm256_blend_ps(a, b, 0x23);
		case 0x24: return _mm256_blend_ps(a, b, 0x24);
		case 0x25: return _mm256_blend_ps(a, b, 0x25);
		case 0x26: return _mm256_blend_ps(a, b, 0x26);
		case 0x27: return _mm256_blend_ps(a, b, 0x27);
		case 0x28: return _mm256_blend_ps(a, b, 0x28);
		case 0x29: return _mm256_blend_ps(a, b, 0x29);
		case 0x2A: return _mm256_blend_ps(a, b, 0x2A);
		case 0x2B: return _mm256_blend_ps(a, b, 0x2B);
		case 0x2C: return _mm256_blend_ps(a, b, 0x2C);
		case 0x2D: return _mm256_blend_ps(a, b, 0x2D);
		case 0x2E: return _mm256_blend_ps(a, b, 0x2E);
		case 0x2F: return _mm256_blend_ps(a, b, 0x2F);
		case 0x30: return _mm256_blend_ps(a, b, 0x30);
		case 0x31: return _mm256_blend_ps(a, b, 0x31);
		case 0x32: return _mm256_blend_ps(a, b, 0x32);
		case 0x33: return _mm256_blend_ps(a, b, 0x33);
		case 0x34: return _mm256_blend_ps(a, b, 0x34);
		case 0x35: return _mm256_blend_ps(a, b, 0x35);
		case 0x36: return _mm256_blend_ps(a, b, 0x36);
		case 0x37: return _mm256_blend_ps(a, b, 0x37);
		case 0x38: return _mm256_blend_ps(a, b, 0x38);
		case 0x39: return _mm256_blend_ps(a, b, 0x39);
		case 0x3A: return _mm256_blend_ps(a, b, 0x3A);
		case 0x3B: return _mm256_blend_ps(a, b, 0x3B);
		case 0x3C: return _mm256_blend_ps(a, b, 0x3C);
		case 0x3D: return _mm256_blend_ps(a, b, 0x3D);
		case 0x3E: return _mm256_blend_ps(a, b, 0x3E);
		case 0x3F: return _mm256_blend_ps(a, b, 0x3F);
		case 0x40: return _mm256_blend_ps(a, b, 0x40);
		case 0x41: return _mm256_blend_ps(a, b, 0x41);
		case 0x42: return _mm256_blend_ps(a, b, 0x42);
		case 0x43: return _mm256_blend_ps(a, b, 0x43);
		case 0x44: return _mm256_blend_ps(a, b, 0x44);
		case 0x45: return _mm256_blend_ps(a, b, 0x45);
		case 0x46: return _mm256_blend_ps(a, b, 0x46);
		case 0x47: return _mm256_blend_ps(a, b, 0x47);
		case 0x48: return _mm256_blend_ps(a, b, 0x48);
		case 0x49: return _mm256_blend_ps(a, b, 0x49);
		case 0x4A: return _mm256_blend_ps(a, b, 0x4A);
		case 0x4B: return _mm256_blend_ps(a, b, 0x4B);
		case 0x4C: return _mm256_blend_ps(a, b, 0x4C);
		case 0x4D: return _mm256_blend_ps(a, b, 0x4D);
		case 0x4E: return _mm256_blend_ps(a, b, 0x4E);
		case 0x4F: return _mm256_blend_ps(a, b, 0x4F);
		case 0x50: return _mm256_blend_ps(a, b, 0x50);
		case 0x51: return _mm256_blend_ps(a, b, 0x51);
		case 0x52: return _mm256_blend_ps(a, b, 0x52);
		case 0x53: return _mm256_blend_ps(a, b, 0x53);
		case 0x54: return _mm256_blend_ps(a, b, 0x54);
		case 0x55: return _mm256_blend_ps(a, b, 0x55);
		case 0x56: return _mm256_blend_ps(a, b, 0x56);
		case 0x57: return _mm256_blend_ps(a, b, 0x57);
		case 0x58: return _mm256_blend_ps(a, b, 0x58);
		case 0x59: return _mm256_blend_ps(a, b, 0x59);
		case 0x5A: return _mm256_blend_ps(a, b, 0x5A);
		case 0x5B: return _mm256_blend_ps(a, b, 0x5B);
		case 0x5C: return _mm256_blend_ps(a, b, 0x5C);
		case 0x5D: return _mm256_blend_ps(a, b, 0x5D);
		case 0x5E: return _mm256_blend_ps(a, b, 0x5E);
		case 0x5F: return _mm256_blend_ps(a, b, 0x5F);
		case 0x60: return _mm256_blend_ps(a, b, 0x60);
		case 0x61: return _mm256_blend_ps(a, b, 0x61);
		case 0x62: return _mm256_blend_ps(a, b, 0x62);
		case 0x63: return _mm256_blend_ps(a, b, 0x63);
		case 0x64: return _mm256_blend_ps(a, b, 0x64);
		case 0x65: return _mm256_blend_ps(a, b, 0x65);
		case 0x66: return _mm256_blend_ps(a, b, 0x66);
		case 0x67: return _mm256_blend_ps(a, b, 0x67);
		case 0x68: return _mm256_blend_ps(a, b, 0x68);
		case 0x69: return _mm256_blend_ps(a, b, 0x69);
		case 0x6A: return _mm256_blend_ps(a, b, 0x6A);
		case 0x6B: return _mm256_blend_ps(a, b, 0x6B);
		case 0x6C: return _mm256_blend_ps(a, b, 0x6C);
		case 0x6D: return _mm256_blend_ps(a, b, 0x6D);
		case 0x6E: return _mm256_blend_ps(a, b, 0x6E);
		case 0x6F: return _mm256_blend_ps(a, b, 0x6F);
		case 0x70: return _mm256_blend_ps(a, b, 0x70);
		case 0x71: return _mm256_blend_ps(a, b, 0x71);
		case 0x72: return _mm256_blend_ps(a, b, 0x72);
		case 0x73: return _mm256_blend_ps(a, b, 0x73);
		case 0x74: return _mm256_blend_ps(a, b, 0x74);
		case 0x75: return _mm256_blend_ps(a, b, 0x75);
		case 0x76: return _mm256_blend_ps(a, b, 0x76);
		case 0x77: return _mm256_blend_ps(a, b, 0x77);
		case 0x78: return _mm256_blend_ps(a, b, 0x78);
		case 0x79: return _mm256_blend_ps(a, b, 0x79);
		case 0x7A: return _mm256_blend_ps(a, b, 0x7A);
		case 0x7B: return _mm256_blend_ps(a, b, 0x7B);
		case 0x7C: return _mm256_blend_ps(a, b, 0x7C);
		case 0x7D: return _mm256_blend_ps(a, b, 0x7D);
		case 0x7E: return _mm256_blend_ps(a, b, 0x7E);
		case 0x7F: return _mm256_blend_ps(a, b, 0x7F);
		case 0x80: return _mm256_blend_ps(a, b, 0x80);
		case 0x81: return _mm256_blend_ps(a, b, 0x81);
		case 0x82: return _mm256_blend_ps(a, b, 0x82);
		case 0x83: return _mm256_blend_ps(a, b, 0x83);
		case 0x84: return _mm256_blend_ps(a, b, 0x84);
		case 0x85: return _mm256_blend_ps(a, b, 0x85);
		case 0x86: return _mm256_blend_ps(a, b, 0x86);
		case 0x87: return _mm256_blend_ps(a, b, 0x87);
		case 0x88: return _mm256_blend_ps(a, b, 0x88);
		case 0x89: return _mm256_blend_ps(a, b, 0x89);
		case 0x8A: return _mm256_blend_ps(a, b, 0x8A);
		case 0x8B: return _mm256_blend_ps(a, b, 0x8B);
		case 0x8C: return _mm256_blend_ps(a, b, 0x8C);
		case 0x8D: return _mm256_blend_ps(a, b, 0x8D);
		case 0x8E: return _mm256_blend_ps(a, b, 0x8E);
		case 0x8F: return _mm256_blend_ps(a, b, 0x8F);
		case 0x90: return _mm256_blend_ps(a, b, 0x90);
		case 0x91: return _mm256_blend_ps(a, b, 0x91);
		case 0x92: return _mm256_blend_ps(a, b, 0x92);
		case 0x93: return _mm256_blend_ps(a, b, 0x93);
		case 0x94: return _mm256_blend_ps(a, b, 0x94);
		case 0x95: return _mm256_blend_ps(a, b, 0x95);
		case 0x96: return _mm256_blend_ps(a, b, 0x96);
		case 0x97: return _mm256_blend_ps(a, b, 0x97);
		case 0x98: return _mm256_blend_ps(a, b, 0x98);
		case 0x99: return _mm256_blend_ps(a, b, 0x99);
		case 0x9A: return _mm256_blend_ps(a, b, 0x9A);
		case 0x9B: return _mm256_blend_ps(a, b, 0x9B);
		case 0x9C: return _mm256_blend_ps(a, b, 0x9C);
		case 0x9D: return _mm256_blend_ps(a, b, 0x9D);
		case 0x9E: return _mm256_blend_ps(a, b, 0x9E);
		case 0x9F: return _mm256_blend_ps(a, b, 0x9F);
		case 0xA0: return _mm256_blend_ps(a, b, 0xA0);
		case 0xA1: return _mm256_blend_ps(a, b, 0xA1);
		case 0xA2: return _mm256_blend_ps(a, b, 0xA2);
		case 0xA3: return _mm256_blend_ps(a, b, 0xA3);
		case 0xA4: return _mm256_blend_ps(a, b, 0xA4);
		case 0xA5: return _mm256_blend_ps(a, b, 0xA5);
		case 0xA6: return _mm256_blend_ps(a, b, 0xA6);
		case 0xA7: return _mm256_blend_ps(a, b, 0xA7);
		case 0xA8: return _mm256_blend_ps(a, b, 0xA8);
		case 0xA9: return _mm256_blend_ps(a, b, 0xA9);
		case 0xAA: return _mm256_blend_ps(a, b, 0xAA);
		case 0xAB: return _mm256_blend_ps(a, b, 0xAB);
		case 0xAC: return _mm256_blend_ps(a, b, 0xAC);
		case 0xAD: return _mm256_blend_ps(a, b, 0xAD);
		case 0xAE: return _mm256_blend_ps(a, b, 0xAE);
		case 0xAF: return _mm256_blend_ps(a, b, 0xAF);
		case 0xB0: return _mm256_blend_ps(a, b, 0xB0);
		case 0xB1: return _mm256_blend_ps(a, b, 0xB1);
		case 0xB2: return _mm256_blend_ps(a, b, 0xB2);
		case 0xB3: return _mm256_blend_ps(a, b, 0xB3);
		case 0xB4: return _mm256_blend_ps(a, b, 0xB4);
		case 0xB5: return _mm256_blend_ps(a, b, 0xB5);
		case 0xB6: return _mm256_blend_ps(a, b, 0xB6);
		case 0xB7: return _mm256_blend_ps(a, b, 0xB7);
		case 0xB8: return _mm256_blend_ps(a, b, 0xB8);
		case 0xB9: return _mm256_blend_ps(a, b, 0xB9);
		case 0xBA: return _mm256_blend_ps(a, b, 0xBA);
		case 0xBB: return _mm256_blend_ps(a, b, 0xBB);
		case 0xBC: return _mm256_blend_ps(a, b, 0xBC);
		case 0xBD: return _mm256_blend_ps(a, b, 0xBD);
		case 0xBE: return _mm256_blend_ps(a, b, 0xBE);
		case 0xBF: return _mm256_blend_ps(a, b, 0xBF);
		case 0xC0: return _mm256_blend_ps(a, b, 0xC0);
		case 0xC1: return _mm256_blend_ps(a, b, 0xC1);
		case 0xC2: return _mm256_blend_ps(a, b, 0xC2);
		case 0xC3: return _mm256_blend_ps(a, b, 0xC3);
		case 0xC4: return _mm256_blend_ps(a, b, 0xC4);
		case 0xC5: return _mm256_blend_ps(a, b, 0xC5);
		case 0xC6: return _mm256_blend_ps(a, b, 0xC6);
		case 0xC7: return _mm256_blend_ps(a, b, 0xC7);
		case 0xC8: return _mm256_blend_ps(a, b, 0xC8);
		case 0xC9: return _mm256_blend_ps(a, b, 0xC9);
		case 0xCA: return _mm256_blend_ps(a, b, 0xCA);
		case 0xCB: return _mm256_blend_ps(a, b, 0xCB);
		case 0xCC: return _mm256_blend_ps(a, b, 0xCC);
		case 0xCD: return _mm256_blend_ps(a, b, 0xCD);
		case 0xCE: return _mm256_blend_ps(a, b, 0xCE);
		case 0xCF: return _mm256_blend_ps(a, b, 0xCF);
		case 0xD0: return _mm256_blend_ps(a, b, 0xD0);
		case 0xD1: return _mm256_blend_ps(a, b, 0xD1);
		case 0xD2: return _mm256_blend_ps(a, b, 0xD2);
		case 0xD3: return _mm256_blend_ps(a, b, 0xD3);
		case 0xD4: return _mm256_blend_ps(a, b, 0xD4);
		case 0xD5: return _mm256_blend_ps(a, b, 0xD5);
		case 0xD6: return _mm256_blend_ps(a, b, 0xD6);
		case 0xD7: return _mm256_blend_ps(a, b, 0xD7);
		case 0xD8: return _mm256_blend_ps(a, b, 0xD8);
		case 0xD9: return _mm256_blend_ps(a, b, 0xD9);
		case 0xDA: return _mm256_blend_ps(a, b, 0xDA);
		case 0xDB: return _mm256_blend_ps(a, b, 0xDB);
		case 0xDC: return _mm256_blend_ps(a, b, 0xDC);
		case 0xDD: return _mm256_blend_ps(a, b, 0xDD);
		case 0xDE: return _mm256_blend_ps(a, b, 0xDE);
		case 0xDF: return _mm256_blend_ps(a, b, 0xDF);
		case 0xE0: return _mm256_blend_ps(a, b, 0xE0);
		case 0xE1: return _mm256_blend_ps(a, b, 0xE1);
		case 0xE2: return _mm256_blend_ps(a, b, 0xE2);
		case 0xE3: return _mm256_blend_ps(a, b, 0xE3);
		case 0xE4: return _mm256_blend_ps(a, b, 0xE4);
		case 0xE5: return _mm256_blend_ps(a, b, 0xE5);
		case 0xE6: return _mm256_blend_ps(a, b, 0xE6);
		case 0xE7: return _mm256_blend_ps(a, b, 0xE7);
		case 0xE8: return _mm256_blend_ps(a, b, 0xE8);
		case 0xE9: return _mm256_blend_ps(a, b, 0xE9);
		case 0xEA: return _mm256_blend_ps(a, b, 0xEA);
		case 0xEB: return _mm256_blend_ps(a, b, 0xEB);
		case 0xEC: return _mm256_blend_ps(a, b, 0xEC);
		case 0xED: return _mm256_blend_ps(a, b, 0xED);
		case 0xEE: return _mm256_blend_ps(a, b, 0xEE);
		case 0xEF: return _mm256_blend_ps(a, b, 0xEF);
		case 0xF0: return _mm256_blend_ps(a, b, 0xF0);
		case 0xF1: return _mm256_blend_ps(a, b, 0xF1);
		case 0xF2: return _mm256_blend_ps(a, b, 0xF2);
		case 0xF3: return _mm256_blend_ps(a, b, 0xF3);
		case 0xF4: return _mm256_blend_ps(a, b, 0xF4);
		case 0xF5: return _mm256_blend_ps(a, b, 0xF5);
		case 0xF6: return _mm256_blend_ps(a, b, 0xF6);
		case 0xF7: return _mm256_blend_ps(a, b, 0xF7);
		case 0xF8: return _mm256_blend_ps(a, b, 0xF8);
		case 0xF9: return _mm256_blend_ps(a, b, 0xF9);
		case 0xFA: return _mm256_blend_ps(a, b, 0xFA);
		case 0xFB: return _mm256_blend_ps(a, b, 0xFB);
		case 0xFC: return _mm256_blend_ps(a, b, 0xFC);
		case 0xFD: return _mm256_blend_ps(a, b, 0xFD);
		case 0xFE: return _mm256_blend_ps(a, b, 0xFE);
		default:   return _mm256_blend_ps(a, b, 0xFF);
	}
}

__m256d avx256_blendv_pd(__m256d a, __m256d b, __m256d mask) { return _mm256_blendv_pd(a, b, mask); }

__m256 avx256_blendv_ps(__m256 a, __m256 b, __m256 mask) { return _mm256_blendv_ps(a, b, mask); }

__m256d avx256_broadcast_pd(const __m128d* mem_addr) { return _mm256_broadcast_pd(mem_addr); }

__m256 avx256_broadcast_ps(const __m128* mem_addr) { return _mm256_broadcast_ps(mem_addr); }

__m256d avx256_broadcast_sd(const double* mem_addr) { return _mm256_broadcast_sd(mem_addr); }

__m128 avx_broadcast_ss(const float* mem_addr) { return _mm_broadcast_ss(mem_addr); }

__m256 avx256_broadcast_ss(const float* mem_addr) { return _mm256_broadcast_ss(mem_addr); }

__m256 avx256_castpd_ps(__m256d a) { return _mm256_castpd_ps(a); }

__m256i avx256_castpd_si256(__m256d a) { return _mm256_castpd_si256(a); }

__m256d avx256_castpd128_pd256(__m128d a) { return _mm256_castpd128_pd256(a); }

__m128d avx_castpd256_pd128(__m256d a) { return _mm256_castpd256_pd128(a); }

__m256d avx256_castps_pd(__m256 a) { return _mm256_castps_pd(a); }

__m256i avx256_castps_si256(__m256 a) { return _mm256_castps_si256(a); }

__m256 avx256_castps128_ps256(__m128 a) { return _mm256_castps128_ps256(a); }

__m128 avx_castps256_ps128(__m256 a) { return _mm256_castps256_ps128(a); }

__m256i avx256_castsi128_si256(__m128i a) { return _mm256_castsi128_si256(a); }

__m256d avx256_castsi256_pd(__m256i a) { return _mm256_castsi256_pd(a); }

__m256 avx256_castsi256_ps(__m256i a) { return _mm256_castsi256_ps(a); }

__m128i avx_castsi256_si128(__m256i a) { return _mm256_castsi256_si128(a); }

__m256d avx256_ceil_pd(__m256d a) { return _mm256_ceil_pd(a); }

__m256 avx256_ceil_ps(__m256 a) { return _mm256_ceil_ps(a); }

__m128d avx_cmp_pd(__m128d a, __m128d b, const int imm8) {
	switch (imm8 & 0x1F) {
		case 0x00: return _mm_cmp_pd(a, b, 0x00);
		case 0x01: return _mm_cmp_pd(a, b, 0x01);
		case 0x02: return _mm_cmp_pd(a, b, 0x02);
		case 0x03: return _mm_cmp_pd(a, b, 0x03);
		case 0x04: return _mm_cmp_pd(a, b, 0x04);
		case 0x05: return _mm_cmp_pd(a, b, 0x05);
		case 0x06: return _mm_cmp_pd(a, b, 0x06);
		case 0x07: return _mm_cmp_pd(a, b, 0x07);
		case 0x08: return _mm_cmp_pd(a, b, 0x08);
		case 0x09: return _mm_cmp_pd(a, b, 0x09);
		case 0x0A: return _mm_cmp_pd(a, b, 0x0A);
		case 0x0B: return _mm_cmp_pd(a, b, 0x0B);
		case 0x0C: return _mm_cmp_pd(a, b, 0x0C);
		case 0x0D: return _mm_cmp_pd(a, b, 0x0D);
		case 0x0E: return _mm_cmp_pd(a, b, 0x0E);
		case 0x0F: return _mm_cmp_pd(a, b, 0x0F);
		case 0x10: return _mm_cmp_pd(a, b, 0x10);
		case 0x11: return _mm_cmp_pd(a, b, 0x11);
		case 0x12: return _mm_cmp_pd(a, b, 0x12);
		case 0x13: return _mm_cmp_pd(a, b, 0x13);
		case 0x14: return _mm_cmp_pd(a, b, 0x14);
		case 0x15: return _mm_cmp_pd(a, b, 0x15);
		case 0x16: return _mm_cmp_pd(a, b, 0x16);
		case 0x17: return _mm_cmp_pd(a, b, 0x17);
		case 0x18: return _mm_cmp_pd(a, b, 0x18);
		case 0x19: return _mm_cmp_pd(a, b, 0x19);
		case 0x1A: return _mm_cmp_pd(a, b, 0x1A);
		case 0x1B: return _mm_cmp_pd(a, b, 0x1B);
		case 0x1C: return _mm_cmp_pd(a, b, 0x1C);
		case 0x1D: return _mm_cmp_pd(a, b, 0x1D);
		case 0x1E: return _mm_cmp_pd(a, b, 0x1E);
		default:   return _mm_cmp_pd(a, b, 0x1F);
	}
}

__m256d avx256_cmp_pd(__m256d a, __m256d b, const int imm8) {
	switch (imm8 & 0x1F) {
		case 0x00: return _mm256_cmp_pd(a, b, 0x00);
		case 0x01: return _mm256_cmp_pd(a, b, 0x01);
		case 0x02: return _mm256_cmp_pd(a, b, 0x02);
		case 0x03: return _mm256_cmp_pd(a, b, 0x03);
		case 0x04: return _mm256_cmp_pd(a, b, 0x04);
		case 0x05: return _mm256_cmp_pd(a, b, 0x05);
		case 0x06: return _mm256_cmp_pd(a, b, 0x06);
		case 0x07: return _mm256_cmp_pd(a, b, 0x07);
		case 0x08: return _mm256_cmp_pd(a, b, 0x08);
		case 0x09: return _mm256_cmp_pd(a, b, 0x09);
		case 0x0A: return _mm256_cmp_pd(a, b, 0x0A);
		case 0x0B: return _mm256_cmp_pd(a, b, 0x0B);
		case 0x0C: return _mm256_cmp_pd(a, b, 0x0C);
		case 0x0D: return _mm256_cmp_pd(a, b, 0x0D);
		case 0x0E: return _mm256_cmp_pd(a, b, 0x0E);
		case 0x0F: return _mm256_cmp_pd(a, b, 0x0F);
		case 0x10: return _mm256_cmp_pd(a, b, 0x10);
		case 0x11: return _mm256_cmp_pd(a, b, 0x11);
		case 0x12: return _mm256_cmp_pd(a, b, 0x12);
		case 0x13: return _mm256_cmp_pd(a, b, 0x13);
		case 0x14: return _mm256_cmp_pd(a, b, 0x14);
		case 0x15: return _mm256_cmp_pd(a, b, 0x15);
		case 0x16: return _mm256_cmp_pd(a, b, 0x16);
		case 0x17: return _mm256_cmp_pd(a, b, 0x17);
		case 0x18: return _mm256_cmp_pd(a, b, 0x18);
		case 0x19: return _mm256_cmp_pd(a, b, 0x19);
		case 0x1A: return _mm256_cmp_pd(a, b, 0x1A);
		case 0x1B: return _mm256_cmp_pd(a, b, 0x1B);
		case 0x1C: return _mm256_cmp_pd(a, b, 0x1C);
		case 0x1D: return _mm256_cmp_pd(a, b, 0x1D);
		case 0x1E: return _mm256_cmp_pd(a, b, 0x1E);
		default:   return _mm256_cmp_pd(a, b, 0x1F);
	}
}

__m128 avx_cmp_ps(__m128 a, __m128 b, const int imm8) {
	switch (imm8 & 0x1F) {
		case 0x00: return _mm_cmp_ps(a, b, 0x00);
		case 0x01: return _mm_cmp_ps(a, b, 0x01);
		case 0x02: return _mm_cmp_ps(a, b, 0x02);
		case 0x03: return _mm_cmp_ps(a, b, 0x03);
		case 0x04: return _mm_cmp_ps(a, b, 0x04);
		case 0x05: return _mm_cmp_ps(a, b, 0x05);
		case 0x06: return _mm_cmp_ps(a, b, 0x06);
		case 0x07: return _mm_cmp_ps(a, b, 0x07);
		case 0x08: return _mm_cmp_ps(a, b, 0x08);
		case 0x09: return _mm_cmp_ps(a, b, 0x09);
		case 0x0A: return _mm_cmp_ps(a, b, 0x0A);
		case 0x0B: return _mm_cmp_ps(a, b, 0x0B);
		case 0x0C: return _mm_cmp_ps(a, b, 0x0C);
		case 0x0D: return _mm_cmp_ps(a, b, 0x0D);
		case 0x0E: return _mm_cmp_ps(a, b, 0x0E);
		case 0x0F: return _mm_cmp_ps(a, b, 0x0F);
		case 0x10: return _mm_cmp_ps(a, b, 0x10);
		case 0x11: return _mm_cmp_ps(a, b, 0x11);
		case 0x12: return _mm_cmp_ps(a, b, 0x12);
		case 0x13: return _mm_cmp_ps(a, b, 0x13);
		case 0x14: return _mm_cmp_ps(a, b, 0x14);
		case 0x15: return _mm_cmp_ps(a, b, 0x15);
		case 0x16: return _mm_cmp_ps(a, b, 0x16);
		case 0x17: return _mm_cmp_ps(a, b, 0x17);
		case 0x18: return _mm_cmp_ps(a, b, 0x18);
		case 0x19: return _mm_cmp_ps(a, b, 0x19);
		case 0x1A: return _mm_cmp_ps(a, b, 0x1A);
		case 0x1B: return _mm_cmp_ps(a, b, 0x1B);
		case 0x1C: return _mm_cmp_ps(a, b, 0x1C);
		case 0x1D: return _mm_cmp_ps(a, b, 0x1D);
		case 0x1E: return _mm_cmp_ps(a, b, 0x1E);
		default:   return _mm_cmp_ps(a, b, 0x1F);
	}
}

__m256 avx256_cmp_ps(__m256 a, __m256 b, const int imm8) {
	switch (imm8 & 0x1F) {
		case 0x00: return _mm256_cmp_ps(a, b, 0x00);
		case 0x01: return _mm256_cmp_ps(a, b, 0x01);
		case 0x02: return _mm256_cmp_ps(a, b, 0x02);
		case 0x03: return _mm256_cmp_ps(a, b, 0x03);
		case 0x04: return _mm256_cmp_ps(a, b, 0x04);
		case 0x05: return _mm256_cmp_ps(a, b, 0x05);
		case 0x06: return _mm256_cmp_ps(a, b, 0x06);
		case 0x07: return _mm256_cmp_ps(a, b, 0x07);
		case 0x08: return _mm256_cmp_ps(a, b, 0x08);
		case 0x09: return _mm256_cmp_ps(a, b, 0x09);
		case 0x0A: return _mm256_cmp_ps(a, b, 0x0A);
		case 0x0B: return _mm256_cmp_ps(a, b, 0x0B);
		case 0x0C: return _mm256_cmp_ps(a, b, 0x0C);
		case 0x0D: return _mm256_cmp_ps(a, b, 0x0D);
		case 0x0E: return _mm256_cmp_ps(a, b, 0x0E);
		case 0x0F: return _mm256_cmp_ps(a, b, 0x0F);
		case 0x10: return _mm256_cmp_ps(a, b, 0x10);
		case 0x11: return _mm256_cmp_ps(a, b, 0x11);
		case 0x12: return _mm256_cmp_ps(a, b, 0x12);
		case 0x13: return _mm256_cmp_ps(a, b, 0x13);
		case 0x14: return _mm256_cmp_ps(a, b, 0x14);
		case 0x15: return _mm256_cmp_ps(a, b, 0x15);
		case 0x16: return _mm256_cmp_ps(a, b, 0x16);
		case 0x17: return _mm256_cmp_ps(a, b, 0x17);
		case 0x18: return _mm256_cmp_ps(a, b, 0x18);
		case 0x19: return _mm256_cmp_ps(a, b, 0x19);
		case 0x1A: return _mm256_cmp_ps(a, b, 0x1A);
		case 0x1B: return _mm256_cmp_ps(a, b, 0x1B);
		case 0x1C: return _mm256_cmp_ps(a, b, 0x1C);
		case 0x1D: return _mm256_cmp_ps(a, b, 0x1D);
		case 0x1E: return _mm256_cmp_ps(a, b, 0x1E);
		default:   return _mm256_cmp_ps(a, b, 0x1F);
	}
}

__m128d avx_cmp_sd(__m128d a, __m128d b, const int imm8) {
	switch (imm8 & 0x1F) {
		case 0x00: return _mm_cmp_sd(a, b, 0x00);
		case 0x01: return _mm_cmp_sd(a, b, 0x01);
		case 0x02: return _mm_cmp_sd(a, b, 0x02);
		case 0x03: return _mm_cmp_sd(a, b, 0x03);
		case 0x04: return _mm_cmp_sd(a, b, 0x04);
		case 0x05: return _mm_cmp_sd(a, b, 0x05);
		case 0x06: return _mm_cmp_sd(a, b, 0x06);
		case 0x07: return _mm_cmp_sd(a, b, 0x07);
		case 0x08: return _mm_cmp_sd(a, b, 0x08);
		case 0x09: return _mm_cmp_sd(a, b, 0x09);
		case 0x0A: return _mm_cmp_sd(a, b, 0x0A);
		case 0x0B: return _mm_cmp_sd(a, b, 0x0B);
		case 0x0C: return _mm_cmp_sd(a, b, 0x0C);
		case 0x0D: return _mm_cmp_sd(a, b, 0x0D);
		case 0x0E: return _mm_cmp_sd(a, b, 0x0E);
		case 0x0F: return _mm_cmp_sd(a, b, 0x0F);
		case 0x10: return _mm_cmp_sd(a, b, 0x10);
		case 0x11: return _mm_cmp_sd(a, b, 0x11);
		case 0x12: return _mm_cmp_sd(a, b, 0x12);
		case 0x13: return _mm_cmp_sd(a, b, 0x13);
		case 0x14: return _mm_cmp_sd(a, b, 0x14);
		case 0x15: return _mm_cmp_sd(a, b, 0x15);
		case 0x16: return _mm_cmp_sd(a, b, 0x16);
		case 0x17: return _mm_cmp_sd(a, b, 0x17);
		case 0x18: return _mm_cmp_sd(a, b, 0x18);
		case 0x19: return _mm_cmp_sd(a, b, 0x19);
		case 0x1A: return _mm_cmp_sd(a, b, 0x1A);
		case 0x1B: return _mm_cmp_sd(a, b, 0x1B);
		case 0x1C: return _mm_cmp_sd(a, b, 0x1C);
		case 0x1D: return _mm_cmp_sd(a, b, 0x1D);
		case 0x1E: return _mm_cmp_sd(a, b, 0x1E);
		default:   return _mm_cmp_sd(a, b, 0x1F);
	}
}

__m128 avx_cmp_ss(__m128 a, __m128 b, const int imm8) {
	switch (imm8 & 0x1F) {
		case 0x00: return _mm_cmp_ss(a, b, 0x00);
		case 0x01: return _mm_cmp_ss(a, b, 0x01);
		case 0x02: return _mm_cmp_ss(a, b, 0x02);
		case 0x03: return _mm_cmp_ss(a, b, 0x03);
		case 0x04: return _mm_cmp_ss(a, b, 0x04);
		case 0x05: return _mm_cmp_ss(a, b, 0x05);
		case 0x06: return _mm_cmp_ss(a, b, 0x06);
		case 0x07: return _mm_cmp_ss(a, b, 0x07);
		case 0x08: return _mm_cmp_ss(a, b, 0x08);
		case 0x09: return _mm_cmp_ss(a, b, 0x09);
		case 0x0A: return _mm_cmp_ss(a, b, 0x0A);
		case 0x0B: return _mm_cmp_ss(a, b, 0x0B);
		case 0x0C: return _mm_cmp_ss(a, b, 0x0C);
		case 0x0D: return _mm_cmp_ss(a, b, 0x0D);
		case 0x0E: return _mm_cmp_ss(a, b, 0x0E);
		case 0x0F: return _mm_cmp_ss(a, b, 0x0F);
		case 0x10: return _mm_cmp_ss(a, b, 0x10);
		case 0x11: return _mm_cmp_ss(a, b, 0x11);
		case 0x12: return _mm_cmp_ss(a, b, 0x12);
		case 0x13: return _mm_cmp_ss(a, b, 0x13);
		case 0x14: return _mm_cmp_ss(a, b, 0x14);
		case 0x15: return _mm_cmp_ss(a, b, 0x15);
		case 0x16: return _mm_cmp_ss(a, b, 0x16);
		case 0x17: return _mm_cmp_ss(a, b, 0x17);
		case 0x18: return _mm_cmp_ss(a, b, 0x18);
		case 0x19: return _mm_cmp_ss(a, b, 0x19);
		case 0x1A: return _mm_cmp_ss(a, b, 0x1A);
		case 0x1B: return _mm_cmp_ss(a, b, 0x1B);
		case 0x1C: return _mm_cmp_ss(a, b, 0x1C);
		case 0x1D: return _mm_cmp_ss(a, b, 0x1D);
		case 0x1E: return _mm_cmp_ss(a, b, 0x1E);
		default:   return _mm_cmp_ss(a, b, 0x1F);
	}
}

__m256d avx256_cvtepi32_pd(__m128i a) { return _mm256_cvtepi32_pd(a); }

__m256 avx256_cvtepi32_ps(__m256i a) { return _mm256_cvtepi32_ps(a); }

__m128i avx_cvtpd_epi32(__m256d a) { return _mm256_cvtpd_epi32(a); }

__m128 avx_cvtpd_ps(__m256d a) { return _mm256_cvtpd_ps(a); }

__m256i avx256_cvtps_epi32(__m256 a) { return _mm256_cvtps_epi32(a); }

__m256d avx256_cvtps_pd(__m128 a) { return _mm256_cvtps_pd(a); }

double avx256_cvtsd_f64(__m256d a) { return _mm256_cvtsd_f64(a); }

int avx256_cvtsi256_si32(__m256i a) { return _mm256_cvtsi256_si32(a); }

float avx256_cvtss_f32(__m256 a) { return _mm256_cvtss_f32(a); }

__m128i avx_cvttpd_epi32(__m256d a) { return _mm256_cvttpd_epi32(a); }

__m256i avx256_cvttps_epi32(__m256 a) { return _mm256_cvttps_epi32(a); }

__m256d avx256_div_pd(__m256d a, __m256d b) { return _mm256_div_pd(a, b); }

__m256 avx256_div_ps(__m256 a, __m256 b) { return _mm256_div_ps(a, b); }

__m256 avx256_dp_ps(__m256 a, __m256 b, const int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_dp_ps(a, b, 0x00);
		case 0x01: return _mm256_dp_ps(a, b, 0x01);
		case 0x02: return _mm256_dp_ps(a, b, 0x02);
		case 0x03: return _mm256_dp_ps(a, b, 0x03);
		case 0x04: return _mm256_dp_ps(a, b, 0x04);
		case 0x05: return _mm256_dp_ps(a, b, 0x05);
		case 0x06: return _mm256_dp_ps(a, b, 0x06);
		case 0x07: return _mm256_dp_ps(a, b, 0x07);
		case 0x08: return _mm256_dp_ps(a, b, 0x08);
		case 0x09: return _mm256_dp_ps(a, b, 0x09);
		case 0x0A: return _mm256_dp_ps(a, b, 0x0A);
		case 0x0B: return _mm256_dp_ps(a, b, 0x0B);
		case 0x0C: return _mm256_dp_ps(a, b, 0x0C);
		case 0x0D: return _mm256_dp_ps(a, b, 0x0D);
		case 0x0E: return _mm256_dp_ps(a, b, 0x0E);
		case 0x0F: return _mm256_dp_ps(a, b, 0x0F);
		case 0x10: return _mm256_dp_ps(a, b, 0x10);
		case 0x11: return _mm256_dp_ps(a, b, 0x11);
		case 0x12: return _mm256_dp_ps(a, b, 0x12);
		case 0x13: return _mm256_dp_ps(a, b, 0x13);
		case 0x14: return _mm256_dp_ps(a, b, 0x14);
		case 0x15: return _mm256_dp_ps(a, b, 0x15);
		case 0x16: return _mm256_dp_ps(a, b, 0x16);
		case 0x17: return _mm256_dp_ps(a, b, 0x17);
		case 0x18: return _mm256_dp_ps(a, b, 0x18);
		case 0x19: return _mm256_dp_ps(a, b, 0x19);
		case 0x1A: return _mm256_dp_ps(a, b, 0x1A);
		case 0x1B: return _mm256_dp_ps(a, b, 0x1B);
		case 0x1C: return _mm256_dp_ps(a, b, 0x1C);
		case 0x1D: return _mm256_dp_ps(a, b, 0x1D);
		case 0x1E: return _mm256_dp_ps(a, b, 0x1E);
		case 0x1F: return _mm256_dp_ps(a, b, 0x1F);
		case 0x20: return _mm256_dp_ps(a, b, 0x20);
		case 0x21: return _mm256_dp_ps(a, b, 0x21);
		case 0x22: return _mm256_dp_ps(a, b, 0x22);
		case 0x23: return _mm256_dp_ps(a, b, 0x23);
		case 0x24: return _mm256_dp_ps(a, b, 0x24);
		case 0x25: return _mm256_dp_ps(a, b, 0x25);
		case 0x26: return _mm256_dp_ps(a, b, 0x26);
		case 0x27: return _mm256_dp_ps(a, b, 0x27);
		case 0x28: return _mm256_dp_ps(a, b, 0x28);
		case 0x29: return _mm256_dp_ps(a, b, 0x29);
		case 0x2A: return _mm256_dp_ps(a, b, 0x2A);
		case 0x2B: return _mm256_dp_ps(a, b, 0x2B);
		case 0x2C: return _mm256_dp_ps(a, b, 0x2C);
		case 0x2D: return _mm256_dp_ps(a, b, 0x2D);
		case 0x2E: return _mm256_dp_ps(a, b, 0x2E);
		case 0x2F: return _mm256_dp_ps(a, b, 0x2F);
		case 0x30: return _mm256_dp_ps(a, b, 0x30);
		case 0x31: return _mm256_dp_ps(a, b, 0x31);
		case 0x32: return _mm256_dp_ps(a, b, 0x32);
		case 0x33: return _mm256_dp_ps(a, b, 0x33);
		case 0x34: return _mm256_dp_ps(a, b, 0x34);
		case 0x35: return _mm256_dp_ps(a, b, 0x35);
		case 0x36: return _mm256_dp_ps(a, b, 0x36);
		case 0x37: return _mm256_dp_ps(a, b, 0x37);
		case 0x38: return _mm256_dp_ps(a, b, 0x38);
		case 0x39: return _mm256_dp_ps(a, b, 0x39);
		case 0x3A: return _mm256_dp_ps(a, b, 0x3A);
		case 0x3B: return _mm256_dp_ps(a, b, 0x3B);
		case 0x3C: return _mm256_dp_ps(a, b, 0x3C);
		case 0x3D: return _mm256_dp_ps(a, b, 0x3D);
		case 0x3E: return _mm256_dp_ps(a, b, 0x3E);
		case 0x3F: return _mm256_dp_ps(a, b, 0x3F);
		case 0x40: return _mm256_dp_ps(a, b, 0x40);
		case 0x41: return _mm256_dp_ps(a, b, 0x41);
		case 0x42: return _mm256_dp_ps(a, b, 0x42);
		case 0x43: return _mm256_dp_ps(a, b, 0x43);
		case 0x44: return _mm256_dp_ps(a, b, 0x44);
		case 0x45: return _mm256_dp_ps(a, b, 0x45);
		case 0x46: return _mm256_dp_ps(a, b, 0x46);
		case 0x47: return _mm256_dp_ps(a, b, 0x47);
		case 0x48: return _mm256_dp_ps(a, b, 0x48);
		case 0x49: return _mm256_dp_ps(a, b, 0x49);
		case 0x4A: return _mm256_dp_ps(a, b, 0x4A);
		case 0x4B: return _mm256_dp_ps(a, b, 0x4B);
		case 0x4C: return _mm256_dp_ps(a, b, 0x4C);
		case 0x4D: return _mm256_dp_ps(a, b, 0x4D);
		case 0x4E: return _mm256_dp_ps(a, b, 0x4E);
		case 0x4F: return _mm256_dp_ps(a, b, 0x4F);
		case 0x50: return _mm256_dp_ps(a, b, 0x50);
		case 0x51: return _mm256_dp_ps(a, b, 0x51);
		case 0x52: return _mm256_dp_ps(a, b, 0x52);
		case 0x53: return _mm256_dp_ps(a, b, 0x53);
		case 0x54: return _mm256_dp_ps(a, b, 0x54);
		case 0x55: return _mm256_dp_ps(a, b, 0x55);
		case 0x56: return _mm256_dp_ps(a, b, 0x56);
		case 0x57: return _mm256_dp_ps(a, b, 0x57);
		case 0x58: return _mm256_dp_ps(a, b, 0x58);
		case 0x59: return _mm256_dp_ps(a, b, 0x59);
		case 0x5A: return _mm256_dp_ps(a, b, 0x5A);
		case 0x5B: return _mm256_dp_ps(a, b, 0x5B);
		case 0x5C: return _mm256_dp_ps(a, b, 0x5C);
		case 0x5D: return _mm256_dp_ps(a, b, 0x5D);
		case 0x5E: return _mm256_dp_ps(a, b, 0x5E);
		case 0x5F: return _mm256_dp_ps(a, b, 0x5F);
		case 0x60: return _mm256_dp_ps(a, b, 0x60);
		case 0x61: return _mm256_dp_ps(a, b, 0x61);
		case 0x62: return _mm256_dp_ps(a, b, 0x62);
		case 0x63: return _mm256_dp_ps(a, b, 0x63);
		case 0x64: return _mm256_dp_ps(a, b, 0x64);
		case 0x65: return _mm256_dp_ps(a, b, 0x65);
		case 0x66: return _mm256_dp_ps(a, b, 0x66);
		case 0x67: return _mm256_dp_ps(a, b, 0x67);
		case 0x68: return _mm256_dp_ps(a, b, 0x68);
		case 0x69: return _mm256_dp_ps(a, b, 0x69);
		case 0x6A: return _mm256_dp_ps(a, b, 0x6A);
		case 0x6B: return _mm256_dp_ps(a, b, 0x6B);
		case 0x6C: return _mm256_dp_ps(a, b, 0x6C);
		case 0x6D: return _mm256_dp_ps(a, b, 0x6D);
		case 0x6E: return _mm256_dp_ps(a, b, 0x6E);
		case 0x6F: return _mm256_dp_ps(a, b, 0x6F);
		case 0x70: return _mm256_dp_ps(a, b, 0x70);
		case 0x71: return _mm256_dp_ps(a, b, 0x71);
		case 0x72: return _mm256_dp_ps(a, b, 0x72);
		case 0x73: return _mm256_dp_ps(a, b, 0x73);
		case 0x74: return _mm256_dp_ps(a, b, 0x74);
		case 0x75: return _mm256_dp_ps(a, b, 0x75);
		case 0x76: return _mm256_dp_ps(a, b, 0x76);
		case 0x77: return _mm256_dp_ps(a, b, 0x77);
		case 0x78: return _mm256_dp_ps(a, b, 0x78);
		case 0x79: return _mm256_dp_ps(a, b, 0x79);
		case 0x7A: return _mm256_dp_ps(a, b, 0x7A);
		case 0x7B: return _mm256_dp_ps(a, b, 0x7B);
		case 0x7C: return _mm256_dp_ps(a, b, 0x7C);
		case 0x7D: return _mm256_dp_ps(a, b, 0x7D);
		case 0x7E: return _mm256_dp_ps(a, b, 0x7E);
		case 0x7F: return _mm256_dp_ps(a, b, 0x7F);
		case 0x80: return _mm256_dp_ps(a, b, 0x80);
		case 0x81: return _mm256_dp_ps(a, b, 0x81);
		case 0x82: return _mm256_dp_ps(a, b, 0x82);
		case 0x83: return _mm256_dp_ps(a, b, 0x83);
		case 0x84: return _mm256_dp_ps(a, b, 0x84);
		case 0x85: return _mm256_dp_ps(a, b, 0x85);
		case 0x86: return _mm256_dp_ps(a, b, 0x86);
		case 0x87: return _mm256_dp_ps(a, b, 0x87);
		case 0x88: return _mm256_dp_ps(a, b, 0x88);
		case 0x89: return _mm256_dp_ps(a, b, 0x89);
		case 0x8A: return _mm256_dp_ps(a, b, 0x8A);
		case 0x8B: return _mm256_dp_ps(a, b, 0x8B);
		case 0x8C: return _mm256_dp_ps(a, b, 0x8C);
		case 0x8D: return _mm256_dp_ps(a, b, 0x8D);
		case 0x8E: return _mm256_dp_ps(a, b, 0x8E);
		case 0x8F: return _mm256_dp_ps(a, b, 0x8F);
		case 0x90: return _mm256_dp_ps(a, b, 0x90);
		case 0x91: return _mm256_dp_ps(a, b, 0x91);
		case 0x92: return _mm256_dp_ps(a, b, 0x92);
		case 0x93: return _mm256_dp_ps(a, b, 0x93);
		case 0x94: return _mm256_dp_ps(a, b, 0x94);
		case 0x95: return _mm256_dp_ps(a, b, 0x95);
		case 0x96: return _mm256_dp_ps(a, b, 0x96);
		case 0x97: return _mm256_dp_ps(a, b, 0x97);
		case 0x98: return _mm256_dp_ps(a, b, 0x98);
		case 0x99: return _mm256_dp_ps(a, b, 0x99);
		case 0x9A: return _mm256_dp_ps(a, b, 0x9A);
		case 0x9B: return _mm256_dp_ps(a, b, 0x9B);
		case 0x9C: return _mm256_dp_ps(a, b, 0x9C);
		case 0x9D: return _mm256_dp_ps(a, b, 0x9D);
		case 0x9E: return _mm256_dp_ps(a, b, 0x9E);
		case 0x9F: return _mm256_dp_ps(a, b, 0x9F);
		case 0xA0: return _mm256_dp_ps(a, b, 0xA0);
		case 0xA1: return _mm256_dp_ps(a, b, 0xA1);
		case 0xA2: return _mm256_dp_ps(a, b, 0xA2);
		case 0xA3: return _mm256_dp_ps(a, b, 0xA3);
		case 0xA4: return _mm256_dp_ps(a, b, 0xA4);
		case 0xA5: return _mm256_dp_ps(a, b, 0xA5);
		case 0xA6: return _mm256_dp_ps(a, b, 0xA6);
		case 0xA7: return _mm256_dp_ps(a, b, 0xA7);
		case 0xA8: return _mm256_dp_ps(a, b, 0xA8);
		case 0xA9: return _mm256_dp_ps(a, b, 0xA9);
		case 0xAA: return _mm256_dp_ps(a, b, 0xAA);
		case 0xAB: return _mm256_dp_ps(a, b, 0xAB);
		case 0xAC: return _mm256_dp_ps(a, b, 0xAC);
		case 0xAD: return _mm256_dp_ps(a, b, 0xAD);
		case 0xAE: return _mm256_dp_ps(a, b, 0xAE);
		case 0xAF: return _mm256_dp_ps(a, b, 0xAF);
		case 0xB0: return _mm256_dp_ps(a, b, 0xB0);
		case 0xB1: return _mm256_dp_ps(a, b, 0xB1);
		case 0xB2: return _mm256_dp_ps(a, b, 0xB2);
		case 0xB3: return _mm256_dp_ps(a, b, 0xB3);
		case 0xB4: return _mm256_dp_ps(a, b, 0xB4);
		case 0xB5: return _mm256_dp_ps(a, b, 0xB5);
		case 0xB6: return _mm256_dp_ps(a, b, 0xB6);
		case 0xB7: return _mm256_dp_ps(a, b, 0xB7);
		case 0xB8: return _mm256_dp_ps(a, b, 0xB8);
		case 0xB9: return _mm256_dp_ps(a, b, 0xB9);
		case 0xBA: return _mm256_dp_ps(a, b, 0xBA);
		case 0xBB: return _mm256_dp_ps(a, b, 0xBB);
		case 0xBC: return _mm256_dp_ps(a, b, 0xBC);
		case 0xBD: return _mm256_dp_ps(a, b, 0xBD);
		case 0xBE: return _mm256_dp_ps(a, b, 0xBE);
		case 0xBF: return _mm256_dp_ps(a, b, 0xBF);
		case 0xC0: return _mm256_dp_ps(a, b, 0xC0);
		case 0xC1: return _mm256_dp_ps(a, b, 0xC1);
		case 0xC2: return _mm256_dp_ps(a, b, 0xC2);
		case 0xC3: return _mm256_dp_ps(a, b, 0xC3);
		case 0xC4: return _mm256_dp_ps(a, b, 0xC4);
		case 0xC5: return _mm256_dp_ps(a, b, 0xC5);
		case 0xC6: return _mm256_dp_ps(a, b, 0xC6);
		case 0xC7: return _mm256_dp_ps(a, b, 0xC7);
		case 0xC8: return _mm256_dp_ps(a, b, 0xC8);
		case 0xC9: return _mm256_dp_ps(a, b, 0xC9);
		case 0xCA: return _mm256_dp_ps(a, b, 0xCA);
		case 0xCB: return _mm256_dp_ps(a, b, 0xCB);
		case 0xCC: return _mm256_dp_ps(a, b, 0xCC);
		case 0xCD: return _mm256_dp_ps(a, b, 0xCD);
		case 0xCE: return _mm256_dp_ps(a, b, 0xCE);
		case 0xCF: return _mm256_dp_ps(a, b, 0xCF);
		case 0xD0: return _mm256_dp_ps(a, b, 0xD0);
		case 0xD1: return _mm256_dp_ps(a, b, 0xD1);
		case 0xD2: return _mm256_dp_ps(a, b, 0xD2);
		case 0xD3: return _mm256_dp_ps(a, b, 0xD3);
		case 0xD4: return _mm256_dp_ps(a, b, 0xD4);
		case 0xD5: return _mm256_dp_ps(a, b, 0xD5);
		case 0xD6: return _mm256_dp_ps(a, b, 0xD6);
		case 0xD7: return _mm256_dp_ps(a, b, 0xD7);
		case 0xD8: return _mm256_dp_ps(a, b, 0xD8);
		case 0xD9: return _mm256_dp_ps(a, b, 0xD9);
		case 0xDA: return _mm256_dp_ps(a, b, 0xDA);
		case 0xDB: return _mm256_dp_ps(a, b, 0xDB);
		case 0xDC: return _mm256_dp_ps(a, b, 0xDC);
		case 0xDD: return _mm256_dp_ps(a, b, 0xDD);
		case 0xDE: return _mm256_dp_ps(a, b, 0xDE);
		case 0xDF: return _mm256_dp_ps(a, b, 0xDF);
		case 0xE0: return _mm256_dp_ps(a, b, 0xE0);
		case 0xE1: return _mm256_dp_ps(a, b, 0xE1);
		case 0xE2: return _mm256_dp_ps(a, b, 0xE2);
		case 0xE3: return _mm256_dp_ps(a, b, 0xE3);
		case 0xE4: return _mm256_dp_ps(a, b, 0xE4);
		case 0xE5: return _mm256_dp_ps(a, b, 0xE5);
		case 0xE6: return _mm256_dp_ps(a, b, 0xE6);
		case 0xE7: return _mm256_dp_ps(a, b, 0xE7);
		case 0xE8: return _mm256_dp_ps(a, b, 0xE8);
		case 0xE9: return _mm256_dp_ps(a, b, 0xE9);
		case 0xEA: return _mm256_dp_ps(a, b, 0xEA);
		case 0xEB: return _mm256_dp_ps(a, b, 0xEB);
		case 0xEC: return _mm256_dp_ps(a, b, 0xEC);
		case 0xED: return _mm256_dp_ps(a, b, 0xED);
		case 0xEE: return _mm256_dp_ps(a, b, 0xEE);
		case 0xEF: return _mm256_dp_ps(a, b, 0xEF);
		case 0xF0: return _mm256_dp_ps(a, b, 0xF0);
		case 0xF1: return _mm256_dp_ps(a, b, 0xF1);
		case 0xF2: return _mm256_dp_ps(a, b, 0xF2);
		case 0xF3: return _mm256_dp_ps(a, b, 0xF3);
		case 0xF4: return _mm256_dp_ps(a, b, 0xF4);
		case 0xF5: return _mm256_dp_ps(a, b, 0xF5);
		case 0xF6: return _mm256_dp_ps(a, b, 0xF6);
		case 0xF7: return _mm256_dp_ps(a, b, 0xF7);
		case 0xF8: return _mm256_dp_ps(a, b, 0xF8);
		case 0xF9: return _mm256_dp_ps(a, b, 0xF9);
		case 0xFA: return _mm256_dp_ps(a, b, 0xFA);
		case 0xFB: return _mm256_dp_ps(a, b, 0xFB);
		case 0xFC: return _mm256_dp_ps(a, b, 0xFC);
		case 0xFD: return _mm256_dp_ps(a, b, 0xFD);
		case 0xFE: return _mm256_dp_ps(a, b, 0xFE);
		default:   return _mm256_dp_ps(a, b, 0xFF);
	}
}

int avx256_extract_epi32(__m256i a, const int index) {
	switch (index & 0x7) {
		case 0:  return _mm256_extract_epi32(a, 0);
		case 1:  return _mm256_extract_epi32(a, 1);
		case 2:  return _mm256_extract_epi32(a, 2);
		case 3:  return _mm256_extract_epi32(a, 3);
		case 4:  return _mm256_extract_epi32(a, 4);
		case 5:  return _mm256_extract_epi32(a, 5);
		case 6:  return _mm256_extract_epi32(a, 6);
		default: return _mm256_extract_epi32(a, 7);
	}
}

long long avx256_extract_epi64(__m256i a, const int index) {
	switch (index & 0x3) {
		case 0:  return _mm256_extract_epi64(a, 0);
		case 1:  return _mm256_extract_epi64(a, 1);
		case 2:  return _mm256_extract_epi64(a, 2);
		default: return _mm256_extract_epi64(a, 3);
	}
}

__m128d avx_extractf128_pd(__m256d a, const int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm256_extractf128_pd(a, 0);
		default: return _mm256_extractf128_pd(a, 1);
	}
}

__m128 avx_extractf128_ps(__m256 a, const int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm256_extractf128_ps(a, 0);
		default: return _mm256_extractf128_ps(a, 1);
	}
}

__m128i avx_extractf128_si256(__m256i a, const int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm256_extractf128_si256(a, 0);
		default: return _mm256_extractf128_si256(a, 1);
	}
}

__m256d avx256_floor_pd(__m256d a) { return _mm256_floor_pd(a); }

__m256 avx256_floor_ps(__m256 a) { return _mm256_floor_ps(a); }

__m256d avx256_hadd_pd(__m256d a, __m256d b) { return _mm256_hadd_pd(a, b); }

__m256 avx256_hadd_ps(__m256 a, __m256 b) { return _mm256_hadd_ps(a, b); }

__m256d avx256_hsub_pd(__m256d a, __m256d b) { return _mm256_hsub_pd(a, b); }

__m256 avx256_hsub_ps(__m256 a, __m256 b) { return _mm256_hsub_ps(a, b); }

__m256i avx256_insert_epi16(__m256i a, short i, const int index) {
	switch (index & 0xF) {
		case  0: return _mm256_insert_epi16(a, i,  0);
		case  1: return _mm256_insert_epi16(a, i,  1);
		case  2: return _mm256_insert_epi16(a, i,  2);
		case  3: return _mm256_insert_epi16(a, i,  3);
		case  4: return _mm256_insert_epi16(a, i,  4);
		case  5: return _mm256_insert_epi16(a, i,  5);
		case  6: return _mm256_insert_epi16(a, i,  6);
		case  7: return _mm256_insert_epi16(a, i,  7);
		case  8: return _mm256_insert_epi16(a, i,  8);
		case  9: return _mm256_insert_epi16(a, i,  9);
		case 10: return _mm256_insert_epi16(a, i, 10);
		case 11: return _mm256_insert_epi16(a, i, 11);
		case 12: return _mm256_insert_epi16(a, i, 12);
		case 13: return _mm256_insert_epi16(a, i, 13);
		case 14: return _mm256_insert_epi16(a, i, 14);
		default: return _mm256_insert_epi16(a, i, 15);
	}
}

__m256i avx256_insert_epi32(__m256i a, int i, const int index) {
	switch (index & 0x7) {
		case 0:  return _mm256_insert_epi32(a, i, 0);
		case 1:  return _mm256_insert_epi32(a, i, 1);
		case 2:  return _mm256_insert_epi32(a, i, 2);
		case 3:  return _mm256_insert_epi32(a, i, 3);
		case 4:  return _mm256_insert_epi32(a, i, 4);
		case 5:  return _mm256_insert_epi32(a, i, 5);
		case 6:  return _mm256_insert_epi32(a, i, 6);
		default: return _mm256_insert_epi32(a, i, 7);
	}
}

__m256i avx256_insert_epi64(__m256i a, long long i, const int index) {
	switch (index & 0x3) {
		case 0:  return _mm256_insert_epi64(a, i, 0);
		case 1:  return _mm256_insert_epi64(a, i, 1);
		case 2:  return _mm256_insert_epi64(a, i, 2);
		default: return _mm256_insert_epi64(a, i, 3);
	}
}

__m256i avx256_insert_epi8(__m256i a, char i, const int index) {
	switch (index & 0x1F) {
		case 0x00: return _mm256_insert_epi8(a, i, 0x00);
		case 0x01: return _mm256_insert_epi8(a, i, 0x01);
		case 0x02: return _mm256_insert_epi8(a, i, 0x02);
		case 0x03: return _mm256_insert_epi8(a, i, 0x03);
		case 0x04: return _mm256_insert_epi8(a, i, 0x04);
		case 0x05: return _mm256_insert_epi8(a, i, 0x05);
		case 0x06: return _mm256_insert_epi8(a, i, 0x06);
		case 0x07: return _mm256_insert_epi8(a, i, 0x07);
		case 0x08: return _mm256_insert_epi8(a, i, 0x08);
		case 0x09: return _mm256_insert_epi8(a, i, 0x09);
		case 0x0A: return _mm256_insert_epi8(a, i, 0x0A);
		case 0x0B: return _mm256_insert_epi8(a, i, 0x0B);
		case 0x0C: return _mm256_insert_epi8(a, i, 0x0C);
		case 0x0D: return _mm256_insert_epi8(a, i, 0x0D);
		case 0x0E: return _mm256_insert_epi8(a, i, 0x0E);
		case 0x0F: return _mm256_insert_epi8(a, i, 0x0F);
		case 0x10: return _mm256_insert_epi8(a, i, 0x10);
		case 0x11: return _mm256_insert_epi8(a, i, 0x11);
		case 0x12: return _mm256_insert_epi8(a, i, 0x12);
		case 0x13: return _mm256_insert_epi8(a, i, 0x13);
		case 0x14: return _mm256_insert_epi8(a, i, 0x14);
		case 0x15: return _mm256_insert_epi8(a, i, 0x15);
		case 0x16: return _mm256_insert_epi8(a, i, 0x16);
		case 0x17: return _mm256_insert_epi8(a, i, 0x17);
		case 0x18: return _mm256_insert_epi8(a, i, 0x18);
		case 0x19: return _mm256_insert_epi8(a, i, 0x19);
		case 0x1A: return _mm256_insert_epi8(a, i, 0x1A);
		case 0x1B: return _mm256_insert_epi8(a, i, 0x1B);
		case 0x1C: return _mm256_insert_epi8(a, i, 0x1C);
		case 0x1D: return _mm256_insert_epi8(a, i, 0x1D);
		case 0x1E: return _mm256_insert_epi8(a, i, 0x1E);
		default:   return _mm256_insert_epi8(a, i, 0x1F);
	}
}

__m256d avx256_insertf128_pd(__m256d a, __m128d b, int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm256_insertf128_pd(a, b, 0);
		default: return _mm256_insertf128_pd(a, b, 1);
	}
}

__m256 avx256_insertf128_ps(__m256 a, __m128 b, int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm256_insertf128_ps(a, b, 0);
		default: return _mm256_insertf128_ps(a, b, 1);
	}
}

__m256i avx256_insertf128_si256(__m256i a, __m128i b, int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm256_insertf128_si256(a, b, 0);
		default: return _mm256_insertf128_si256(a, b, 1);
	}
}

__m256i avx256_lddqu_si256(const __m256i* mem_addr) { return _mm256_lddqu_si256(mem_addr); }

__m256d avx256_load_pd(const double* mem_addr) { return _mm256_load_pd(mem_addr); }

__m256 avx256_load_ps(const float* mem_addr) { return _mm256_load_ps(mem_addr); }

__m256i avx256_load_si256(const __m256i* mem_addr) { return _mm256_load_si256(mem_addr); }

__m256d avx256_loadu_pd(const double* mem_addr) { return _mm256_loadu_pd(mem_addr); }

__m256 avx256_loadu_ps(const float* mem_addr) { return _mm256_loadu_ps(mem_addr); }

__m256i avx256_loadu_si256(const __m256i* mem_addr) { return _mm256_loadu_si256(mem_addr); }

__m256 avx256_loadu2_m128(const float* hiaddr, const float* loaddr) { return _mm256_loadu2_m128(hiaddr, loaddr); }

__m256d avx256_loadu2_m128d(const double* hiaddr, const double* loaddr) { return _mm256_loadu2_m128d(hiaddr, loaddr); }

__m256i avx256_loadu2_m128i(const __m128i* hiaddr, const __m128i* loaddr) { return _mm256_loadu2_m128i(hiaddr, loaddr); }

__m128d avx_maskload_pd(const double* mem_addr, __m128i mask) { return _mm_maskload_pd(mem_addr, mask); }

__m256d avx256_maskload_pd(const double* mem_addr, __m256i mask) { return _mm256_maskload_pd(mem_addr, mask); }

__m128 avx_maskload_ps(const float* mem_addr, __m128i mask) { return _mm_maskload_ps(mem_addr, mask); }

__m256 avx256_maskload_ps(const float* mem_addr, __m256i mask) { return _mm256_maskload_ps(mem_addr, mask); }

void avx_maskstore_pd(double* mem_addr, __m128i mask, __m128d a) { return _mm_maskstore_pd(mem_addr, mask, a); }

void avx256_maskstore_pd(double* mem_addr, __m256i mask, __m256d a) { return _mm256_maskstore_pd(mem_addr, mask, a); }

void avx_maskstore_ps(float* mem_addr, __m128i mask, __m128 a) { return _mm_maskstore_ps(mem_addr, mask, a); }

void avx256_maskstore_ps(float* mem_addr, __m256i mask, __m256 a) { return _mm256_maskstore_ps(mem_addr, mask, a); }

__m256d avx256_max_pd(__m256d a, __m256d b) { return _mm256_max_pd(a, b); }

__m256 avx256_max_ps(__m256 a, __m256 b) { return _mm256_max_ps(a, b); }

__m256d avx256_min_pd(__m256d a, __m256d b) { return _mm256_min_pd(a, b); }

__m256 avx256_min_ps(__m256 a, __m256 b) { return _mm256_min_ps(a, b); }

__m256d avx256_movedup_pd(__m256d a) { return _mm256_movedup_pd(a); }

__m256 avx256_movehdup_ps(__m256 a) { return _mm256_movehdup_ps(a); }

__m256 avx256_moveldup_ps(__m256 a) { return _mm256_moveldup_ps(a); }

int avx256_movemask_pd(__m256d a) { return _mm256_movemask_pd(a); }

int avx256_movemask_ps(__m256 a) { return _mm256_movemask_ps(a); }

__m256d avx256_mul_pd(__m256d a, __m256d b) { return _mm256_mul_pd(a, b); }

__m256 avx256_mul_ps(__m256 a, __m256 b) { return _mm256_mul_ps(a, b); }

__m256d avx256_or_pd(__m256d a, __m256d b) { return _mm256_or_pd(a, b); }

__m256 avx256_or_ps(__m256 a, __m256 b) { return _mm256_or_ps(a, b); }

__m128d avx_permute_pd(__m128d a, int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_permute_pd(a, 0);
		case 1:  return _mm_permute_pd(a, 1);
		case 2:  return _mm_permute_pd(a, 2);
		default: return _mm_permute_pd(a, 3);
	}
}

__m256d avx256_permute_pd(__m256d a, int imm8) {
	switch (imm8 & 0xF) {
		case  0: return _mm256_permute_pd(a,  0);
		case  1: return _mm256_permute_pd(a,  1);
		case  2: return _mm256_permute_pd(a,  2);
		case  3: return _mm256_permute_pd(a,  3);
		case  4: return _mm256_permute_pd(a,  4);
		case  5: return _mm256_permute_pd(a,  5);
		case  6: return _mm256_permute_pd(a,  6);
		case  7: return _mm256_permute_pd(a,  7);
		case  8: return _mm256_permute_pd(a,  8);
		case  9: return _mm256_permute_pd(a,  9);
		case 10: return _mm256_permute_pd(a, 10);
		case 11: return _mm256_permute_pd(a, 11);
		case 12: return _mm256_permute_pd(a, 12);
		case 13: return _mm256_permute_pd(a, 13);
		case 14: return _mm256_permute_pd(a, 14);
		default: return _mm256_permute_pd(a, 15);
	}
}

__m128 avx_permute_ps(__m128 a, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_permute_ps(a, 0x00);
		case 0x01: return _mm_permute_ps(a, 0x01);
		case 0x02: return _mm_permute_ps(a, 0x02);
		case 0x03: return _mm_permute_ps(a, 0x03);
		case 0x04: return _mm_permute_ps(a, 0x04);
		case 0x05: return _mm_permute_ps(a, 0x05);
		case 0x06: return _mm_permute_ps(a, 0x06);
		case 0x07: return _mm_permute_ps(a, 0x07);
		case 0x08: return _mm_permute_ps(a, 0x08);
		case 0x09: return _mm_permute_ps(a, 0x09);
		case 0x0A: return _mm_permute_ps(a, 0x0A);
		case 0x0B: return _mm_permute_ps(a, 0x0B);
		case 0x0C: return _mm_permute_ps(a, 0x0C);
		case 0x0D: return _mm_permute_ps(a, 0x0D);
		case 0x0E: return _mm_permute_ps(a, 0x0E);
		case 0x0F: return _mm_permute_ps(a, 0x0F);
		case 0x10: return _mm_permute_ps(a, 0x10);
		case 0x11: return _mm_permute_ps(a, 0x11);
		case 0x12: return _mm_permute_ps(a, 0x12);
		case 0x13: return _mm_permute_ps(a, 0x13);
		case 0x14: return _mm_permute_ps(a, 0x14);
		case 0x15: return _mm_permute_ps(a, 0x15);
		case 0x16: return _mm_permute_ps(a, 0x16);
		case 0x17: return _mm_permute_ps(a, 0x17);
		case 0x18: return _mm_permute_ps(a, 0x18);
		case 0x19: return _mm_permute_ps(a, 0x19);
		case 0x1A: return _mm_permute_ps(a, 0x1A);
		case 0x1B: return _mm_permute_ps(a, 0x1B);
		case 0x1C: return _mm_permute_ps(a, 0x1C);
		case 0x1D: return _mm_permute_ps(a, 0x1D);
		case 0x1E: return _mm_permute_ps(a, 0x1E);
		case 0x1F: return _mm_permute_ps(a, 0x1F);
		case 0x20: return _mm_permute_ps(a, 0x20);
		case 0x21: return _mm_permute_ps(a, 0x21);
		case 0x22: return _mm_permute_ps(a, 0x22);
		case 0x23: return _mm_permute_ps(a, 0x23);
		case 0x24: return _mm_permute_ps(a, 0x24);
		case 0x25: return _mm_permute_ps(a, 0x25);
		case 0x26: return _mm_permute_ps(a, 0x26);
		case 0x27: return _mm_permute_ps(a, 0x27);
		case 0x28: return _mm_permute_ps(a, 0x28);
		case 0x29: return _mm_permute_ps(a, 0x29);
		case 0x2A: return _mm_permute_ps(a, 0x2A);
		case 0x2B: return _mm_permute_ps(a, 0x2B);
		case 0x2C: return _mm_permute_ps(a, 0x2C);
		case 0x2D: return _mm_permute_ps(a, 0x2D);
		case 0x2E: return _mm_permute_ps(a, 0x2E);
		case 0x2F: return _mm_permute_ps(a, 0x2F);
		case 0x30: return _mm_permute_ps(a, 0x30);
		case 0x31: return _mm_permute_ps(a, 0x31);
		case 0x32: return _mm_permute_ps(a, 0x32);
		case 0x33: return _mm_permute_ps(a, 0x33);
		case 0x34: return _mm_permute_ps(a, 0x34);
		case 0x35: return _mm_permute_ps(a, 0x35);
		case 0x36: return _mm_permute_ps(a, 0x36);
		case 0x37: return _mm_permute_ps(a, 0x37);
		case 0x38: return _mm_permute_ps(a, 0x38);
		case 0x39: return _mm_permute_ps(a, 0x39);
		case 0x3A: return _mm_permute_ps(a, 0x3A);
		case 0x3B: return _mm_permute_ps(a, 0x3B);
		case 0x3C: return _mm_permute_ps(a, 0x3C);
		case 0x3D: return _mm_permute_ps(a, 0x3D);
		case 0x3E: return _mm_permute_ps(a, 0x3E);
		case 0x3F: return _mm_permute_ps(a, 0x3F);
		case 0x40: return _mm_permute_ps(a, 0x40);
		case 0x41: return _mm_permute_ps(a, 0x41);
		case 0x42: return _mm_permute_ps(a, 0x42);
		case 0x43: return _mm_permute_ps(a, 0x43);
		case 0x44: return _mm_permute_ps(a, 0x44);
		case 0x45: return _mm_permute_ps(a, 0x45);
		case 0x46: return _mm_permute_ps(a, 0x46);
		case 0x47: return _mm_permute_ps(a, 0x47);
		case 0x48: return _mm_permute_ps(a, 0x48);
		case 0x49: return _mm_permute_ps(a, 0x49);
		case 0x4A: return _mm_permute_ps(a, 0x4A);
		case 0x4B: return _mm_permute_ps(a, 0x4B);
		case 0x4C: return _mm_permute_ps(a, 0x4C);
		case 0x4D: return _mm_permute_ps(a, 0x4D);
		case 0x4E: return _mm_permute_ps(a, 0x4E);
		case 0x4F: return _mm_permute_ps(a, 0x4F);
		case 0x50: return _mm_permute_ps(a, 0x50);
		case 0x51: return _mm_permute_ps(a, 0x51);
		case 0x52: return _mm_permute_ps(a, 0x52);
		case 0x53: return _mm_permute_ps(a, 0x53);
		case 0x54: return _mm_permute_ps(a, 0x54);
		case 0x55: return _mm_permute_ps(a, 0x55);
		case 0x56: return _mm_permute_ps(a, 0x56);
		case 0x57: return _mm_permute_ps(a, 0x57);
		case 0x58: return _mm_permute_ps(a, 0x58);
		case 0x59: return _mm_permute_ps(a, 0x59);
		case 0x5A: return _mm_permute_ps(a, 0x5A);
		case 0x5B: return _mm_permute_ps(a, 0x5B);
		case 0x5C: return _mm_permute_ps(a, 0x5C);
		case 0x5D: return _mm_permute_ps(a, 0x5D);
		case 0x5E: return _mm_permute_ps(a, 0x5E);
		case 0x5F: return _mm_permute_ps(a, 0x5F);
		case 0x60: return _mm_permute_ps(a, 0x60);
		case 0x61: return _mm_permute_ps(a, 0x61);
		case 0x62: return _mm_permute_ps(a, 0x62);
		case 0x63: return _mm_permute_ps(a, 0x63);
		case 0x64: return _mm_permute_ps(a, 0x64);
		case 0x65: return _mm_permute_ps(a, 0x65);
		case 0x66: return _mm_permute_ps(a, 0x66);
		case 0x67: return _mm_permute_ps(a, 0x67);
		case 0x68: return _mm_permute_ps(a, 0x68);
		case 0x69: return _mm_permute_ps(a, 0x69);
		case 0x6A: return _mm_permute_ps(a, 0x6A);
		case 0x6B: return _mm_permute_ps(a, 0x6B);
		case 0x6C: return _mm_permute_ps(a, 0x6C);
		case 0x6D: return _mm_permute_ps(a, 0x6D);
		case 0x6E: return _mm_permute_ps(a, 0x6E);
		case 0x6F: return _mm_permute_ps(a, 0x6F);
		case 0x70: return _mm_permute_ps(a, 0x70);
		case 0x71: return _mm_permute_ps(a, 0x71);
		case 0x72: return _mm_permute_ps(a, 0x72);
		case 0x73: return _mm_permute_ps(a, 0x73);
		case 0x74: return _mm_permute_ps(a, 0x74);
		case 0x75: return _mm_permute_ps(a, 0x75);
		case 0x76: return _mm_permute_ps(a, 0x76);
		case 0x77: return _mm_permute_ps(a, 0x77);
		case 0x78: return _mm_permute_ps(a, 0x78);
		case 0x79: return _mm_permute_ps(a, 0x79);
		case 0x7A: return _mm_permute_ps(a, 0x7A);
		case 0x7B: return _mm_permute_ps(a, 0x7B);
		case 0x7C: return _mm_permute_ps(a, 0x7C);
		case 0x7D: return _mm_permute_ps(a, 0x7D);
		case 0x7E: return _mm_permute_ps(a, 0x7E);
		case 0x7F: return _mm_permute_ps(a, 0x7F);
		case 0x80: return _mm_permute_ps(a, 0x80);
		case 0x81: return _mm_permute_ps(a, 0x81);
		case 0x82: return _mm_permute_ps(a, 0x82);
		case 0x83: return _mm_permute_ps(a, 0x83);
		case 0x84: return _mm_permute_ps(a, 0x84);
		case 0x85: return _mm_permute_ps(a, 0x85);
		case 0x86: return _mm_permute_ps(a, 0x86);
		case 0x87: return _mm_permute_ps(a, 0x87);
		case 0x88: return _mm_permute_ps(a, 0x88);
		case 0x89: return _mm_permute_ps(a, 0x89);
		case 0x8A: return _mm_permute_ps(a, 0x8A);
		case 0x8B: return _mm_permute_ps(a, 0x8B);
		case 0x8C: return _mm_permute_ps(a, 0x8C);
		case 0x8D: return _mm_permute_ps(a, 0x8D);
		case 0x8E: return _mm_permute_ps(a, 0x8E);
		case 0x8F: return _mm_permute_ps(a, 0x8F);
		case 0x90: return _mm_permute_ps(a, 0x90);
		case 0x91: return _mm_permute_ps(a, 0x91);
		case 0x92: return _mm_permute_ps(a, 0x92);
		case 0x93: return _mm_permute_ps(a, 0x93);
		case 0x94: return _mm_permute_ps(a, 0x94);
		case 0x95: return _mm_permute_ps(a, 0x95);
		case 0x96: return _mm_permute_ps(a, 0x96);
		case 0x97: return _mm_permute_ps(a, 0x97);
		case 0x98: return _mm_permute_ps(a, 0x98);
		case 0x99: return _mm_permute_ps(a, 0x99);
		case 0x9A: return _mm_permute_ps(a, 0x9A);
		case 0x9B: return _mm_permute_ps(a, 0x9B);
		case 0x9C: return _mm_permute_ps(a, 0x9C);
		case 0x9D: return _mm_permute_ps(a, 0x9D);
		case 0x9E: return _mm_permute_ps(a, 0x9E);
		case 0x9F: return _mm_permute_ps(a, 0x9F);
		case 0xA0: return _mm_permute_ps(a, 0xA0);
		case 0xA1: return _mm_permute_ps(a, 0xA1);
		case 0xA2: return _mm_permute_ps(a, 0xA2);
		case 0xA3: return _mm_permute_ps(a, 0xA3);
		case 0xA4: return _mm_permute_ps(a, 0xA4);
		case 0xA5: return _mm_permute_ps(a, 0xA5);
		case 0xA6: return _mm_permute_ps(a, 0xA6);
		case 0xA7: return _mm_permute_ps(a, 0xA7);
		case 0xA8: return _mm_permute_ps(a, 0xA8);
		case 0xA9: return _mm_permute_ps(a, 0xA9);
		case 0xAA: return _mm_permute_ps(a, 0xAA);
		case 0xAB: return _mm_permute_ps(a, 0xAB);
		case 0xAC: return _mm_permute_ps(a, 0xAC);
		case 0xAD: return _mm_permute_ps(a, 0xAD);
		case 0xAE: return _mm_permute_ps(a, 0xAE);
		case 0xAF: return _mm_permute_ps(a, 0xAF);
		case 0xB0: return _mm_permute_ps(a, 0xB0);
		case 0xB1: return _mm_permute_ps(a, 0xB1);
		case 0xB2: return _mm_permute_ps(a, 0xB2);
		case 0xB3: return _mm_permute_ps(a, 0xB3);
		case 0xB4: return _mm_permute_ps(a, 0xB4);
		case 0xB5: return _mm_permute_ps(a, 0xB5);
		case 0xB6: return _mm_permute_ps(a, 0xB6);
		case 0xB7: return _mm_permute_ps(a, 0xB7);
		case 0xB8: return _mm_permute_ps(a, 0xB8);
		case 0xB9: return _mm_permute_ps(a, 0xB9);
		case 0xBA: return _mm_permute_ps(a, 0xBA);
		case 0xBB: return _mm_permute_ps(a, 0xBB);
		case 0xBC: return _mm_permute_ps(a, 0xBC);
		case 0xBD: return _mm_permute_ps(a, 0xBD);
		case 0xBE: return _mm_permute_ps(a, 0xBE);
		case 0xBF: return _mm_permute_ps(a, 0xBF);
		case 0xC0: return _mm_permute_ps(a, 0xC0);
		case 0xC1: return _mm_permute_ps(a, 0xC1);
		case 0xC2: return _mm_permute_ps(a, 0xC2);
		case 0xC3: return _mm_permute_ps(a, 0xC3);
		case 0xC4: return _mm_permute_ps(a, 0xC4);
		case 0xC5: return _mm_permute_ps(a, 0xC5);
		case 0xC6: return _mm_permute_ps(a, 0xC6);
		case 0xC7: return _mm_permute_ps(a, 0xC7);
		case 0xC8: return _mm_permute_ps(a, 0xC8);
		case 0xC9: return _mm_permute_ps(a, 0xC9);
		case 0xCA: return _mm_permute_ps(a, 0xCA);
		case 0xCB: return _mm_permute_ps(a, 0xCB);
		case 0xCC: return _mm_permute_ps(a, 0xCC);
		case 0xCD: return _mm_permute_ps(a, 0xCD);
		case 0xCE: return _mm_permute_ps(a, 0xCE);
		case 0xCF: return _mm_permute_ps(a, 0xCF);
		case 0xD0: return _mm_permute_ps(a, 0xD0);
		case 0xD1: return _mm_permute_ps(a, 0xD1);
		case 0xD2: return _mm_permute_ps(a, 0xD2);
		case 0xD3: return _mm_permute_ps(a, 0xD3);
		case 0xD4: return _mm_permute_ps(a, 0xD4);
		case 0xD5: return _mm_permute_ps(a, 0xD5);
		case 0xD6: return _mm_permute_ps(a, 0xD6);
		case 0xD7: return _mm_permute_ps(a, 0xD7);
		case 0xD8: return _mm_permute_ps(a, 0xD8);
		case 0xD9: return _mm_permute_ps(a, 0xD9);
		case 0xDA: return _mm_permute_ps(a, 0xDA);
		case 0xDB: return _mm_permute_ps(a, 0xDB);
		case 0xDC: return _mm_permute_ps(a, 0xDC);
		case 0xDD: return _mm_permute_ps(a, 0xDD);
		case 0xDE: return _mm_permute_ps(a, 0xDE);
		case 0xDF: return _mm_permute_ps(a, 0xDF);
		case 0xE0: return _mm_permute_ps(a, 0xE0);
		case 0xE1: return _mm_permute_ps(a, 0xE1);
		case 0xE2: return _mm_permute_ps(a, 0xE2);
		case 0xE3: return _mm_permute_ps(a, 0xE3);
		case 0xE4: return _mm_permute_ps(a, 0xE4);
		case 0xE5: return _mm_permute_ps(a, 0xE5);
		case 0xE6: return _mm_permute_ps(a, 0xE6);
		case 0xE7: return _mm_permute_ps(a, 0xE7);
		case 0xE8: return _mm_permute_ps(a, 0xE8);
		case 0xE9: return _mm_permute_ps(a, 0xE9);
		case 0xEA: return _mm_permute_ps(a, 0xEA);
		case 0xEB: return _mm_permute_ps(a, 0xEB);
		case 0xEC: return _mm_permute_ps(a, 0xEC);
		case 0xED: return _mm_permute_ps(a, 0xED);
		case 0xEE: return _mm_permute_ps(a, 0xEE);
		case 0xEF: return _mm_permute_ps(a, 0xEF);
		case 0xF0: return _mm_permute_ps(a, 0xF0);
		case 0xF1: return _mm_permute_ps(a, 0xF1);
		case 0xF2: return _mm_permute_ps(a, 0xF2);
		case 0xF3: return _mm_permute_ps(a, 0xF3);
		case 0xF4: return _mm_permute_ps(a, 0xF4);
		case 0xF5: return _mm_permute_ps(a, 0xF5);
		case 0xF6: return _mm_permute_ps(a, 0xF6);
		case 0xF7: return _mm_permute_ps(a, 0xF7);
		case 0xF8: return _mm_permute_ps(a, 0xF8);
		case 0xF9: return _mm_permute_ps(a, 0xF9);
		case 0xFA: return _mm_permute_ps(a, 0xFA);
		case 0xFB: return _mm_permute_ps(a, 0xFB);
		case 0xFC: return _mm_permute_ps(a, 0xFC);
		case 0xFD: return _mm_permute_ps(a, 0xFD);
		case 0xFE: return _mm_permute_ps(a, 0xFE);
		default:   return _mm_permute_ps(a, 0xFF);
	}
}

__m256 avx256_permute_ps(__m256 a, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_permute_ps(a, 0x00);
		case 0x01: return _mm256_permute_ps(a, 0x01);
		case 0x02: return _mm256_permute_ps(a, 0x02);
		case 0x03: return _mm256_permute_ps(a, 0x03);
		case 0x04: return _mm256_permute_ps(a, 0x04);
		case 0x05: return _mm256_permute_ps(a, 0x05);
		case 0x06: return _mm256_permute_ps(a, 0x06);
		case 0x07: return _mm256_permute_ps(a, 0x07);
		case 0x08: return _mm256_permute_ps(a, 0x08);
		case 0x09: return _mm256_permute_ps(a, 0x09);
		case 0x0A: return _mm256_permute_ps(a, 0x0A);
		case 0x0B: return _mm256_permute_ps(a, 0x0B);
		case 0x0C: return _mm256_permute_ps(a, 0x0C);
		case 0x0D: return _mm256_permute_ps(a, 0x0D);
		case 0x0E: return _mm256_permute_ps(a, 0x0E);
		case 0x0F: return _mm256_permute_ps(a, 0x0F);
		case 0x10: return _mm256_permute_ps(a, 0x10);
		case 0x11: return _mm256_permute_ps(a, 0x11);
		case 0x12: return _mm256_permute_ps(a, 0x12);
		case 0x13: return _mm256_permute_ps(a, 0x13);
		case 0x14: return _mm256_permute_ps(a, 0x14);
		case 0x15: return _mm256_permute_ps(a, 0x15);
		case 0x16: return _mm256_permute_ps(a, 0x16);
		case 0x17: return _mm256_permute_ps(a, 0x17);
		case 0x18: return _mm256_permute_ps(a, 0x18);
		case 0x19: return _mm256_permute_ps(a, 0x19);
		case 0x1A: return _mm256_permute_ps(a, 0x1A);
		case 0x1B: return _mm256_permute_ps(a, 0x1B);
		case 0x1C: return _mm256_permute_ps(a, 0x1C);
		case 0x1D: return _mm256_permute_ps(a, 0x1D);
		case 0x1E: return _mm256_permute_ps(a, 0x1E);
		case 0x1F: return _mm256_permute_ps(a, 0x1F);
		case 0x20: return _mm256_permute_ps(a, 0x20);
		case 0x21: return _mm256_permute_ps(a, 0x21);
		case 0x22: return _mm256_permute_ps(a, 0x22);
		case 0x23: return _mm256_permute_ps(a, 0x23);
		case 0x24: return _mm256_permute_ps(a, 0x24);
		case 0x25: return _mm256_permute_ps(a, 0x25);
		case 0x26: return _mm256_permute_ps(a, 0x26);
		case 0x27: return _mm256_permute_ps(a, 0x27);
		case 0x28: return _mm256_permute_ps(a, 0x28);
		case 0x29: return _mm256_permute_ps(a, 0x29);
		case 0x2A: return _mm256_permute_ps(a, 0x2A);
		case 0x2B: return _mm256_permute_ps(a, 0x2B);
		case 0x2C: return _mm256_permute_ps(a, 0x2C);
		case 0x2D: return _mm256_permute_ps(a, 0x2D);
		case 0x2E: return _mm256_permute_ps(a, 0x2E);
		case 0x2F: return _mm256_permute_ps(a, 0x2F);
		case 0x30: return _mm256_permute_ps(a, 0x30);
		case 0x31: return _mm256_permute_ps(a, 0x31);
		case 0x32: return _mm256_permute_ps(a, 0x32);
		case 0x33: return _mm256_permute_ps(a, 0x33);
		case 0x34: return _mm256_permute_ps(a, 0x34);
		case 0x35: return _mm256_permute_ps(a, 0x35);
		case 0x36: return _mm256_permute_ps(a, 0x36);
		case 0x37: return _mm256_permute_ps(a, 0x37);
		case 0x38: return _mm256_permute_ps(a, 0x38);
		case 0x39: return _mm256_permute_ps(a, 0x39);
		case 0x3A: return _mm256_permute_ps(a, 0x3A);
		case 0x3B: return _mm256_permute_ps(a, 0x3B);
		case 0x3C: return _mm256_permute_ps(a, 0x3C);
		case 0x3D: return _mm256_permute_ps(a, 0x3D);
		case 0x3E: return _mm256_permute_ps(a, 0x3E);
		case 0x3F: return _mm256_permute_ps(a, 0x3F);
		case 0x40: return _mm256_permute_ps(a, 0x40);
		case 0x41: return _mm256_permute_ps(a, 0x41);
		case 0x42: return _mm256_permute_ps(a, 0x42);
		case 0x43: return _mm256_permute_ps(a, 0x43);
		case 0x44: return _mm256_permute_ps(a, 0x44);
		case 0x45: return _mm256_permute_ps(a, 0x45);
		case 0x46: return _mm256_permute_ps(a, 0x46);
		case 0x47: return _mm256_permute_ps(a, 0x47);
		case 0x48: return _mm256_permute_ps(a, 0x48);
		case 0x49: return _mm256_permute_ps(a, 0x49);
		case 0x4A: return _mm256_permute_ps(a, 0x4A);
		case 0x4B: return _mm256_permute_ps(a, 0x4B);
		case 0x4C: return _mm256_permute_ps(a, 0x4C);
		case 0x4D: return _mm256_permute_ps(a, 0x4D);
		case 0x4E: return _mm256_permute_ps(a, 0x4E);
		case 0x4F: return _mm256_permute_ps(a, 0x4F);
		case 0x50: return _mm256_permute_ps(a, 0x50);
		case 0x51: return _mm256_permute_ps(a, 0x51);
		case 0x52: return _mm256_permute_ps(a, 0x52);
		case 0x53: return _mm256_permute_ps(a, 0x53);
		case 0x54: return _mm256_permute_ps(a, 0x54);
		case 0x55: return _mm256_permute_ps(a, 0x55);
		case 0x56: return _mm256_permute_ps(a, 0x56);
		case 0x57: return _mm256_permute_ps(a, 0x57);
		case 0x58: return _mm256_permute_ps(a, 0x58);
		case 0x59: return _mm256_permute_ps(a, 0x59);
		case 0x5A: return _mm256_permute_ps(a, 0x5A);
		case 0x5B: return _mm256_permute_ps(a, 0x5B);
		case 0x5C: return _mm256_permute_ps(a, 0x5C);
		case 0x5D: return _mm256_permute_ps(a, 0x5D);
		case 0x5E: return _mm256_permute_ps(a, 0x5E);
		case 0x5F: return _mm256_permute_ps(a, 0x5F);
		case 0x60: return _mm256_permute_ps(a, 0x60);
		case 0x61: return _mm256_permute_ps(a, 0x61);
		case 0x62: return _mm256_permute_ps(a, 0x62);
		case 0x63: return _mm256_permute_ps(a, 0x63);
		case 0x64: return _mm256_permute_ps(a, 0x64);
		case 0x65: return _mm256_permute_ps(a, 0x65);
		case 0x66: return _mm256_permute_ps(a, 0x66);
		case 0x67: return _mm256_permute_ps(a, 0x67);
		case 0x68: return _mm256_permute_ps(a, 0x68);
		case 0x69: return _mm256_permute_ps(a, 0x69);
		case 0x6A: return _mm256_permute_ps(a, 0x6A);
		case 0x6B: return _mm256_permute_ps(a, 0x6B);
		case 0x6C: return _mm256_permute_ps(a, 0x6C);
		case 0x6D: return _mm256_permute_ps(a, 0x6D);
		case 0x6E: return _mm256_permute_ps(a, 0x6E);
		case 0x6F: return _mm256_permute_ps(a, 0x6F);
		case 0x70: return _mm256_permute_ps(a, 0x70);
		case 0x71: return _mm256_permute_ps(a, 0x71);
		case 0x72: return _mm256_permute_ps(a, 0x72);
		case 0x73: return _mm256_permute_ps(a, 0x73);
		case 0x74: return _mm256_permute_ps(a, 0x74);
		case 0x75: return _mm256_permute_ps(a, 0x75);
		case 0x76: return _mm256_permute_ps(a, 0x76);
		case 0x77: return _mm256_permute_ps(a, 0x77);
		case 0x78: return _mm256_permute_ps(a, 0x78);
		case 0x79: return _mm256_permute_ps(a, 0x79);
		case 0x7A: return _mm256_permute_ps(a, 0x7A);
		case 0x7B: return _mm256_permute_ps(a, 0x7B);
		case 0x7C: return _mm256_permute_ps(a, 0x7C);
		case 0x7D: return _mm256_permute_ps(a, 0x7D);
		case 0x7E: return _mm256_permute_ps(a, 0x7E);
		case 0x7F: return _mm256_permute_ps(a, 0x7F);
		case 0x80: return _mm256_permute_ps(a, 0x80);
		case 0x81: return _mm256_permute_ps(a, 0x81);
		case 0x82: return _mm256_permute_ps(a, 0x82);
		case 0x83: return _mm256_permute_ps(a, 0x83);
		case 0x84: return _mm256_permute_ps(a, 0x84);
		case 0x85: return _mm256_permute_ps(a, 0x85);
		case 0x86: return _mm256_permute_ps(a, 0x86);
		case 0x87: return _mm256_permute_ps(a, 0x87);
		case 0x88: return _mm256_permute_ps(a, 0x88);
		case 0x89: return _mm256_permute_ps(a, 0x89);
		case 0x8A: return _mm256_permute_ps(a, 0x8A);
		case 0x8B: return _mm256_permute_ps(a, 0x8B);
		case 0x8C: return _mm256_permute_ps(a, 0x8C);
		case 0x8D: return _mm256_permute_ps(a, 0x8D);
		case 0x8E: return _mm256_permute_ps(a, 0x8E);
		case 0x8F: return _mm256_permute_ps(a, 0x8F);
		case 0x90: return _mm256_permute_ps(a, 0x90);
		case 0x91: return _mm256_permute_ps(a, 0x91);
		case 0x92: return _mm256_permute_ps(a, 0x92);
		case 0x93: return _mm256_permute_ps(a, 0x93);
		case 0x94: return _mm256_permute_ps(a, 0x94);
		case 0x95: return _mm256_permute_ps(a, 0x95);
		case 0x96: return _mm256_permute_ps(a, 0x96);
		case 0x97: return _mm256_permute_ps(a, 0x97);
		case 0x98: return _mm256_permute_ps(a, 0x98);
		case 0x99: return _mm256_permute_ps(a, 0x99);
		case 0x9A: return _mm256_permute_ps(a, 0x9A);
		case 0x9B: return _mm256_permute_ps(a, 0x9B);
		case 0x9C: return _mm256_permute_ps(a, 0x9C);
		case 0x9D: return _mm256_permute_ps(a, 0x9D);
		case 0x9E: return _mm256_permute_ps(a, 0x9E);
		case 0x9F: return _mm256_permute_ps(a, 0x9F);
		case 0xA0: return _mm256_permute_ps(a, 0xA0);
		case 0xA1: return _mm256_permute_ps(a, 0xA1);
		case 0xA2: return _mm256_permute_ps(a, 0xA2);
		case 0xA3: return _mm256_permute_ps(a, 0xA3);
		case 0xA4: return _mm256_permute_ps(a, 0xA4);
		case 0xA5: return _mm256_permute_ps(a, 0xA5);
		case 0xA6: return _mm256_permute_ps(a, 0xA6);
		case 0xA7: return _mm256_permute_ps(a, 0xA7);
		case 0xA8: return _mm256_permute_ps(a, 0xA8);
		case 0xA9: return _mm256_permute_ps(a, 0xA9);
		case 0xAA: return _mm256_permute_ps(a, 0xAA);
		case 0xAB: return _mm256_permute_ps(a, 0xAB);
		case 0xAC: return _mm256_permute_ps(a, 0xAC);
		case 0xAD: return _mm256_permute_ps(a, 0xAD);
		case 0xAE: return _mm256_permute_ps(a, 0xAE);
		case 0xAF: return _mm256_permute_ps(a, 0xAF);
		case 0xB0: return _mm256_permute_ps(a, 0xB0);
		case 0xB1: return _mm256_permute_ps(a, 0xB1);
		case 0xB2: return _mm256_permute_ps(a, 0xB2);
		case 0xB3: return _mm256_permute_ps(a, 0xB3);
		case 0xB4: return _mm256_permute_ps(a, 0xB4);
		case 0xB5: return _mm256_permute_ps(a, 0xB5);
		case 0xB6: return _mm256_permute_ps(a, 0xB6);
		case 0xB7: return _mm256_permute_ps(a, 0xB7);
		case 0xB8: return _mm256_permute_ps(a, 0xB8);
		case 0xB9: return _mm256_permute_ps(a, 0xB9);
		case 0xBA: return _mm256_permute_ps(a, 0xBA);
		case 0xBB: return _mm256_permute_ps(a, 0xBB);
		case 0xBC: return _mm256_permute_ps(a, 0xBC);
		case 0xBD: return _mm256_permute_ps(a, 0xBD);
		case 0xBE: return _mm256_permute_ps(a, 0xBE);
		case 0xBF: return _mm256_permute_ps(a, 0xBF);
		case 0xC0: return _mm256_permute_ps(a, 0xC0);
		case 0xC1: return _mm256_permute_ps(a, 0xC1);
		case 0xC2: return _mm256_permute_ps(a, 0xC2);
		case 0xC3: return _mm256_permute_ps(a, 0xC3);
		case 0xC4: return _mm256_permute_ps(a, 0xC4);
		case 0xC5: return _mm256_permute_ps(a, 0xC5);
		case 0xC6: return _mm256_permute_ps(a, 0xC6);
		case 0xC7: return _mm256_permute_ps(a, 0xC7);
		case 0xC8: return _mm256_permute_ps(a, 0xC8);
		case 0xC9: return _mm256_permute_ps(a, 0xC9);
		case 0xCA: return _mm256_permute_ps(a, 0xCA);
		case 0xCB: return _mm256_permute_ps(a, 0xCB);
		case 0xCC: return _mm256_permute_ps(a, 0xCC);
		case 0xCD: return _mm256_permute_ps(a, 0xCD);
		case 0xCE: return _mm256_permute_ps(a, 0xCE);
		case 0xCF: return _mm256_permute_ps(a, 0xCF);
		case 0xD0: return _mm256_permute_ps(a, 0xD0);
		case 0xD1: return _mm256_permute_ps(a, 0xD1);
		case 0xD2: return _mm256_permute_ps(a, 0xD2);
		case 0xD3: return _mm256_permute_ps(a, 0xD3);
		case 0xD4: return _mm256_permute_ps(a, 0xD4);
		case 0xD5: return _mm256_permute_ps(a, 0xD5);
		case 0xD6: return _mm256_permute_ps(a, 0xD6);
		case 0xD7: return _mm256_permute_ps(a, 0xD7);
		case 0xD8: return _mm256_permute_ps(a, 0xD8);
		case 0xD9: return _mm256_permute_ps(a, 0xD9);
		case 0xDA: return _mm256_permute_ps(a, 0xDA);
		case 0xDB: return _mm256_permute_ps(a, 0xDB);
		case 0xDC: return _mm256_permute_ps(a, 0xDC);
		case 0xDD: return _mm256_permute_ps(a, 0xDD);
		case 0xDE: return _mm256_permute_ps(a, 0xDE);
		case 0xDF: return _mm256_permute_ps(a, 0xDF);
		case 0xE0: return _mm256_permute_ps(a, 0xE0);
		case 0xE1: return _mm256_permute_ps(a, 0xE1);
		case 0xE2: return _mm256_permute_ps(a, 0xE2);
		case 0xE3: return _mm256_permute_ps(a, 0xE3);
		case 0xE4: return _mm256_permute_ps(a, 0xE4);
		case 0xE5: return _mm256_permute_ps(a, 0xE5);
		case 0xE6: return _mm256_permute_ps(a, 0xE6);
		case 0xE7: return _mm256_permute_ps(a, 0xE7);
		case 0xE8: return _mm256_permute_ps(a, 0xE8);
		case 0xE9: return _mm256_permute_ps(a, 0xE9);
		case 0xEA: return _mm256_permute_ps(a, 0xEA);
		case 0xEB: return _mm256_permute_ps(a, 0xEB);
		case 0xEC: return _mm256_permute_ps(a, 0xEC);
		case 0xED: return _mm256_permute_ps(a, 0xED);
		case 0xEE: return _mm256_permute_ps(a, 0xEE);
		case 0xEF: return _mm256_permute_ps(a, 0xEF);
		case 0xF0: return _mm256_permute_ps(a, 0xF0);
		case 0xF1: return _mm256_permute_ps(a, 0xF1);
		case 0xF2: return _mm256_permute_ps(a, 0xF2);
		case 0xF3: return _mm256_permute_ps(a, 0xF3);
		case 0xF4: return _mm256_permute_ps(a, 0xF4);
		case 0xF5: return _mm256_permute_ps(a, 0xF5);
		case 0xF6: return _mm256_permute_ps(a, 0xF6);
		case 0xF7: return _mm256_permute_ps(a, 0xF7);
		case 0xF8: return _mm256_permute_ps(a, 0xF8);
		case 0xF9: return _mm256_permute_ps(a, 0xF9);
		case 0xFA: return _mm256_permute_ps(a, 0xFA);
		case 0xFB: return _mm256_permute_ps(a, 0xFB);
		case 0xFC: return _mm256_permute_ps(a, 0xFC);
		case 0xFD: return _mm256_permute_ps(a, 0xFD);
		case 0xFE: return _mm256_permute_ps(a, 0xFE);
		default:   return _mm256_permute_ps(a, 0xFF);
	}
}

__m256d avx256_permute2f128_pd(__m256d a, __m256d b, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_permute2f128_pd(a, b, 0x00);
		case 0x01: return _mm256_permute2f128_pd(a, b, 0x01);
		case 0x02: return _mm256_permute2f128_pd(a, b, 0x02);
		case 0x03: return _mm256_permute2f128_pd(a, b, 0x03);
		case 0x04: return _mm256_permute2f128_pd(a, b, 0x04);
		case 0x05: return _mm256_permute2f128_pd(a, b, 0x05);
		case 0x06: return _mm256_permute2f128_pd(a, b, 0x06);
		case 0x07: return _mm256_permute2f128_pd(a, b, 0x07);
		case 0x08: return _mm256_permute2f128_pd(a, b, 0x08);
		case 0x09: return _mm256_permute2f128_pd(a, b, 0x09);
		case 0x0A: return _mm256_permute2f128_pd(a, b, 0x0A);
		case 0x0B: return _mm256_permute2f128_pd(a, b, 0x0B);
		case 0x0C: return _mm256_permute2f128_pd(a, b, 0x0C);
		case 0x0D: return _mm256_permute2f128_pd(a, b, 0x0D);
		case 0x0E: return _mm256_permute2f128_pd(a, b, 0x0E);
		case 0x0F: return _mm256_permute2f128_pd(a, b, 0x0F);
		case 0x10: return _mm256_permute2f128_pd(a, b, 0x10);
		case 0x11: return _mm256_permute2f128_pd(a, b, 0x11);
		case 0x12: return _mm256_permute2f128_pd(a, b, 0x12);
		case 0x13: return _mm256_permute2f128_pd(a, b, 0x13);
		case 0x14: return _mm256_permute2f128_pd(a, b, 0x14);
		case 0x15: return _mm256_permute2f128_pd(a, b, 0x15);
		case 0x16: return _mm256_permute2f128_pd(a, b, 0x16);
		case 0x17: return _mm256_permute2f128_pd(a, b, 0x17);
		case 0x18: return _mm256_permute2f128_pd(a, b, 0x18);
		case 0x19: return _mm256_permute2f128_pd(a, b, 0x19);
		case 0x1A: return _mm256_permute2f128_pd(a, b, 0x1A);
		case 0x1B: return _mm256_permute2f128_pd(a, b, 0x1B);
		case 0x1C: return _mm256_permute2f128_pd(a, b, 0x1C);
		case 0x1D: return _mm256_permute2f128_pd(a, b, 0x1D);
		case 0x1E: return _mm256_permute2f128_pd(a, b, 0x1E);
		case 0x1F: return _mm256_permute2f128_pd(a, b, 0x1F);
		case 0x20: return _mm256_permute2f128_pd(a, b, 0x20);
		case 0x21: return _mm256_permute2f128_pd(a, b, 0x21);
		case 0x22: return _mm256_permute2f128_pd(a, b, 0x22);
		case 0x23: return _mm256_permute2f128_pd(a, b, 0x23);
		case 0x24: return _mm256_permute2f128_pd(a, b, 0x24);
		case 0x25: return _mm256_permute2f128_pd(a, b, 0x25);
		case 0x26: return _mm256_permute2f128_pd(a, b, 0x26);
		case 0x27: return _mm256_permute2f128_pd(a, b, 0x27);
		case 0x28: return _mm256_permute2f128_pd(a, b, 0x28);
		case 0x29: return _mm256_permute2f128_pd(a, b, 0x29);
		case 0x2A: return _mm256_permute2f128_pd(a, b, 0x2A);
		case 0x2B: return _mm256_permute2f128_pd(a, b, 0x2B);
		case 0x2C: return _mm256_permute2f128_pd(a, b, 0x2C);
		case 0x2D: return _mm256_permute2f128_pd(a, b, 0x2D);
		case 0x2E: return _mm256_permute2f128_pd(a, b, 0x2E);
		case 0x2F: return _mm256_permute2f128_pd(a, b, 0x2F);
		case 0x30: return _mm256_permute2f128_pd(a, b, 0x30);
		case 0x31: return _mm256_permute2f128_pd(a, b, 0x31);
		case 0x32: return _mm256_permute2f128_pd(a, b, 0x32);
		case 0x33: return _mm256_permute2f128_pd(a, b, 0x33);
		case 0x34: return _mm256_permute2f128_pd(a, b, 0x34);
		case 0x35: return _mm256_permute2f128_pd(a, b, 0x35);
		case 0x36: return _mm256_permute2f128_pd(a, b, 0x36);
		case 0x37: return _mm256_permute2f128_pd(a, b, 0x37);
		case 0x38: return _mm256_permute2f128_pd(a, b, 0x38);
		case 0x39: return _mm256_permute2f128_pd(a, b, 0x39);
		case 0x3A: return _mm256_permute2f128_pd(a, b, 0x3A);
		case 0x3B: return _mm256_permute2f128_pd(a, b, 0x3B);
		case 0x3C: return _mm256_permute2f128_pd(a, b, 0x3C);
		case 0x3D: return _mm256_permute2f128_pd(a, b, 0x3D);
		case 0x3E: return _mm256_permute2f128_pd(a, b, 0x3E);
		case 0x3F: return _mm256_permute2f128_pd(a, b, 0x3F);
		case 0x40: return _mm256_permute2f128_pd(a, b, 0x40);
		case 0x41: return _mm256_permute2f128_pd(a, b, 0x41);
		case 0x42: return _mm256_permute2f128_pd(a, b, 0x42);
		case 0x43: return _mm256_permute2f128_pd(a, b, 0x43);
		case 0x44: return _mm256_permute2f128_pd(a, b, 0x44);
		case 0x45: return _mm256_permute2f128_pd(a, b, 0x45);
		case 0x46: return _mm256_permute2f128_pd(a, b, 0x46);
		case 0x47: return _mm256_permute2f128_pd(a, b, 0x47);
		case 0x48: return _mm256_permute2f128_pd(a, b, 0x48);
		case 0x49: return _mm256_permute2f128_pd(a, b, 0x49);
		case 0x4A: return _mm256_permute2f128_pd(a, b, 0x4A);
		case 0x4B: return _mm256_permute2f128_pd(a, b, 0x4B);
		case 0x4C: return _mm256_permute2f128_pd(a, b, 0x4C);
		case 0x4D: return _mm256_permute2f128_pd(a, b, 0x4D);
		case 0x4E: return _mm256_permute2f128_pd(a, b, 0x4E);
		case 0x4F: return _mm256_permute2f128_pd(a, b, 0x4F);
		case 0x50: return _mm256_permute2f128_pd(a, b, 0x50);
		case 0x51: return _mm256_permute2f128_pd(a, b, 0x51);
		case 0x52: return _mm256_permute2f128_pd(a, b, 0x52);
		case 0x53: return _mm256_permute2f128_pd(a, b, 0x53);
		case 0x54: return _mm256_permute2f128_pd(a, b, 0x54);
		case 0x55: return _mm256_permute2f128_pd(a, b, 0x55);
		case 0x56: return _mm256_permute2f128_pd(a, b, 0x56);
		case 0x57: return _mm256_permute2f128_pd(a, b, 0x57);
		case 0x58: return _mm256_permute2f128_pd(a, b, 0x58);
		case 0x59: return _mm256_permute2f128_pd(a, b, 0x59);
		case 0x5A: return _mm256_permute2f128_pd(a, b, 0x5A);
		case 0x5B: return _mm256_permute2f128_pd(a, b, 0x5B);
		case 0x5C: return _mm256_permute2f128_pd(a, b, 0x5C);
		case 0x5D: return _mm256_permute2f128_pd(a, b, 0x5D);
		case 0x5E: return _mm256_permute2f128_pd(a, b, 0x5E);
		case 0x5F: return _mm256_permute2f128_pd(a, b, 0x5F);
		case 0x60: return _mm256_permute2f128_pd(a, b, 0x60);
		case 0x61: return _mm256_permute2f128_pd(a, b, 0x61);
		case 0x62: return _mm256_permute2f128_pd(a, b, 0x62);
		case 0x63: return _mm256_permute2f128_pd(a, b, 0x63);
		case 0x64: return _mm256_permute2f128_pd(a, b, 0x64);
		case 0x65: return _mm256_permute2f128_pd(a, b, 0x65);
		case 0x66: return _mm256_permute2f128_pd(a, b, 0x66);
		case 0x67: return _mm256_permute2f128_pd(a, b, 0x67);
		case 0x68: return _mm256_permute2f128_pd(a, b, 0x68);
		case 0x69: return _mm256_permute2f128_pd(a, b, 0x69);
		case 0x6A: return _mm256_permute2f128_pd(a, b, 0x6A);
		case 0x6B: return _mm256_permute2f128_pd(a, b, 0x6B);
		case 0x6C: return _mm256_permute2f128_pd(a, b, 0x6C);
		case 0x6D: return _mm256_permute2f128_pd(a, b, 0x6D);
		case 0x6E: return _mm256_permute2f128_pd(a, b, 0x6E);
		case 0x6F: return _mm256_permute2f128_pd(a, b, 0x6F);
		case 0x70: return _mm256_permute2f128_pd(a, b, 0x70);
		case 0x71: return _mm256_permute2f128_pd(a, b, 0x71);
		case 0x72: return _mm256_permute2f128_pd(a, b, 0x72);
		case 0x73: return _mm256_permute2f128_pd(a, b, 0x73);
		case 0x74: return _mm256_permute2f128_pd(a, b, 0x74);
		case 0x75: return _mm256_permute2f128_pd(a, b, 0x75);
		case 0x76: return _mm256_permute2f128_pd(a, b, 0x76);
		case 0x77: return _mm256_permute2f128_pd(a, b, 0x77);
		case 0x78: return _mm256_permute2f128_pd(a, b, 0x78);
		case 0x79: return _mm256_permute2f128_pd(a, b, 0x79);
		case 0x7A: return _mm256_permute2f128_pd(a, b, 0x7A);
		case 0x7B: return _mm256_permute2f128_pd(a, b, 0x7B);
		case 0x7C: return _mm256_permute2f128_pd(a, b, 0x7C);
		case 0x7D: return _mm256_permute2f128_pd(a, b, 0x7D);
		case 0x7E: return _mm256_permute2f128_pd(a, b, 0x7E);
		case 0x7F: return _mm256_permute2f128_pd(a, b, 0x7F);
		case 0x80: return _mm256_permute2f128_pd(a, b, 0x80);
		case 0x81: return _mm256_permute2f128_pd(a, b, 0x81);
		case 0x82: return _mm256_permute2f128_pd(a, b, 0x82);
		case 0x83: return _mm256_permute2f128_pd(a, b, 0x83);
		case 0x84: return _mm256_permute2f128_pd(a, b, 0x84);
		case 0x85: return _mm256_permute2f128_pd(a, b, 0x85);
		case 0x86: return _mm256_permute2f128_pd(a, b, 0x86);
		case 0x87: return _mm256_permute2f128_pd(a, b, 0x87);
		case 0x88: return _mm256_permute2f128_pd(a, b, 0x88);
		case 0x89: return _mm256_permute2f128_pd(a, b, 0x89);
		case 0x8A: return _mm256_permute2f128_pd(a, b, 0x8A);
		case 0x8B: return _mm256_permute2f128_pd(a, b, 0x8B);
		case 0x8C: return _mm256_permute2f128_pd(a, b, 0x8C);
		case 0x8D: return _mm256_permute2f128_pd(a, b, 0x8D);
		case 0x8E: return _mm256_permute2f128_pd(a, b, 0x8E);
		case 0x8F: return _mm256_permute2f128_pd(a, b, 0x8F);
		case 0x90: return _mm256_permute2f128_pd(a, b, 0x90);
		case 0x91: return _mm256_permute2f128_pd(a, b, 0x91);
		case 0x92: return _mm256_permute2f128_pd(a, b, 0x92);
		case 0x93: return _mm256_permute2f128_pd(a, b, 0x93);
		case 0x94: return _mm256_permute2f128_pd(a, b, 0x94);
		case 0x95: return _mm256_permute2f128_pd(a, b, 0x95);
		case 0x96: return _mm256_permute2f128_pd(a, b, 0x96);
		case 0x97: return _mm256_permute2f128_pd(a, b, 0x97);
		case 0x98: return _mm256_permute2f128_pd(a, b, 0x98);
		case 0x99: return _mm256_permute2f128_pd(a, b, 0x99);
		case 0x9A: return _mm256_permute2f128_pd(a, b, 0x9A);
		case 0x9B: return _mm256_permute2f128_pd(a, b, 0x9B);
		case 0x9C: return _mm256_permute2f128_pd(a, b, 0x9C);
		case 0x9D: return _mm256_permute2f128_pd(a, b, 0x9D);
		case 0x9E: return _mm256_permute2f128_pd(a, b, 0x9E);
		case 0x9F: return _mm256_permute2f128_pd(a, b, 0x9F);
		case 0xA0: return _mm256_permute2f128_pd(a, b, 0xA0);
		case 0xA1: return _mm256_permute2f128_pd(a, b, 0xA1);
		case 0xA2: return _mm256_permute2f128_pd(a, b, 0xA2);
		case 0xA3: return _mm256_permute2f128_pd(a, b, 0xA3);
		case 0xA4: return _mm256_permute2f128_pd(a, b, 0xA4);
		case 0xA5: return _mm256_permute2f128_pd(a, b, 0xA5);
		case 0xA6: return _mm256_permute2f128_pd(a, b, 0xA6);
		case 0xA7: return _mm256_permute2f128_pd(a, b, 0xA7);
		case 0xA8: return _mm256_permute2f128_pd(a, b, 0xA8);
		case 0xA9: return _mm256_permute2f128_pd(a, b, 0xA9);
		case 0xAA: return _mm256_permute2f128_pd(a, b, 0xAA);
		case 0xAB: return _mm256_permute2f128_pd(a, b, 0xAB);
		case 0xAC: return _mm256_permute2f128_pd(a, b, 0xAC);
		case 0xAD: return _mm256_permute2f128_pd(a, b, 0xAD);
		case 0xAE: return _mm256_permute2f128_pd(a, b, 0xAE);
		case 0xAF: return _mm256_permute2f128_pd(a, b, 0xAF);
		case 0xB0: return _mm256_permute2f128_pd(a, b, 0xB0);
		case 0xB1: return _mm256_permute2f128_pd(a, b, 0xB1);
		case 0xB2: return _mm256_permute2f128_pd(a, b, 0xB2);
		case 0xB3: return _mm256_permute2f128_pd(a, b, 0xB3);
		case 0xB4: return _mm256_permute2f128_pd(a, b, 0xB4);
		case 0xB5: return _mm256_permute2f128_pd(a, b, 0xB5);
		case 0xB6: return _mm256_permute2f128_pd(a, b, 0xB6);
		case 0xB7: return _mm256_permute2f128_pd(a, b, 0xB7);
		case 0xB8: return _mm256_permute2f128_pd(a, b, 0xB8);
		case 0xB9: return _mm256_permute2f128_pd(a, b, 0xB9);
		case 0xBA: return _mm256_permute2f128_pd(a, b, 0xBA);
		case 0xBB: return _mm256_permute2f128_pd(a, b, 0xBB);
		case 0xBC: return _mm256_permute2f128_pd(a, b, 0xBC);
		case 0xBD: return _mm256_permute2f128_pd(a, b, 0xBD);
		case 0xBE: return _mm256_permute2f128_pd(a, b, 0xBE);
		case 0xBF: return _mm256_permute2f128_pd(a, b, 0xBF);
		case 0xC0: return _mm256_permute2f128_pd(a, b, 0xC0);
		case 0xC1: return _mm256_permute2f128_pd(a, b, 0xC1);
		case 0xC2: return _mm256_permute2f128_pd(a, b, 0xC2);
		case 0xC3: return _mm256_permute2f128_pd(a, b, 0xC3);
		case 0xC4: return _mm256_permute2f128_pd(a, b, 0xC4);
		case 0xC5: return _mm256_permute2f128_pd(a, b, 0xC5);
		case 0xC6: return _mm256_permute2f128_pd(a, b, 0xC6);
		case 0xC7: return _mm256_permute2f128_pd(a, b, 0xC7);
		case 0xC8: return _mm256_permute2f128_pd(a, b, 0xC8);
		case 0xC9: return _mm256_permute2f128_pd(a, b, 0xC9);
		case 0xCA: return _mm256_permute2f128_pd(a, b, 0xCA);
		case 0xCB: return _mm256_permute2f128_pd(a, b, 0xCB);
		case 0xCC: return _mm256_permute2f128_pd(a, b, 0xCC);
		case 0xCD: return _mm256_permute2f128_pd(a, b, 0xCD);
		case 0xCE: return _mm256_permute2f128_pd(a, b, 0xCE);
		case 0xCF: return _mm256_permute2f128_pd(a, b, 0xCF);
		case 0xD0: return _mm256_permute2f128_pd(a, b, 0xD0);
		case 0xD1: return _mm256_permute2f128_pd(a, b, 0xD1);
		case 0xD2: return _mm256_permute2f128_pd(a, b, 0xD2);
		case 0xD3: return _mm256_permute2f128_pd(a, b, 0xD3);
		case 0xD4: return _mm256_permute2f128_pd(a, b, 0xD4);
		case 0xD5: return _mm256_permute2f128_pd(a, b, 0xD5);
		case 0xD6: return _mm256_permute2f128_pd(a, b, 0xD6);
		case 0xD7: return _mm256_permute2f128_pd(a, b, 0xD7);
		case 0xD8: return _mm256_permute2f128_pd(a, b, 0xD8);
		case 0xD9: return _mm256_permute2f128_pd(a, b, 0xD9);
		case 0xDA: return _mm256_permute2f128_pd(a, b, 0xDA);
		case 0xDB: return _mm256_permute2f128_pd(a, b, 0xDB);
		case 0xDC: return _mm256_permute2f128_pd(a, b, 0xDC);
		case 0xDD: return _mm256_permute2f128_pd(a, b, 0xDD);
		case 0xDE: return _mm256_permute2f128_pd(a, b, 0xDE);
		case 0xDF: return _mm256_permute2f128_pd(a, b, 0xDF);
		case 0xE0: return _mm256_permute2f128_pd(a, b, 0xE0);
		case 0xE1: return _mm256_permute2f128_pd(a, b, 0xE1);
		case 0xE2: return _mm256_permute2f128_pd(a, b, 0xE2);
		case 0xE3: return _mm256_permute2f128_pd(a, b, 0xE3);
		case 0xE4: return _mm256_permute2f128_pd(a, b, 0xE4);
		case 0xE5: return _mm256_permute2f128_pd(a, b, 0xE5);
		case 0xE6: return _mm256_permute2f128_pd(a, b, 0xE6);
		case 0xE7: return _mm256_permute2f128_pd(a, b, 0xE7);
		case 0xE8: return _mm256_permute2f128_pd(a, b, 0xE8);
		case 0xE9: return _mm256_permute2f128_pd(a, b, 0xE9);
		case 0xEA: return _mm256_permute2f128_pd(a, b, 0xEA);
		case 0xEB: return _mm256_permute2f128_pd(a, b, 0xEB);
		case 0xEC: return _mm256_permute2f128_pd(a, b, 0xEC);
		case 0xED: return _mm256_permute2f128_pd(a, b, 0xED);
		case 0xEE: return _mm256_permute2f128_pd(a, b, 0xEE);
		case 0xEF: return _mm256_permute2f128_pd(a, b, 0xEF);
		case 0xF0: return _mm256_permute2f128_pd(a, b, 0xF0);
		case 0xF1: return _mm256_permute2f128_pd(a, b, 0xF1);
		case 0xF2: return _mm256_permute2f128_pd(a, b, 0xF2);
		case 0xF3: return _mm256_permute2f128_pd(a, b, 0xF3);
		case 0xF4: return _mm256_permute2f128_pd(a, b, 0xF4);
		case 0xF5: return _mm256_permute2f128_pd(a, b, 0xF5);
		case 0xF6: return _mm256_permute2f128_pd(a, b, 0xF6);
		case 0xF7: return _mm256_permute2f128_pd(a, b, 0xF7);
		case 0xF8: return _mm256_permute2f128_pd(a, b, 0xF8);
		case 0xF9: return _mm256_permute2f128_pd(a, b, 0xF9);
		case 0xFA: return _mm256_permute2f128_pd(a, b, 0xFA);
		case 0xFB: return _mm256_permute2f128_pd(a, b, 0xFB);
		case 0xFC: return _mm256_permute2f128_pd(a, b, 0xFC);
		case 0xFD: return _mm256_permute2f128_pd(a, b, 0xFD);
		case 0xFE: return _mm256_permute2f128_pd(a, b, 0xFE);
		default:   return _mm256_permute2f128_pd(a, b, 0xFF);
	}
}

__m256 avx256_permute2f128_ps(__m256 a, __m256 b, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_permute2f128_ps(a, b, 0x00);
		case 0x01: return _mm256_permute2f128_ps(a, b, 0x01);
		case 0x02: return _mm256_permute2f128_ps(a, b, 0x02);
		case 0x03: return _mm256_permute2f128_ps(a, b, 0x03);
		case 0x04: return _mm256_permute2f128_ps(a, b, 0x04);
		case 0x05: return _mm256_permute2f128_ps(a, b, 0x05);
		case 0x06: return _mm256_permute2f128_ps(a, b, 0x06);
		case 0x07: return _mm256_permute2f128_ps(a, b, 0x07);
		case 0x08: return _mm256_permute2f128_ps(a, b, 0x08);
		case 0x09: return _mm256_permute2f128_ps(a, b, 0x09);
		case 0x0A: return _mm256_permute2f128_ps(a, b, 0x0A);
		case 0x0B: return _mm256_permute2f128_ps(a, b, 0x0B);
		case 0x0C: return _mm256_permute2f128_ps(a, b, 0x0C);
		case 0x0D: return _mm256_permute2f128_ps(a, b, 0x0D);
		case 0x0E: return _mm256_permute2f128_ps(a, b, 0x0E);
		case 0x0F: return _mm256_permute2f128_ps(a, b, 0x0F);
		case 0x10: return _mm256_permute2f128_ps(a, b, 0x10);
		case 0x11: return _mm256_permute2f128_ps(a, b, 0x11);
		case 0x12: return _mm256_permute2f128_ps(a, b, 0x12);
		case 0x13: return _mm256_permute2f128_ps(a, b, 0x13);
		case 0x14: return _mm256_permute2f128_ps(a, b, 0x14);
		case 0x15: return _mm256_permute2f128_ps(a, b, 0x15);
		case 0x16: return _mm256_permute2f128_ps(a, b, 0x16);
		case 0x17: return _mm256_permute2f128_ps(a, b, 0x17);
		case 0x18: return _mm256_permute2f128_ps(a, b, 0x18);
		case 0x19: return _mm256_permute2f128_ps(a, b, 0x19);
		case 0x1A: return _mm256_permute2f128_ps(a, b, 0x1A);
		case 0x1B: return _mm256_permute2f128_ps(a, b, 0x1B);
		case 0x1C: return _mm256_permute2f128_ps(a, b, 0x1C);
		case 0x1D: return _mm256_permute2f128_ps(a, b, 0x1D);
		case 0x1E: return _mm256_permute2f128_ps(a, b, 0x1E);
		case 0x1F: return _mm256_permute2f128_ps(a, b, 0x1F);
		case 0x20: return _mm256_permute2f128_ps(a, b, 0x20);
		case 0x21: return _mm256_permute2f128_ps(a, b, 0x21);
		case 0x22: return _mm256_permute2f128_ps(a, b, 0x22);
		case 0x23: return _mm256_permute2f128_ps(a, b, 0x23);
		case 0x24: return _mm256_permute2f128_ps(a, b, 0x24);
		case 0x25: return _mm256_permute2f128_ps(a, b, 0x25);
		case 0x26: return _mm256_permute2f128_ps(a, b, 0x26);
		case 0x27: return _mm256_permute2f128_ps(a, b, 0x27);
		case 0x28: return _mm256_permute2f128_ps(a, b, 0x28);
		case 0x29: return _mm256_permute2f128_ps(a, b, 0x29);
		case 0x2A: return _mm256_permute2f128_ps(a, b, 0x2A);
		case 0x2B: return _mm256_permute2f128_ps(a, b, 0x2B);
		case 0x2C: return _mm256_permute2f128_ps(a, b, 0x2C);
		case 0x2D: return _mm256_permute2f128_ps(a, b, 0x2D);
		case 0x2E: return _mm256_permute2f128_ps(a, b, 0x2E);
		case 0x2F: return _mm256_permute2f128_ps(a, b, 0x2F);
		case 0x30: return _mm256_permute2f128_ps(a, b, 0x30);
		case 0x31: return _mm256_permute2f128_ps(a, b, 0x31);
		case 0x32: return _mm256_permute2f128_ps(a, b, 0x32);
		case 0x33: return _mm256_permute2f128_ps(a, b, 0x33);
		case 0x34: return _mm256_permute2f128_ps(a, b, 0x34);
		case 0x35: return _mm256_permute2f128_ps(a, b, 0x35);
		case 0x36: return _mm256_permute2f128_ps(a, b, 0x36);
		case 0x37: return _mm256_permute2f128_ps(a, b, 0x37);
		case 0x38: return _mm256_permute2f128_ps(a, b, 0x38);
		case 0x39: return _mm256_permute2f128_ps(a, b, 0x39);
		case 0x3A: return _mm256_permute2f128_ps(a, b, 0x3A);
		case 0x3B: return _mm256_permute2f128_ps(a, b, 0x3B);
		case 0x3C: return _mm256_permute2f128_ps(a, b, 0x3C);
		case 0x3D: return _mm256_permute2f128_ps(a, b, 0x3D);
		case 0x3E: return _mm256_permute2f128_ps(a, b, 0x3E);
		case 0x3F: return _mm256_permute2f128_ps(a, b, 0x3F);
		case 0x40: return _mm256_permute2f128_ps(a, b, 0x40);
		case 0x41: return _mm256_permute2f128_ps(a, b, 0x41);
		case 0x42: return _mm256_permute2f128_ps(a, b, 0x42);
		case 0x43: return _mm256_permute2f128_ps(a, b, 0x43);
		case 0x44: return _mm256_permute2f128_ps(a, b, 0x44);
		case 0x45: return _mm256_permute2f128_ps(a, b, 0x45);
		case 0x46: return _mm256_permute2f128_ps(a, b, 0x46);
		case 0x47: return _mm256_permute2f128_ps(a, b, 0x47);
		case 0x48: return _mm256_permute2f128_ps(a, b, 0x48);
		case 0x49: return _mm256_permute2f128_ps(a, b, 0x49);
		case 0x4A: return _mm256_permute2f128_ps(a, b, 0x4A);
		case 0x4B: return _mm256_permute2f128_ps(a, b, 0x4B);
		case 0x4C: return _mm256_permute2f128_ps(a, b, 0x4C);
		case 0x4D: return _mm256_permute2f128_ps(a, b, 0x4D);
		case 0x4E: return _mm256_permute2f128_ps(a, b, 0x4E);
		case 0x4F: return _mm256_permute2f128_ps(a, b, 0x4F);
		case 0x50: return _mm256_permute2f128_ps(a, b, 0x50);
		case 0x51: return _mm256_permute2f128_ps(a, b, 0x51);
		case 0x52: return _mm256_permute2f128_ps(a, b, 0x52);
		case 0x53: return _mm256_permute2f128_ps(a, b, 0x53);
		case 0x54: return _mm256_permute2f128_ps(a, b, 0x54);
		case 0x55: return _mm256_permute2f128_ps(a, b, 0x55);
		case 0x56: return _mm256_permute2f128_ps(a, b, 0x56);
		case 0x57: return _mm256_permute2f128_ps(a, b, 0x57);
		case 0x58: return _mm256_permute2f128_ps(a, b, 0x58);
		case 0x59: return _mm256_permute2f128_ps(a, b, 0x59);
		case 0x5A: return _mm256_permute2f128_ps(a, b, 0x5A);
		case 0x5B: return _mm256_permute2f128_ps(a, b, 0x5B);
		case 0x5C: return _mm256_permute2f128_ps(a, b, 0x5C);
		case 0x5D: return _mm256_permute2f128_ps(a, b, 0x5D);
		case 0x5E: return _mm256_permute2f128_ps(a, b, 0x5E);
		case 0x5F: return _mm256_permute2f128_ps(a, b, 0x5F);
		case 0x60: return _mm256_permute2f128_ps(a, b, 0x60);
		case 0x61: return _mm256_permute2f128_ps(a, b, 0x61);
		case 0x62: return _mm256_permute2f128_ps(a, b, 0x62);
		case 0x63: return _mm256_permute2f128_ps(a, b, 0x63);
		case 0x64: return _mm256_permute2f128_ps(a, b, 0x64);
		case 0x65: return _mm256_permute2f128_ps(a, b, 0x65);
		case 0x66: return _mm256_permute2f128_ps(a, b, 0x66);
		case 0x67: return _mm256_permute2f128_ps(a, b, 0x67);
		case 0x68: return _mm256_permute2f128_ps(a, b, 0x68);
		case 0x69: return _mm256_permute2f128_ps(a, b, 0x69);
		case 0x6A: return _mm256_permute2f128_ps(a, b, 0x6A);
		case 0x6B: return _mm256_permute2f128_ps(a, b, 0x6B);
		case 0x6C: return _mm256_permute2f128_ps(a, b, 0x6C);
		case 0x6D: return _mm256_permute2f128_ps(a, b, 0x6D);
		case 0x6E: return _mm256_permute2f128_ps(a, b, 0x6E);
		case 0x6F: return _mm256_permute2f128_ps(a, b, 0x6F);
		case 0x70: return _mm256_permute2f128_ps(a, b, 0x70);
		case 0x71: return _mm256_permute2f128_ps(a, b, 0x71);
		case 0x72: return _mm256_permute2f128_ps(a, b, 0x72);
		case 0x73: return _mm256_permute2f128_ps(a, b, 0x73);
		case 0x74: return _mm256_permute2f128_ps(a, b, 0x74);
		case 0x75: return _mm256_permute2f128_ps(a, b, 0x75);
		case 0x76: return _mm256_permute2f128_ps(a, b, 0x76);
		case 0x77: return _mm256_permute2f128_ps(a, b, 0x77);
		case 0x78: return _mm256_permute2f128_ps(a, b, 0x78);
		case 0x79: return _mm256_permute2f128_ps(a, b, 0x79);
		case 0x7A: return _mm256_permute2f128_ps(a, b, 0x7A);
		case 0x7B: return _mm256_permute2f128_ps(a, b, 0x7B);
		case 0x7C: return _mm256_permute2f128_ps(a, b, 0x7C);
		case 0x7D: return _mm256_permute2f128_ps(a, b, 0x7D);
		case 0x7E: return _mm256_permute2f128_ps(a, b, 0x7E);
		case 0x7F: return _mm256_permute2f128_ps(a, b, 0x7F);
		case 0x80: return _mm256_permute2f128_ps(a, b, 0x80);
		case 0x81: return _mm256_permute2f128_ps(a, b, 0x81);
		case 0x82: return _mm256_permute2f128_ps(a, b, 0x82);
		case 0x83: return _mm256_permute2f128_ps(a, b, 0x83);
		case 0x84: return _mm256_permute2f128_ps(a, b, 0x84);
		case 0x85: return _mm256_permute2f128_ps(a, b, 0x85);
		case 0x86: return _mm256_permute2f128_ps(a, b, 0x86);
		case 0x87: return _mm256_permute2f128_ps(a, b, 0x87);
		case 0x88: return _mm256_permute2f128_ps(a, b, 0x88);
		case 0x89: return _mm256_permute2f128_ps(a, b, 0x89);
		case 0x8A: return _mm256_permute2f128_ps(a, b, 0x8A);
		case 0x8B: return _mm256_permute2f128_ps(a, b, 0x8B);
		case 0x8C: return _mm256_permute2f128_ps(a, b, 0x8C);
		case 0x8D: return _mm256_permute2f128_ps(a, b, 0x8D);
		case 0x8E: return _mm256_permute2f128_ps(a, b, 0x8E);
		case 0x8F: return _mm256_permute2f128_ps(a, b, 0x8F);
		case 0x90: return _mm256_permute2f128_ps(a, b, 0x90);
		case 0x91: return _mm256_permute2f128_ps(a, b, 0x91);
		case 0x92: return _mm256_permute2f128_ps(a, b, 0x92);
		case 0x93: return _mm256_permute2f128_ps(a, b, 0x93);
		case 0x94: return _mm256_permute2f128_ps(a, b, 0x94);
		case 0x95: return _mm256_permute2f128_ps(a, b, 0x95);
		case 0x96: return _mm256_permute2f128_ps(a, b, 0x96);
		case 0x97: return _mm256_permute2f128_ps(a, b, 0x97);
		case 0x98: return _mm256_permute2f128_ps(a, b, 0x98);
		case 0x99: return _mm256_permute2f128_ps(a, b, 0x99);
		case 0x9A: return _mm256_permute2f128_ps(a, b, 0x9A);
		case 0x9B: return _mm256_permute2f128_ps(a, b, 0x9B);
		case 0x9C: return _mm256_permute2f128_ps(a, b, 0x9C);
		case 0x9D: return _mm256_permute2f128_ps(a, b, 0x9D);
		case 0x9E: return _mm256_permute2f128_ps(a, b, 0x9E);
		case 0x9F: return _mm256_permute2f128_ps(a, b, 0x9F);
		case 0xA0: return _mm256_permute2f128_ps(a, b, 0xA0);
		case 0xA1: return _mm256_permute2f128_ps(a, b, 0xA1);
		case 0xA2: return _mm256_permute2f128_ps(a, b, 0xA2);
		case 0xA3: return _mm256_permute2f128_ps(a, b, 0xA3);
		case 0xA4: return _mm256_permute2f128_ps(a, b, 0xA4);
		case 0xA5: return _mm256_permute2f128_ps(a, b, 0xA5);
		case 0xA6: return _mm256_permute2f128_ps(a, b, 0xA6);
		case 0xA7: return _mm256_permute2f128_ps(a, b, 0xA7);
		case 0xA8: return _mm256_permute2f128_ps(a, b, 0xA8);
		case 0xA9: return _mm256_permute2f128_ps(a, b, 0xA9);
		case 0xAA: return _mm256_permute2f128_ps(a, b, 0xAA);
		case 0xAB: return _mm256_permute2f128_ps(a, b, 0xAB);
		case 0xAC: return _mm256_permute2f128_ps(a, b, 0xAC);
		case 0xAD: return _mm256_permute2f128_ps(a, b, 0xAD);
		case 0xAE: return _mm256_permute2f128_ps(a, b, 0xAE);
		case 0xAF: return _mm256_permute2f128_ps(a, b, 0xAF);
		case 0xB0: return _mm256_permute2f128_ps(a, b, 0xB0);
		case 0xB1: return _mm256_permute2f128_ps(a, b, 0xB1);
		case 0xB2: return _mm256_permute2f128_ps(a, b, 0xB2);
		case 0xB3: return _mm256_permute2f128_ps(a, b, 0xB3);
		case 0xB4: return _mm256_permute2f128_ps(a, b, 0xB4);
		case 0xB5: return _mm256_permute2f128_ps(a, b, 0xB5);
		case 0xB6: return _mm256_permute2f128_ps(a, b, 0xB6);
		case 0xB7: return _mm256_permute2f128_ps(a, b, 0xB7);
		case 0xB8: return _mm256_permute2f128_ps(a, b, 0xB8);
		case 0xB9: return _mm256_permute2f128_ps(a, b, 0xB9);
		case 0xBA: return _mm256_permute2f128_ps(a, b, 0xBA);
		case 0xBB: return _mm256_permute2f128_ps(a, b, 0xBB);
		case 0xBC: return _mm256_permute2f128_ps(a, b, 0xBC);
		case 0xBD: return _mm256_permute2f128_ps(a, b, 0xBD);
		case 0xBE: return _mm256_permute2f128_ps(a, b, 0xBE);
		case 0xBF: return _mm256_permute2f128_ps(a, b, 0xBF);
		case 0xC0: return _mm256_permute2f128_ps(a, b, 0xC0);
		case 0xC1: return _mm256_permute2f128_ps(a, b, 0xC1);
		case 0xC2: return _mm256_permute2f128_ps(a, b, 0xC2);
		case 0xC3: return _mm256_permute2f128_ps(a, b, 0xC3);
		case 0xC4: return _mm256_permute2f128_ps(a, b, 0xC4);
		case 0xC5: return _mm256_permute2f128_ps(a, b, 0xC5);
		case 0xC6: return _mm256_permute2f128_ps(a, b, 0xC6);
		case 0xC7: return _mm256_permute2f128_ps(a, b, 0xC7);
		case 0xC8: return _mm256_permute2f128_ps(a, b, 0xC8);
		case 0xC9: return _mm256_permute2f128_ps(a, b, 0xC9);
		case 0xCA: return _mm256_permute2f128_ps(a, b, 0xCA);
		case 0xCB: return _mm256_permute2f128_ps(a, b, 0xCB);
		case 0xCC: return _mm256_permute2f128_ps(a, b, 0xCC);
		case 0xCD: return _mm256_permute2f128_ps(a, b, 0xCD);
		case 0xCE: return _mm256_permute2f128_ps(a, b, 0xCE);
		case 0xCF: return _mm256_permute2f128_ps(a, b, 0xCF);
		case 0xD0: return _mm256_permute2f128_ps(a, b, 0xD0);
		case 0xD1: return _mm256_permute2f128_ps(a, b, 0xD1);
		case 0xD2: return _mm256_permute2f128_ps(a, b, 0xD2);
		case 0xD3: return _mm256_permute2f128_ps(a, b, 0xD3);
		case 0xD4: return _mm256_permute2f128_ps(a, b, 0xD4);
		case 0xD5: return _mm256_permute2f128_ps(a, b, 0xD5);
		case 0xD6: return _mm256_permute2f128_ps(a, b, 0xD6);
		case 0xD7: return _mm256_permute2f128_ps(a, b, 0xD7);
		case 0xD8: return _mm256_permute2f128_ps(a, b, 0xD8);
		case 0xD9: return _mm256_permute2f128_ps(a, b, 0xD9);
		case 0xDA: return _mm256_permute2f128_ps(a, b, 0xDA);
		case 0xDB: return _mm256_permute2f128_ps(a, b, 0xDB);
		case 0xDC: return _mm256_permute2f128_ps(a, b, 0xDC);
		case 0xDD: return _mm256_permute2f128_ps(a, b, 0xDD);
		case 0xDE: return _mm256_permute2f128_ps(a, b, 0xDE);
		case 0xDF: return _mm256_permute2f128_ps(a, b, 0xDF);
		case 0xE0: return _mm256_permute2f128_ps(a, b, 0xE0);
		case 0xE1: return _mm256_permute2f128_ps(a, b, 0xE1);
		case 0xE2: return _mm256_permute2f128_ps(a, b, 0xE2);
		case 0xE3: return _mm256_permute2f128_ps(a, b, 0xE3);
		case 0xE4: return _mm256_permute2f128_ps(a, b, 0xE4);
		case 0xE5: return _mm256_permute2f128_ps(a, b, 0xE5);
		case 0xE6: return _mm256_permute2f128_ps(a, b, 0xE6);
		case 0xE7: return _mm256_permute2f128_ps(a, b, 0xE7);
		case 0xE8: return _mm256_permute2f128_ps(a, b, 0xE8);
		case 0xE9: return _mm256_permute2f128_ps(a, b, 0xE9);
		case 0xEA: return _mm256_permute2f128_ps(a, b, 0xEA);
		case 0xEB: return _mm256_permute2f128_ps(a, b, 0xEB);
		case 0xEC: return _mm256_permute2f128_ps(a, b, 0xEC);
		case 0xED: return _mm256_permute2f128_ps(a, b, 0xED);
		case 0xEE: return _mm256_permute2f128_ps(a, b, 0xEE);
		case 0xEF: return _mm256_permute2f128_ps(a, b, 0xEF);
		case 0xF0: return _mm256_permute2f128_ps(a, b, 0xF0);
		case 0xF1: return _mm256_permute2f128_ps(a, b, 0xF1);
		case 0xF2: return _mm256_permute2f128_ps(a, b, 0xF2);
		case 0xF3: return _mm256_permute2f128_ps(a, b, 0xF3);
		case 0xF4: return _mm256_permute2f128_ps(a, b, 0xF4);
		case 0xF5: return _mm256_permute2f128_ps(a, b, 0xF5);
		case 0xF6: return _mm256_permute2f128_ps(a, b, 0xF6);
		case 0xF7: return _mm256_permute2f128_ps(a, b, 0xF7);
		case 0xF8: return _mm256_permute2f128_ps(a, b, 0xF8);
		case 0xF9: return _mm256_permute2f128_ps(a, b, 0xF9);
		case 0xFA: return _mm256_permute2f128_ps(a, b, 0xFA);
		case 0xFB: return _mm256_permute2f128_ps(a, b, 0xFB);
		case 0xFC: return _mm256_permute2f128_ps(a, b, 0xFC);
		case 0xFD: return _mm256_permute2f128_ps(a, b, 0xFD);
		case 0xFE: return _mm256_permute2f128_ps(a, b, 0xFE);
		default:   return _mm256_permute2f128_ps(a, b, 0xFF);
	}
}

__m256i avx256_permute2f128_si256(__m256i a, __m256i b, int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_permute2f128_si256(a, b, 0x00);
		case 0x01: return _mm256_permute2f128_si256(a, b, 0x01);
		case 0x02: return _mm256_permute2f128_si256(a, b, 0x02);
		case 0x03: return _mm256_permute2f128_si256(a, b, 0x03);
		case 0x04: return _mm256_permute2f128_si256(a, b, 0x04);
		case 0x05: return _mm256_permute2f128_si256(a, b, 0x05);
		case 0x06: return _mm256_permute2f128_si256(a, b, 0x06);
		case 0x07: return _mm256_permute2f128_si256(a, b, 0x07);
		case 0x08: return _mm256_permute2f128_si256(a, b, 0x08);
		case 0x09: return _mm256_permute2f128_si256(a, b, 0x09);
		case 0x0A: return _mm256_permute2f128_si256(a, b, 0x0A);
		case 0x0B: return _mm256_permute2f128_si256(a, b, 0x0B);
		case 0x0C: return _mm256_permute2f128_si256(a, b, 0x0C);
		case 0x0D: return _mm256_permute2f128_si256(a, b, 0x0D);
		case 0x0E: return _mm256_permute2f128_si256(a, b, 0x0E);
		case 0x0F: return _mm256_permute2f128_si256(a, b, 0x0F);
		case 0x10: return _mm256_permute2f128_si256(a, b, 0x10);
		case 0x11: return _mm256_permute2f128_si256(a, b, 0x11);
		case 0x12: return _mm256_permute2f128_si256(a, b, 0x12);
		case 0x13: return _mm256_permute2f128_si256(a, b, 0x13);
		case 0x14: return _mm256_permute2f128_si256(a, b, 0x14);
		case 0x15: return _mm256_permute2f128_si256(a, b, 0x15);
		case 0x16: return _mm256_permute2f128_si256(a, b, 0x16);
		case 0x17: return _mm256_permute2f128_si256(a, b, 0x17);
		case 0x18: return _mm256_permute2f128_si256(a, b, 0x18);
		case 0x19: return _mm256_permute2f128_si256(a, b, 0x19);
		case 0x1A: return _mm256_permute2f128_si256(a, b, 0x1A);
		case 0x1B: return _mm256_permute2f128_si256(a, b, 0x1B);
		case 0x1C: return _mm256_permute2f128_si256(a, b, 0x1C);
		case 0x1D: return _mm256_permute2f128_si256(a, b, 0x1D);
		case 0x1E: return _mm256_permute2f128_si256(a, b, 0x1E);
		case 0x1F: return _mm256_permute2f128_si256(a, b, 0x1F);
		case 0x20: return _mm256_permute2f128_si256(a, b, 0x20);
		case 0x21: return _mm256_permute2f128_si256(a, b, 0x21);
		case 0x22: return _mm256_permute2f128_si256(a, b, 0x22);
		case 0x23: return _mm256_permute2f128_si256(a, b, 0x23);
		case 0x24: return _mm256_permute2f128_si256(a, b, 0x24);
		case 0x25: return _mm256_permute2f128_si256(a, b, 0x25);
		case 0x26: return _mm256_permute2f128_si256(a, b, 0x26);
		case 0x27: return _mm256_permute2f128_si256(a, b, 0x27);
		case 0x28: return _mm256_permute2f128_si256(a, b, 0x28);
		case 0x29: return _mm256_permute2f128_si256(a, b, 0x29);
		case 0x2A: return _mm256_permute2f128_si256(a, b, 0x2A);
		case 0x2B: return _mm256_permute2f128_si256(a, b, 0x2B);
		case 0x2C: return _mm256_permute2f128_si256(a, b, 0x2C);
		case 0x2D: return _mm256_permute2f128_si256(a, b, 0x2D);
		case 0x2E: return _mm256_permute2f128_si256(a, b, 0x2E);
		case 0x2F: return _mm256_permute2f128_si256(a, b, 0x2F);
		case 0x30: return _mm256_permute2f128_si256(a, b, 0x30);
		case 0x31: return _mm256_permute2f128_si256(a, b, 0x31);
		case 0x32: return _mm256_permute2f128_si256(a, b, 0x32);
		case 0x33: return _mm256_permute2f128_si256(a, b, 0x33);
		case 0x34: return _mm256_permute2f128_si256(a, b, 0x34);
		case 0x35: return _mm256_permute2f128_si256(a, b, 0x35);
		case 0x36: return _mm256_permute2f128_si256(a, b, 0x36);
		case 0x37: return _mm256_permute2f128_si256(a, b, 0x37);
		case 0x38: return _mm256_permute2f128_si256(a, b, 0x38);
		case 0x39: return _mm256_permute2f128_si256(a, b, 0x39);
		case 0x3A: return _mm256_permute2f128_si256(a, b, 0x3A);
		case 0x3B: return _mm256_permute2f128_si256(a, b, 0x3B);
		case 0x3C: return _mm256_permute2f128_si256(a, b, 0x3C);
		case 0x3D: return _mm256_permute2f128_si256(a, b, 0x3D);
		case 0x3E: return _mm256_permute2f128_si256(a, b, 0x3E);
		case 0x3F: return _mm256_permute2f128_si256(a, b, 0x3F);
		case 0x40: return _mm256_permute2f128_si256(a, b, 0x40);
		case 0x41: return _mm256_permute2f128_si256(a, b, 0x41);
		case 0x42: return _mm256_permute2f128_si256(a, b, 0x42);
		case 0x43: return _mm256_permute2f128_si256(a, b, 0x43);
		case 0x44: return _mm256_permute2f128_si256(a, b, 0x44);
		case 0x45: return _mm256_permute2f128_si256(a, b, 0x45);
		case 0x46: return _mm256_permute2f128_si256(a, b, 0x46);
		case 0x47: return _mm256_permute2f128_si256(a, b, 0x47);
		case 0x48: return _mm256_permute2f128_si256(a, b, 0x48);
		case 0x49: return _mm256_permute2f128_si256(a, b, 0x49);
		case 0x4A: return _mm256_permute2f128_si256(a, b, 0x4A);
		case 0x4B: return _mm256_permute2f128_si256(a, b, 0x4B);
		case 0x4C: return _mm256_permute2f128_si256(a, b, 0x4C);
		case 0x4D: return _mm256_permute2f128_si256(a, b, 0x4D);
		case 0x4E: return _mm256_permute2f128_si256(a, b, 0x4E);
		case 0x4F: return _mm256_permute2f128_si256(a, b, 0x4F);
		case 0x50: return _mm256_permute2f128_si256(a, b, 0x50);
		case 0x51: return _mm256_permute2f128_si256(a, b, 0x51);
		case 0x52: return _mm256_permute2f128_si256(a, b, 0x52);
		case 0x53: return _mm256_permute2f128_si256(a, b, 0x53);
		case 0x54: return _mm256_permute2f128_si256(a, b, 0x54);
		case 0x55: return _mm256_permute2f128_si256(a, b, 0x55);
		case 0x56: return _mm256_permute2f128_si256(a, b, 0x56);
		case 0x57: return _mm256_permute2f128_si256(a, b, 0x57);
		case 0x58: return _mm256_permute2f128_si256(a, b, 0x58);
		case 0x59: return _mm256_permute2f128_si256(a, b, 0x59);
		case 0x5A: return _mm256_permute2f128_si256(a, b, 0x5A);
		case 0x5B: return _mm256_permute2f128_si256(a, b, 0x5B);
		case 0x5C: return _mm256_permute2f128_si256(a, b, 0x5C);
		case 0x5D: return _mm256_permute2f128_si256(a, b, 0x5D);
		case 0x5E: return _mm256_permute2f128_si256(a, b, 0x5E);
		case 0x5F: return _mm256_permute2f128_si256(a, b, 0x5F);
		case 0x60: return _mm256_permute2f128_si256(a, b, 0x60);
		case 0x61: return _mm256_permute2f128_si256(a, b, 0x61);
		case 0x62: return _mm256_permute2f128_si256(a, b, 0x62);
		case 0x63: return _mm256_permute2f128_si256(a, b, 0x63);
		case 0x64: return _mm256_permute2f128_si256(a, b, 0x64);
		case 0x65: return _mm256_permute2f128_si256(a, b, 0x65);
		case 0x66: return _mm256_permute2f128_si256(a, b, 0x66);
		case 0x67: return _mm256_permute2f128_si256(a, b, 0x67);
		case 0x68: return _mm256_permute2f128_si256(a, b, 0x68);
		case 0x69: return _mm256_permute2f128_si256(a, b, 0x69);
		case 0x6A: return _mm256_permute2f128_si256(a, b, 0x6A);
		case 0x6B: return _mm256_permute2f128_si256(a, b, 0x6B);
		case 0x6C: return _mm256_permute2f128_si256(a, b, 0x6C);
		case 0x6D: return _mm256_permute2f128_si256(a, b, 0x6D);
		case 0x6E: return _mm256_permute2f128_si256(a, b, 0x6E);
		case 0x6F: return _mm256_permute2f128_si256(a, b, 0x6F);
		case 0x70: return _mm256_permute2f128_si256(a, b, 0x70);
		case 0x71: return _mm256_permute2f128_si256(a, b, 0x71);
		case 0x72: return _mm256_permute2f128_si256(a, b, 0x72);
		case 0x73: return _mm256_permute2f128_si256(a, b, 0x73);
		case 0x74: return _mm256_permute2f128_si256(a, b, 0x74);
		case 0x75: return _mm256_permute2f128_si256(a, b, 0x75);
		case 0x76: return _mm256_permute2f128_si256(a, b, 0x76);
		case 0x77: return _mm256_permute2f128_si256(a, b, 0x77);
		case 0x78: return _mm256_permute2f128_si256(a, b, 0x78);
		case 0x79: return _mm256_permute2f128_si256(a, b, 0x79);
		case 0x7A: return _mm256_permute2f128_si256(a, b, 0x7A);
		case 0x7B: return _mm256_permute2f128_si256(a, b, 0x7B);
		case 0x7C: return _mm256_permute2f128_si256(a, b, 0x7C);
		case 0x7D: return _mm256_permute2f128_si256(a, b, 0x7D);
		case 0x7E: return _mm256_permute2f128_si256(a, b, 0x7E);
		case 0x7F: return _mm256_permute2f128_si256(a, b, 0x7F);
		case 0x80: return _mm256_permute2f128_si256(a, b, 0x80);
		case 0x81: return _mm256_permute2f128_si256(a, b, 0x81);
		case 0x82: return _mm256_permute2f128_si256(a, b, 0x82);
		case 0x83: return _mm256_permute2f128_si256(a, b, 0x83);
		case 0x84: return _mm256_permute2f128_si256(a, b, 0x84);
		case 0x85: return _mm256_permute2f128_si256(a, b, 0x85);
		case 0x86: return _mm256_permute2f128_si256(a, b, 0x86);
		case 0x87: return _mm256_permute2f128_si256(a, b, 0x87);
		case 0x88: return _mm256_permute2f128_si256(a, b, 0x88);
		case 0x89: return _mm256_permute2f128_si256(a, b, 0x89);
		case 0x8A: return _mm256_permute2f128_si256(a, b, 0x8A);
		case 0x8B: return _mm256_permute2f128_si256(a, b, 0x8B);
		case 0x8C: return _mm256_permute2f128_si256(a, b, 0x8C);
		case 0x8D: return _mm256_permute2f128_si256(a, b, 0x8D);
		case 0x8E: return _mm256_permute2f128_si256(a, b, 0x8E);
		case 0x8F: return _mm256_permute2f128_si256(a, b, 0x8F);
		case 0x90: return _mm256_permute2f128_si256(a, b, 0x90);
		case 0x91: return _mm256_permute2f128_si256(a, b, 0x91);
		case 0x92: return _mm256_permute2f128_si256(a, b, 0x92);
		case 0x93: return _mm256_permute2f128_si256(a, b, 0x93);
		case 0x94: return _mm256_permute2f128_si256(a, b, 0x94);
		case 0x95: return _mm256_permute2f128_si256(a, b, 0x95);
		case 0x96: return _mm256_permute2f128_si256(a, b, 0x96);
		case 0x97: return _mm256_permute2f128_si256(a, b, 0x97);
		case 0x98: return _mm256_permute2f128_si256(a, b, 0x98);
		case 0x99: return _mm256_permute2f128_si256(a, b, 0x99);
		case 0x9A: return _mm256_permute2f128_si256(a, b, 0x9A);
		case 0x9B: return _mm256_permute2f128_si256(a, b, 0x9B);
		case 0x9C: return _mm256_permute2f128_si256(a, b, 0x9C);
		case 0x9D: return _mm256_permute2f128_si256(a, b, 0x9D);
		case 0x9E: return _mm256_permute2f128_si256(a, b, 0x9E);
		case 0x9F: return _mm256_permute2f128_si256(a, b, 0x9F);
		case 0xA0: return _mm256_permute2f128_si256(a, b, 0xA0);
		case 0xA1: return _mm256_permute2f128_si256(a, b, 0xA1);
		case 0xA2: return _mm256_permute2f128_si256(a, b, 0xA2);
		case 0xA3: return _mm256_permute2f128_si256(a, b, 0xA3);
		case 0xA4: return _mm256_permute2f128_si256(a, b, 0xA4);
		case 0xA5: return _mm256_permute2f128_si256(a, b, 0xA5);
		case 0xA6: return _mm256_permute2f128_si256(a, b, 0xA6);
		case 0xA7: return _mm256_permute2f128_si256(a, b, 0xA7);
		case 0xA8: return _mm256_permute2f128_si256(a, b, 0xA8);
		case 0xA9: return _mm256_permute2f128_si256(a, b, 0xA9);
		case 0xAA: return _mm256_permute2f128_si256(a, b, 0xAA);
		case 0xAB: return _mm256_permute2f128_si256(a, b, 0xAB);
		case 0xAC: return _mm256_permute2f128_si256(a, b, 0xAC);
		case 0xAD: return _mm256_permute2f128_si256(a, b, 0xAD);
		case 0xAE: return _mm256_permute2f128_si256(a, b, 0xAE);
		case 0xAF: return _mm256_permute2f128_si256(a, b, 0xAF);
		case 0xB0: return _mm256_permute2f128_si256(a, b, 0xB0);
		case 0xB1: return _mm256_permute2f128_si256(a, b, 0xB1);
		case 0xB2: return _mm256_permute2f128_si256(a, b, 0xB2);
		case 0xB3: return _mm256_permute2f128_si256(a, b, 0xB3);
		case 0xB4: return _mm256_permute2f128_si256(a, b, 0xB4);
		case 0xB5: return _mm256_permute2f128_si256(a, b, 0xB5);
		case 0xB6: return _mm256_permute2f128_si256(a, b, 0xB6);
		case 0xB7: return _mm256_permute2f128_si256(a, b, 0xB7);
		case 0xB8: return _mm256_permute2f128_si256(a, b, 0xB8);
		case 0xB9: return _mm256_permute2f128_si256(a, b, 0xB9);
		case 0xBA: return _mm256_permute2f128_si256(a, b, 0xBA);
		case 0xBB: return _mm256_permute2f128_si256(a, b, 0xBB);
		case 0xBC: return _mm256_permute2f128_si256(a, b, 0xBC);
		case 0xBD: return _mm256_permute2f128_si256(a, b, 0xBD);
		case 0xBE: return _mm256_permute2f128_si256(a, b, 0xBE);
		case 0xBF: return _mm256_permute2f128_si256(a, b, 0xBF);
		case 0xC0: return _mm256_permute2f128_si256(a, b, 0xC0);
		case 0xC1: return _mm256_permute2f128_si256(a, b, 0xC1);
		case 0xC2: return _mm256_permute2f128_si256(a, b, 0xC2);
		case 0xC3: return _mm256_permute2f128_si256(a, b, 0xC3);
		case 0xC4: return _mm256_permute2f128_si256(a, b, 0xC4);
		case 0xC5: return _mm256_permute2f128_si256(a, b, 0xC5);
		case 0xC6: return _mm256_permute2f128_si256(a, b, 0xC6);
		case 0xC7: return _mm256_permute2f128_si256(a, b, 0xC7);
		case 0xC8: return _mm256_permute2f128_si256(a, b, 0xC8);
		case 0xC9: return _mm256_permute2f128_si256(a, b, 0xC9);
		case 0xCA: return _mm256_permute2f128_si256(a, b, 0xCA);
		case 0xCB: return _mm256_permute2f128_si256(a, b, 0xCB);
		case 0xCC: return _mm256_permute2f128_si256(a, b, 0xCC);
		case 0xCD: return _mm256_permute2f128_si256(a, b, 0xCD);
		case 0xCE: return _mm256_permute2f128_si256(a, b, 0xCE);
		case 0xCF: return _mm256_permute2f128_si256(a, b, 0xCF);
		case 0xD0: return _mm256_permute2f128_si256(a, b, 0xD0);
		case 0xD1: return _mm256_permute2f128_si256(a, b, 0xD1);
		case 0xD2: return _mm256_permute2f128_si256(a, b, 0xD2);
		case 0xD3: return _mm256_permute2f128_si256(a, b, 0xD3);
		case 0xD4: return _mm256_permute2f128_si256(a, b, 0xD4);
		case 0xD5: return _mm256_permute2f128_si256(a, b, 0xD5);
		case 0xD6: return _mm256_permute2f128_si256(a, b, 0xD6);
		case 0xD7: return _mm256_permute2f128_si256(a, b, 0xD7);
		case 0xD8: return _mm256_permute2f128_si256(a, b, 0xD8);
		case 0xD9: return _mm256_permute2f128_si256(a, b, 0xD9);
		case 0xDA: return _mm256_permute2f128_si256(a, b, 0xDA);
		case 0xDB: return _mm256_permute2f128_si256(a, b, 0xDB);
		case 0xDC: return _mm256_permute2f128_si256(a, b, 0xDC);
		case 0xDD: return _mm256_permute2f128_si256(a, b, 0xDD);
		case 0xDE: return _mm256_permute2f128_si256(a, b, 0xDE);
		case 0xDF: return _mm256_permute2f128_si256(a, b, 0xDF);
		case 0xE0: return _mm256_permute2f128_si256(a, b, 0xE0);
		case 0xE1: return _mm256_permute2f128_si256(a, b, 0xE1);
		case 0xE2: return _mm256_permute2f128_si256(a, b, 0xE2);
		case 0xE3: return _mm256_permute2f128_si256(a, b, 0xE3);
		case 0xE4: return _mm256_permute2f128_si256(a, b, 0xE4);
		case 0xE5: return _mm256_permute2f128_si256(a, b, 0xE5);
		case 0xE6: return _mm256_permute2f128_si256(a, b, 0xE6);
		case 0xE7: return _mm256_permute2f128_si256(a, b, 0xE7);
		case 0xE8: return _mm256_permute2f128_si256(a, b, 0xE8);
		case 0xE9: return _mm256_permute2f128_si256(a, b, 0xE9);
		case 0xEA: return _mm256_permute2f128_si256(a, b, 0xEA);
		case 0xEB: return _mm256_permute2f128_si256(a, b, 0xEB);
		case 0xEC: return _mm256_permute2f128_si256(a, b, 0xEC);
		case 0xED: return _mm256_permute2f128_si256(a, b, 0xED);
		case 0xEE: return _mm256_permute2f128_si256(a, b, 0xEE);
		case 0xEF: return _mm256_permute2f128_si256(a, b, 0xEF);
		case 0xF0: return _mm256_permute2f128_si256(a, b, 0xF0);
		case 0xF1: return _mm256_permute2f128_si256(a, b, 0xF1);
		case 0xF2: return _mm256_permute2f128_si256(a, b, 0xF2);
		case 0xF3: return _mm256_permute2f128_si256(a, b, 0xF3);
		case 0xF4: return _mm256_permute2f128_si256(a, b, 0xF4);
		case 0xF5: return _mm256_permute2f128_si256(a, b, 0xF5);
		case 0xF6: return _mm256_permute2f128_si256(a, b, 0xF6);
		case 0xF7: return _mm256_permute2f128_si256(a, b, 0xF7);
		case 0xF8: return _mm256_permute2f128_si256(a, b, 0xF8);
		case 0xF9: return _mm256_permute2f128_si256(a, b, 0xF9);
		case 0xFA: return _mm256_permute2f128_si256(a, b, 0xFA);
		case 0xFB: return _mm256_permute2f128_si256(a, b, 0xFB);
		case 0xFC: return _mm256_permute2f128_si256(a, b, 0xFC);
		case 0xFD: return _mm256_permute2f128_si256(a, b, 0xFD);
		case 0xFE: return _mm256_permute2f128_si256(a, b, 0xFE);
		default:   return _mm256_permute2f128_si256(a, b, 0xFF);
	}
}

__m128d avx_permutevar_pd(__m128d a, __m128i b) { return _mm_permutevar_pd(a, b); }

__m256d avx256_permutevar_pd(__m256d a, __m256i b) { return _mm256_permutevar_pd(a, b); }

__m128 avx_permutevar_ps(__m128 a, __m128i b) { return _mm_permutevar_ps(a, b); }

__m256 avx256_permutevar_ps(__m256 a, __m256i b) { return _mm256_permutevar_ps(a, b); }

__m256 avx256_rcp_ps(__m256 a) { return _mm256_rcp_ps(a); }

__m256d avx256_round_pd(__m256d a, int rounding) {
	switch (rounding & 0xF) {
		case  0: return _mm256_round_pd(a,  0);
		case  1: return _mm256_round_pd(a,  1);
		case  2: return _mm256_round_pd(a,  2);
		case  3: return _mm256_round_pd(a,  3);
		case  4: return _mm256_round_pd(a,  4);
		case  5: return _mm256_round_pd(a,  5);
		case  6: return _mm256_round_pd(a,  6);
		case  7: return _mm256_round_pd(a,  7);
		case  8: return _mm256_round_pd(a,  8);
		case  9: return _mm256_round_pd(a,  9);
		case 10: return _mm256_round_pd(a, 10);
		case 11: return _mm256_round_pd(a, 11);
		case 12: return _mm256_round_pd(a, 12);
		case 13: return _mm256_round_pd(a, 13);
		case 14: return _mm256_round_pd(a, 14);
		default: return _mm256_round_pd(a, 15);
	}
}

__m256 avx256_round_ps(__m256 a, int rounding) {
	switch (rounding & 0xF) {
		case  0: return _mm256_round_ps(a,  0);
		case  1: return _mm256_round_ps(a,  1);
		case  2: return _mm256_round_ps(a,  2);
		case  3: return _mm256_round_ps(a,  3);
		case  4: return _mm256_round_ps(a,  4);
		case  5: return _mm256_round_ps(a,  5);
		case  6: return _mm256_round_ps(a,  6);
		case  7: return _mm256_round_ps(a,  7);
		case  8: return _mm256_round_ps(a,  8);
		case  9: return _mm256_round_ps(a,  9);
		case 10: return _mm256_round_ps(a, 10);
		case 11: return _mm256_round_ps(a, 11);
		case 12: return _mm256_round_ps(a, 12);
		case 13: return _mm256_round_ps(a, 13);
		case 14: return _mm256_round_ps(a, 14);
		default: return _mm256_round_ps(a, 15);
	}
}

__m256 avx256_rsqrt_ps(__m256 a) { return _mm256_rsqrt_ps(a); }

__m256i avx256_set_epi16(short e15, short e14, short e13, short e12, short e11, short e10, short e9, short e8, short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0) { return _mm256_set_epi16(e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }

__m256i avx256_set_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0) { return _mm256_set_epi32(e7, e6, e5, e4, e3, e2, e1, e0); }

__m256i avx256_set_epi64x(long long e3, long long e2, long long e1, long long e0) { return _mm256_set_epi64x(e3, e2, e1, e0); }

__m256i avx256_set_epi8(char e31, char e30, char e29, char e28, char e27, char e26, char e25, char e24, char e23, char e22, char e21, char e20, char e19, char e18, char e17, char e16, char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0) { return _mm256_set_epi8(e31, e30, e29, e28, e27, e26, e25, e24, e23, e22, e21, e20, e19, e18, e17, e16, e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }

__m256 avx256_set_m128(__m128 hi, __m128 lo) { return _mm256_set_m128(hi, lo); }

__m256d avx256_set_m128d(__m128d hi, __m128d lo) { return _mm256_set_m128d(hi, lo); }

__m256i avx256_set_m128i(__m128i hi, __m128i lo) { return _mm256_set_m128i(hi, lo); }

__m256d avx256_set_pd(double e3, double e2, double e1, double e0) { return _mm256_set_pd(e3, e2, e1, e0); }

__m256 avx256_set_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0) { return _mm256_set_ps(e7, e6, e5, e4, e3, e2, e1, e0); }

__m256i avx256_set1_epi16(short a) { return _mm256_set1_epi16(a); }

__m256i avx256_set1_epi32(int a) { return _mm256_set1_epi32(a); }

__m256i avx256_set1_epi64x(long long a) { return _mm256_set1_epi64x(a); }

__m256i avx256_set1_epi8(char a) { return _mm256_set1_epi8(a); }

__m256d avx256_set1_pd(double a) { return _mm256_set1_pd(a); }

__m256 avx256_set1_ps(float a) { return _mm256_set1_ps(a); }

__m256i avx256_setr_epi16(short e15, short e14, short e13, short e12, short e11, short e10, short e9, short e8, short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0) { return _mm256_setr_epi16(e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }

__m256i avx256_setr_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0) { return _mm256_setr_epi32(e7, e6, e5, e4, e3, e2, e1, e0); }

__m256i avx256_setr_epi64x(long long e3, long long e2, long long e1, long long e0) { return _mm256_setr_epi64x(e3, e2, e1, e0); }

__m256i avx256_setr_epi8(char e31, char e30, char e29, char e28, char e27, char e26, char e25, char e24, char e23, char e22, char e21, char e20, char e19, char e18, char e17, char e16, char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0) { return _mm256_setr_epi8(e31, e30, e29, e28, e27, e26, e25, e24, e23, e22, e21, e20, e19, e18, e17, e16, e15, e14, e13, e12, e11, e10, e9, e8, e7, e6, e5, e4, e3, e2, e1, e0); }

__m256 avx256_setr_m128(__m128 lo, __m128 hi) { return _mm256_setr_m128(lo, hi); }

__m256d avx256_setr_m128d(__m128d lo, __m128d hi) { return _mm256_setr_m128d(lo, hi); }

__m256i avx256_setr_m128i(__m128i lo, __m128i hi) { return _mm256_setr_m128i(lo, hi); }

__m256d avx256_setr_pd(double e3, double e2, double e1, double e0) { return _mm256_setr_pd(e3, e2, e1, e0); }

__m256 avx256_setr_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0) { return _mm256_setr_ps(e7, e6, e5, e4, e3, e2, e1, e0); }

__m256d avx256_setzero_pd() { return _mm256_setzero_pd(); }

__m256 avx256_setzero_ps() { return _mm256_setzero_ps(); }

__m256i avx256_setzero_si256() { return _mm256_setzero_si256(); }

__m256d avx256_shuffle_pd(__m256d a, __m256d b, const int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_shuffle_pd(a, b, 0x00);
		case 0x01: return _mm256_shuffle_pd(a, b, 0x01);
		case 0x02: return _mm256_shuffle_pd(a, b, 0x02);
		case 0x03: return _mm256_shuffle_pd(a, b, 0x03);
		case 0x04: return _mm256_shuffle_pd(a, b, 0x04);
		case 0x05: return _mm256_shuffle_pd(a, b, 0x05);
		case 0x06: return _mm256_shuffle_pd(a, b, 0x06);
		case 0x07: return _mm256_shuffle_pd(a, b, 0x07);
		case 0x08: return _mm256_shuffle_pd(a, b, 0x08);
		case 0x09: return _mm256_shuffle_pd(a, b, 0x09);
		case 0x0A: return _mm256_shuffle_pd(a, b, 0x0A);
		case 0x0B: return _mm256_shuffle_pd(a, b, 0x0B);
		case 0x0C: return _mm256_shuffle_pd(a, b, 0x0C);
		case 0x0D: return _mm256_shuffle_pd(a, b, 0x0D);
		case 0x0E: return _mm256_shuffle_pd(a, b, 0x0E);
		case 0x0F: return _mm256_shuffle_pd(a, b, 0x0F);
		case 0x10: return _mm256_shuffle_pd(a, b, 0x10);
		case 0x11: return _mm256_shuffle_pd(a, b, 0x11);
		case 0x12: return _mm256_shuffle_pd(a, b, 0x12);
		case 0x13: return _mm256_shuffle_pd(a, b, 0x13);
		case 0x14: return _mm256_shuffle_pd(a, b, 0x14);
		case 0x15: return _mm256_shuffle_pd(a, b, 0x15);
		case 0x16: return _mm256_shuffle_pd(a, b, 0x16);
		case 0x17: return _mm256_shuffle_pd(a, b, 0x17);
		case 0x18: return _mm256_shuffle_pd(a, b, 0x18);
		case 0x19: return _mm256_shuffle_pd(a, b, 0x19);
		case 0x1A: return _mm256_shuffle_pd(a, b, 0x1A);
		case 0x1B: return _mm256_shuffle_pd(a, b, 0x1B);
		case 0x1C: return _mm256_shuffle_pd(a, b, 0x1C);
		case 0x1D: return _mm256_shuffle_pd(a, b, 0x1D);
		case 0x1E: return _mm256_shuffle_pd(a, b, 0x1E);
		case 0x1F: return _mm256_shuffle_pd(a, b, 0x1F);
		case 0x20: return _mm256_shuffle_pd(a, b, 0x20);
		case 0x21: return _mm256_shuffle_pd(a, b, 0x21);
		case 0x22: return _mm256_shuffle_pd(a, b, 0x22);
		case 0x23: return _mm256_shuffle_pd(a, b, 0x23);
		case 0x24: return _mm256_shuffle_pd(a, b, 0x24);
		case 0x25: return _mm256_shuffle_pd(a, b, 0x25);
		case 0x26: return _mm256_shuffle_pd(a, b, 0x26);
		case 0x27: return _mm256_shuffle_pd(a, b, 0x27);
		case 0x28: return _mm256_shuffle_pd(a, b, 0x28);
		case 0x29: return _mm256_shuffle_pd(a, b, 0x29);
		case 0x2A: return _mm256_shuffle_pd(a, b, 0x2A);
		case 0x2B: return _mm256_shuffle_pd(a, b, 0x2B);
		case 0x2C: return _mm256_shuffle_pd(a, b, 0x2C);
		case 0x2D: return _mm256_shuffle_pd(a, b, 0x2D);
		case 0x2E: return _mm256_shuffle_pd(a, b, 0x2E);
		case 0x2F: return _mm256_shuffle_pd(a, b, 0x2F);
		case 0x30: return _mm256_shuffle_pd(a, b, 0x30);
		case 0x31: return _mm256_shuffle_pd(a, b, 0x31);
		case 0x32: return _mm256_shuffle_pd(a, b, 0x32);
		case 0x33: return _mm256_shuffle_pd(a, b, 0x33);
		case 0x34: return _mm256_shuffle_pd(a, b, 0x34);
		case 0x35: return _mm256_shuffle_pd(a, b, 0x35);
		case 0x36: return _mm256_shuffle_pd(a, b, 0x36);
		case 0x37: return _mm256_shuffle_pd(a, b, 0x37);
		case 0x38: return _mm256_shuffle_pd(a, b, 0x38);
		case 0x39: return _mm256_shuffle_pd(a, b, 0x39);
		case 0x3A: return _mm256_shuffle_pd(a, b, 0x3A);
		case 0x3B: return _mm256_shuffle_pd(a, b, 0x3B);
		case 0x3C: return _mm256_shuffle_pd(a, b, 0x3C);
		case 0x3D: return _mm256_shuffle_pd(a, b, 0x3D);
		case 0x3E: return _mm256_shuffle_pd(a, b, 0x3E);
		case 0x3F: return _mm256_shuffle_pd(a, b, 0x3F);
		case 0x40: return _mm256_shuffle_pd(a, b, 0x40);
		case 0x41: return _mm256_shuffle_pd(a, b, 0x41);
		case 0x42: return _mm256_shuffle_pd(a, b, 0x42);
		case 0x43: return _mm256_shuffle_pd(a, b, 0x43);
		case 0x44: return _mm256_shuffle_pd(a, b, 0x44);
		case 0x45: return _mm256_shuffle_pd(a, b, 0x45);
		case 0x46: return _mm256_shuffle_pd(a, b, 0x46);
		case 0x47: return _mm256_shuffle_pd(a, b, 0x47);
		case 0x48: return _mm256_shuffle_pd(a, b, 0x48);
		case 0x49: return _mm256_shuffle_pd(a, b, 0x49);
		case 0x4A: return _mm256_shuffle_pd(a, b, 0x4A);
		case 0x4B: return _mm256_shuffle_pd(a, b, 0x4B);
		case 0x4C: return _mm256_shuffle_pd(a, b, 0x4C);
		case 0x4D: return _mm256_shuffle_pd(a, b, 0x4D);
		case 0x4E: return _mm256_shuffle_pd(a, b, 0x4E);
		case 0x4F: return _mm256_shuffle_pd(a, b, 0x4F);
		case 0x50: return _mm256_shuffle_pd(a, b, 0x50);
		case 0x51: return _mm256_shuffle_pd(a, b, 0x51);
		case 0x52: return _mm256_shuffle_pd(a, b, 0x52);
		case 0x53: return _mm256_shuffle_pd(a, b, 0x53);
		case 0x54: return _mm256_shuffle_pd(a, b, 0x54);
		case 0x55: return _mm256_shuffle_pd(a, b, 0x55);
		case 0x56: return _mm256_shuffle_pd(a, b, 0x56);
		case 0x57: return _mm256_shuffle_pd(a, b, 0x57);
		case 0x58: return _mm256_shuffle_pd(a, b, 0x58);
		case 0x59: return _mm256_shuffle_pd(a, b, 0x59);
		case 0x5A: return _mm256_shuffle_pd(a, b, 0x5A);
		case 0x5B: return _mm256_shuffle_pd(a, b, 0x5B);
		case 0x5C: return _mm256_shuffle_pd(a, b, 0x5C);
		case 0x5D: return _mm256_shuffle_pd(a, b, 0x5D);
		case 0x5E: return _mm256_shuffle_pd(a, b, 0x5E);
		case 0x5F: return _mm256_shuffle_pd(a, b, 0x5F);
		case 0x60: return _mm256_shuffle_pd(a, b, 0x60);
		case 0x61: return _mm256_shuffle_pd(a, b, 0x61);
		case 0x62: return _mm256_shuffle_pd(a, b, 0x62);
		case 0x63: return _mm256_shuffle_pd(a, b, 0x63);
		case 0x64: return _mm256_shuffle_pd(a, b, 0x64);
		case 0x65: return _mm256_shuffle_pd(a, b, 0x65);
		case 0x66: return _mm256_shuffle_pd(a, b, 0x66);
		case 0x67: return _mm256_shuffle_pd(a, b, 0x67);
		case 0x68: return _mm256_shuffle_pd(a, b, 0x68);
		case 0x69: return _mm256_shuffle_pd(a, b, 0x69);
		case 0x6A: return _mm256_shuffle_pd(a, b, 0x6A);
		case 0x6B: return _mm256_shuffle_pd(a, b, 0x6B);
		case 0x6C: return _mm256_shuffle_pd(a, b, 0x6C);
		case 0x6D: return _mm256_shuffle_pd(a, b, 0x6D);
		case 0x6E: return _mm256_shuffle_pd(a, b, 0x6E);
		case 0x6F: return _mm256_shuffle_pd(a, b, 0x6F);
		case 0x70: return _mm256_shuffle_pd(a, b, 0x70);
		case 0x71: return _mm256_shuffle_pd(a, b, 0x71);
		case 0x72: return _mm256_shuffle_pd(a, b, 0x72);
		case 0x73: return _mm256_shuffle_pd(a, b, 0x73);
		case 0x74: return _mm256_shuffle_pd(a, b, 0x74);
		case 0x75: return _mm256_shuffle_pd(a, b, 0x75);
		case 0x76: return _mm256_shuffle_pd(a, b, 0x76);
		case 0x77: return _mm256_shuffle_pd(a, b, 0x77);
		case 0x78: return _mm256_shuffle_pd(a, b, 0x78);
		case 0x79: return _mm256_shuffle_pd(a, b, 0x79);
		case 0x7A: return _mm256_shuffle_pd(a, b, 0x7A);
		case 0x7B: return _mm256_shuffle_pd(a, b, 0x7B);
		case 0x7C: return _mm256_shuffle_pd(a, b, 0x7C);
		case 0x7D: return _mm256_shuffle_pd(a, b, 0x7D);
		case 0x7E: return _mm256_shuffle_pd(a, b, 0x7E);
		case 0x7F: return _mm256_shuffle_pd(a, b, 0x7F);
		case 0x80: return _mm256_shuffle_pd(a, b, 0x80);
		case 0x81: return _mm256_shuffle_pd(a, b, 0x81);
		case 0x82: return _mm256_shuffle_pd(a, b, 0x82);
		case 0x83: return _mm256_shuffle_pd(a, b, 0x83);
		case 0x84: return _mm256_shuffle_pd(a, b, 0x84);
		case 0x85: return _mm256_shuffle_pd(a, b, 0x85);
		case 0x86: return _mm256_shuffle_pd(a, b, 0x86);
		case 0x87: return _mm256_shuffle_pd(a, b, 0x87);
		case 0x88: return _mm256_shuffle_pd(a, b, 0x88);
		case 0x89: return _mm256_shuffle_pd(a, b, 0x89);
		case 0x8A: return _mm256_shuffle_pd(a, b, 0x8A);
		case 0x8B: return _mm256_shuffle_pd(a, b, 0x8B);
		case 0x8C: return _mm256_shuffle_pd(a, b, 0x8C);
		case 0x8D: return _mm256_shuffle_pd(a, b, 0x8D);
		case 0x8E: return _mm256_shuffle_pd(a, b, 0x8E);
		case 0x8F: return _mm256_shuffle_pd(a, b, 0x8F);
		case 0x90: return _mm256_shuffle_pd(a, b, 0x90);
		case 0x91: return _mm256_shuffle_pd(a, b, 0x91);
		case 0x92: return _mm256_shuffle_pd(a, b, 0x92);
		case 0x93: return _mm256_shuffle_pd(a, b, 0x93);
		case 0x94: return _mm256_shuffle_pd(a, b, 0x94);
		case 0x95: return _mm256_shuffle_pd(a, b, 0x95);
		case 0x96: return _mm256_shuffle_pd(a, b, 0x96);
		case 0x97: return _mm256_shuffle_pd(a, b, 0x97);
		case 0x98: return _mm256_shuffle_pd(a, b, 0x98);
		case 0x99: return _mm256_shuffle_pd(a, b, 0x99);
		case 0x9A: return _mm256_shuffle_pd(a, b, 0x9A);
		case 0x9B: return _mm256_shuffle_pd(a, b, 0x9B);
		case 0x9C: return _mm256_shuffle_pd(a, b, 0x9C);
		case 0x9D: return _mm256_shuffle_pd(a, b, 0x9D);
		case 0x9E: return _mm256_shuffle_pd(a, b, 0x9E);
		case 0x9F: return _mm256_shuffle_pd(a, b, 0x9F);
		case 0xA0: return _mm256_shuffle_pd(a, b, 0xA0);
		case 0xA1: return _mm256_shuffle_pd(a, b, 0xA1);
		case 0xA2: return _mm256_shuffle_pd(a, b, 0xA2);
		case 0xA3: return _mm256_shuffle_pd(a, b, 0xA3);
		case 0xA4: return _mm256_shuffle_pd(a, b, 0xA4);
		case 0xA5: return _mm256_shuffle_pd(a, b, 0xA5);
		case 0xA6: return _mm256_shuffle_pd(a, b, 0xA6);
		case 0xA7: return _mm256_shuffle_pd(a, b, 0xA7);
		case 0xA8: return _mm256_shuffle_pd(a, b, 0xA8);
		case 0xA9: return _mm256_shuffle_pd(a, b, 0xA9);
		case 0xAA: return _mm256_shuffle_pd(a, b, 0xAA);
		case 0xAB: return _mm256_shuffle_pd(a, b, 0xAB);
		case 0xAC: return _mm256_shuffle_pd(a, b, 0xAC);
		case 0xAD: return _mm256_shuffle_pd(a, b, 0xAD);
		case 0xAE: return _mm256_shuffle_pd(a, b, 0xAE);
		case 0xAF: return _mm256_shuffle_pd(a, b, 0xAF);
		case 0xB0: return _mm256_shuffle_pd(a, b, 0xB0);
		case 0xB1: return _mm256_shuffle_pd(a, b, 0xB1);
		case 0xB2: return _mm256_shuffle_pd(a, b, 0xB2);
		case 0xB3: return _mm256_shuffle_pd(a, b, 0xB3);
		case 0xB4: return _mm256_shuffle_pd(a, b, 0xB4);
		case 0xB5: return _mm256_shuffle_pd(a, b, 0xB5);
		case 0xB6: return _mm256_shuffle_pd(a, b, 0xB6);
		case 0xB7: return _mm256_shuffle_pd(a, b, 0xB7);
		case 0xB8: return _mm256_shuffle_pd(a, b, 0xB8);
		case 0xB9: return _mm256_shuffle_pd(a, b, 0xB9);
		case 0xBA: return _mm256_shuffle_pd(a, b, 0xBA);
		case 0xBB: return _mm256_shuffle_pd(a, b, 0xBB);
		case 0xBC: return _mm256_shuffle_pd(a, b, 0xBC);
		case 0xBD: return _mm256_shuffle_pd(a, b, 0xBD);
		case 0xBE: return _mm256_shuffle_pd(a, b, 0xBE);
		case 0xBF: return _mm256_shuffle_pd(a, b, 0xBF);
		case 0xC0: return _mm256_shuffle_pd(a, b, 0xC0);
		case 0xC1: return _mm256_shuffle_pd(a, b, 0xC1);
		case 0xC2: return _mm256_shuffle_pd(a, b, 0xC2);
		case 0xC3: return _mm256_shuffle_pd(a, b, 0xC3);
		case 0xC4: return _mm256_shuffle_pd(a, b, 0xC4);
		case 0xC5: return _mm256_shuffle_pd(a, b, 0xC5);
		case 0xC6: return _mm256_shuffle_pd(a, b, 0xC6);
		case 0xC7: return _mm256_shuffle_pd(a, b, 0xC7);
		case 0xC8: return _mm256_shuffle_pd(a, b, 0xC8);
		case 0xC9: return _mm256_shuffle_pd(a, b, 0xC9);
		case 0xCA: return _mm256_shuffle_pd(a, b, 0xCA);
		case 0xCB: return _mm256_shuffle_pd(a, b, 0xCB);
		case 0xCC: return _mm256_shuffle_pd(a, b, 0xCC);
		case 0xCD: return _mm256_shuffle_pd(a, b, 0xCD);
		case 0xCE: return _mm256_shuffle_pd(a, b, 0xCE);
		case 0xCF: return _mm256_shuffle_pd(a, b, 0xCF);
		case 0xD0: return _mm256_shuffle_pd(a, b, 0xD0);
		case 0xD1: return _mm256_shuffle_pd(a, b, 0xD1);
		case 0xD2: return _mm256_shuffle_pd(a, b, 0xD2);
		case 0xD3: return _mm256_shuffle_pd(a, b, 0xD3);
		case 0xD4: return _mm256_shuffle_pd(a, b, 0xD4);
		case 0xD5: return _mm256_shuffle_pd(a, b, 0xD5);
		case 0xD6: return _mm256_shuffle_pd(a, b, 0xD6);
		case 0xD7: return _mm256_shuffle_pd(a, b, 0xD7);
		case 0xD8: return _mm256_shuffle_pd(a, b, 0xD8);
		case 0xD9: return _mm256_shuffle_pd(a, b, 0xD9);
		case 0xDA: return _mm256_shuffle_pd(a, b, 0xDA);
		case 0xDB: return _mm256_shuffle_pd(a, b, 0xDB);
		case 0xDC: return _mm256_shuffle_pd(a, b, 0xDC);
		case 0xDD: return _mm256_shuffle_pd(a, b, 0xDD);
		case 0xDE: return _mm256_shuffle_pd(a, b, 0xDE);
		case 0xDF: return _mm256_shuffle_pd(a, b, 0xDF);
		case 0xE0: return _mm256_shuffle_pd(a, b, 0xE0);
		case 0xE1: return _mm256_shuffle_pd(a, b, 0xE1);
		case 0xE2: return _mm256_shuffle_pd(a, b, 0xE2);
		case 0xE3: return _mm256_shuffle_pd(a, b, 0xE3);
		case 0xE4: return _mm256_shuffle_pd(a, b, 0xE4);
		case 0xE5: return _mm256_shuffle_pd(a, b, 0xE5);
		case 0xE6: return _mm256_shuffle_pd(a, b, 0xE6);
		case 0xE7: return _mm256_shuffle_pd(a, b, 0xE7);
		case 0xE8: return _mm256_shuffle_pd(a, b, 0xE8);
		case 0xE9: return _mm256_shuffle_pd(a, b, 0xE9);
		case 0xEA: return _mm256_shuffle_pd(a, b, 0xEA);
		case 0xEB: return _mm256_shuffle_pd(a, b, 0xEB);
		case 0xEC: return _mm256_shuffle_pd(a, b, 0xEC);
		case 0xED: return _mm256_shuffle_pd(a, b, 0xED);
		case 0xEE: return _mm256_shuffle_pd(a, b, 0xEE);
		case 0xEF: return _mm256_shuffle_pd(a, b, 0xEF);
		case 0xF0: return _mm256_shuffle_pd(a, b, 0xF0);
		case 0xF1: return _mm256_shuffle_pd(a, b, 0xF1);
		case 0xF2: return _mm256_shuffle_pd(a, b, 0xF2);
		case 0xF3: return _mm256_shuffle_pd(a, b, 0xF3);
		case 0xF4: return _mm256_shuffle_pd(a, b, 0xF4);
		case 0xF5: return _mm256_shuffle_pd(a, b, 0xF5);
		case 0xF6: return _mm256_shuffle_pd(a, b, 0xF6);
		case 0xF7: return _mm256_shuffle_pd(a, b, 0xF7);
		case 0xF8: return _mm256_shuffle_pd(a, b, 0xF8);
		case 0xF9: return _mm256_shuffle_pd(a, b, 0xF9);
		case 0xFA: return _mm256_shuffle_pd(a, b, 0xFA);
		case 0xFB: return _mm256_shuffle_pd(a, b, 0xFB);
		case 0xFC: return _mm256_shuffle_pd(a, b, 0xFC);
		case 0xFD: return _mm256_shuffle_pd(a, b, 0xFD);
		case 0xFE: return _mm256_shuffle_pd(a, b, 0xFE);
		default:   return _mm256_shuffle_pd(a, b, 0xFF);
	}
}

__m256 avx256_shuffle_ps(__m256 a, __m256 b, const int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm256_shuffle_ps(a, b, 0x00);
		case 0x01: return _mm256_shuffle_ps(a, b, 0x01);
		case 0x02: return _mm256_shuffle_ps(a, b, 0x02);
		case 0x03: return _mm256_shuffle_ps(a, b, 0x03);
		case 0x04: return _mm256_shuffle_ps(a, b, 0x04);
		case 0x05: return _mm256_shuffle_ps(a, b, 0x05);
		case 0x06: return _mm256_shuffle_ps(a, b, 0x06);
		case 0x07: return _mm256_shuffle_ps(a, b, 0x07);
		case 0x08: return _mm256_shuffle_ps(a, b, 0x08);
		case 0x09: return _mm256_shuffle_ps(a, b, 0x09);
		case 0x0A: return _mm256_shuffle_ps(a, b, 0x0A);
		case 0x0B: return _mm256_shuffle_ps(a, b, 0x0B);
		case 0x0C: return _mm256_shuffle_ps(a, b, 0x0C);
		case 0x0D: return _mm256_shuffle_ps(a, b, 0x0D);
		case 0x0E: return _mm256_shuffle_ps(a, b, 0x0E);
		case 0x0F: return _mm256_shuffle_ps(a, b, 0x0F);
		case 0x10: return _mm256_shuffle_ps(a, b, 0x10);
		case 0x11: return _mm256_shuffle_ps(a, b, 0x11);
		case 0x12: return _mm256_shuffle_ps(a, b, 0x12);
		case 0x13: return _mm256_shuffle_ps(a, b, 0x13);
		case 0x14: return _mm256_shuffle_ps(a, b, 0x14);
		case 0x15: return _mm256_shuffle_ps(a, b, 0x15);
		case 0x16: return _mm256_shuffle_ps(a, b, 0x16);
		case 0x17: return _mm256_shuffle_ps(a, b, 0x17);
		case 0x18: return _mm256_shuffle_ps(a, b, 0x18);
		case 0x19: return _mm256_shuffle_ps(a, b, 0x19);
		case 0x1A: return _mm256_shuffle_ps(a, b, 0x1A);
		case 0x1B: return _mm256_shuffle_ps(a, b, 0x1B);
		case 0x1C: return _mm256_shuffle_ps(a, b, 0x1C);
		case 0x1D: return _mm256_shuffle_ps(a, b, 0x1D);
		case 0x1E: return _mm256_shuffle_ps(a, b, 0x1E);
		case 0x1F: return _mm256_shuffle_ps(a, b, 0x1F);
		case 0x20: return _mm256_shuffle_ps(a, b, 0x20);
		case 0x21: return _mm256_shuffle_ps(a, b, 0x21);
		case 0x22: return _mm256_shuffle_ps(a, b, 0x22);
		case 0x23: return _mm256_shuffle_ps(a, b, 0x23);
		case 0x24: return _mm256_shuffle_ps(a, b, 0x24);
		case 0x25: return _mm256_shuffle_ps(a, b, 0x25);
		case 0x26: return _mm256_shuffle_ps(a, b, 0x26);
		case 0x27: return _mm256_shuffle_ps(a, b, 0x27);
		case 0x28: return _mm256_shuffle_ps(a, b, 0x28);
		case 0x29: return _mm256_shuffle_ps(a, b, 0x29);
		case 0x2A: return _mm256_shuffle_ps(a, b, 0x2A);
		case 0x2B: return _mm256_shuffle_ps(a, b, 0x2B);
		case 0x2C: return _mm256_shuffle_ps(a, b, 0x2C);
		case 0x2D: return _mm256_shuffle_ps(a, b, 0x2D);
		case 0x2E: return _mm256_shuffle_ps(a, b, 0x2E);
		case 0x2F: return _mm256_shuffle_ps(a, b, 0x2F);
		case 0x30: return _mm256_shuffle_ps(a, b, 0x30);
		case 0x31: return _mm256_shuffle_ps(a, b, 0x31);
		case 0x32: return _mm256_shuffle_ps(a, b, 0x32);
		case 0x33: return _mm256_shuffle_ps(a, b, 0x33);
		case 0x34: return _mm256_shuffle_ps(a, b, 0x34);
		case 0x35: return _mm256_shuffle_ps(a, b, 0x35);
		case 0x36: return _mm256_shuffle_ps(a, b, 0x36);
		case 0x37: return _mm256_shuffle_ps(a, b, 0x37);
		case 0x38: return _mm256_shuffle_ps(a, b, 0x38);
		case 0x39: return _mm256_shuffle_ps(a, b, 0x39);
		case 0x3A: return _mm256_shuffle_ps(a, b, 0x3A);
		case 0x3B: return _mm256_shuffle_ps(a, b, 0x3B);
		case 0x3C: return _mm256_shuffle_ps(a, b, 0x3C);
		case 0x3D: return _mm256_shuffle_ps(a, b, 0x3D);
		case 0x3E: return _mm256_shuffle_ps(a, b, 0x3E);
		case 0x3F: return _mm256_shuffle_ps(a, b, 0x3F);
		case 0x40: return _mm256_shuffle_ps(a, b, 0x40);
		case 0x41: return _mm256_shuffle_ps(a, b, 0x41);
		case 0x42: return _mm256_shuffle_ps(a, b, 0x42);
		case 0x43: return _mm256_shuffle_ps(a, b, 0x43);
		case 0x44: return _mm256_shuffle_ps(a, b, 0x44);
		case 0x45: return _mm256_shuffle_ps(a, b, 0x45);
		case 0x46: return _mm256_shuffle_ps(a, b, 0x46);
		case 0x47: return _mm256_shuffle_ps(a, b, 0x47);
		case 0x48: return _mm256_shuffle_ps(a, b, 0x48);
		case 0x49: return _mm256_shuffle_ps(a, b, 0x49);
		case 0x4A: return _mm256_shuffle_ps(a, b, 0x4A);
		case 0x4B: return _mm256_shuffle_ps(a, b, 0x4B);
		case 0x4C: return _mm256_shuffle_ps(a, b, 0x4C);
		case 0x4D: return _mm256_shuffle_ps(a, b, 0x4D);
		case 0x4E: return _mm256_shuffle_ps(a, b, 0x4E);
		case 0x4F: return _mm256_shuffle_ps(a, b, 0x4F);
		case 0x50: return _mm256_shuffle_ps(a, b, 0x50);
		case 0x51: return _mm256_shuffle_ps(a, b, 0x51);
		case 0x52: return _mm256_shuffle_ps(a, b, 0x52);
		case 0x53: return _mm256_shuffle_ps(a, b, 0x53);
		case 0x54: return _mm256_shuffle_ps(a, b, 0x54);
		case 0x55: return _mm256_shuffle_ps(a, b, 0x55);
		case 0x56: return _mm256_shuffle_ps(a, b, 0x56);
		case 0x57: return _mm256_shuffle_ps(a, b, 0x57);
		case 0x58: return _mm256_shuffle_ps(a, b, 0x58);
		case 0x59: return _mm256_shuffle_ps(a, b, 0x59);
		case 0x5A: return _mm256_shuffle_ps(a, b, 0x5A);
		case 0x5B: return _mm256_shuffle_ps(a, b, 0x5B);
		case 0x5C: return _mm256_shuffle_ps(a, b, 0x5C);
		case 0x5D: return _mm256_shuffle_ps(a, b, 0x5D);
		case 0x5E: return _mm256_shuffle_ps(a, b, 0x5E);
		case 0x5F: return _mm256_shuffle_ps(a, b, 0x5F);
		case 0x60: return _mm256_shuffle_ps(a, b, 0x60);
		case 0x61: return _mm256_shuffle_ps(a, b, 0x61);
		case 0x62: return _mm256_shuffle_ps(a, b, 0x62);
		case 0x63: return _mm256_shuffle_ps(a, b, 0x63);
		case 0x64: return _mm256_shuffle_ps(a, b, 0x64);
		case 0x65: return _mm256_shuffle_ps(a, b, 0x65);
		case 0x66: return _mm256_shuffle_ps(a, b, 0x66);
		case 0x67: return _mm256_shuffle_ps(a, b, 0x67);
		case 0x68: return _mm256_shuffle_ps(a, b, 0x68);
		case 0x69: return _mm256_shuffle_ps(a, b, 0x69);
		case 0x6A: return _mm256_shuffle_ps(a, b, 0x6A);
		case 0x6B: return _mm256_shuffle_ps(a, b, 0x6B);
		case 0x6C: return _mm256_shuffle_ps(a, b, 0x6C);
		case 0x6D: return _mm256_shuffle_ps(a, b, 0x6D);
		case 0x6E: return _mm256_shuffle_ps(a, b, 0x6E);
		case 0x6F: return _mm256_shuffle_ps(a, b, 0x6F);
		case 0x70: return _mm256_shuffle_ps(a, b, 0x70);
		case 0x71: return _mm256_shuffle_ps(a, b, 0x71);
		case 0x72: return _mm256_shuffle_ps(a, b, 0x72);
		case 0x73: return _mm256_shuffle_ps(a, b, 0x73);
		case 0x74: return _mm256_shuffle_ps(a, b, 0x74);
		case 0x75: return _mm256_shuffle_ps(a, b, 0x75);
		case 0x76: return _mm256_shuffle_ps(a, b, 0x76);
		case 0x77: return _mm256_shuffle_ps(a, b, 0x77);
		case 0x78: return _mm256_shuffle_ps(a, b, 0x78);
		case 0x79: return _mm256_shuffle_ps(a, b, 0x79);
		case 0x7A: return _mm256_shuffle_ps(a, b, 0x7A);
		case 0x7B: return _mm256_shuffle_ps(a, b, 0x7B);
		case 0x7C: return _mm256_shuffle_ps(a, b, 0x7C);
		case 0x7D: return _mm256_shuffle_ps(a, b, 0x7D);
		case 0x7E: return _mm256_shuffle_ps(a, b, 0x7E);
		case 0x7F: return _mm256_shuffle_ps(a, b, 0x7F);
		case 0x80: return _mm256_shuffle_ps(a, b, 0x80);
		case 0x81: return _mm256_shuffle_ps(a, b, 0x81);
		case 0x82: return _mm256_shuffle_ps(a, b, 0x82);
		case 0x83: return _mm256_shuffle_ps(a, b, 0x83);
		case 0x84: return _mm256_shuffle_ps(a, b, 0x84);
		case 0x85: return _mm256_shuffle_ps(a, b, 0x85);
		case 0x86: return _mm256_shuffle_ps(a, b, 0x86);
		case 0x87: return _mm256_shuffle_ps(a, b, 0x87);
		case 0x88: return _mm256_shuffle_ps(a, b, 0x88);
		case 0x89: return _mm256_shuffle_ps(a, b, 0x89);
		case 0x8A: return _mm256_shuffle_ps(a, b, 0x8A);
		case 0x8B: return _mm256_shuffle_ps(a, b, 0x8B);
		case 0x8C: return _mm256_shuffle_ps(a, b, 0x8C);
		case 0x8D: return _mm256_shuffle_ps(a, b, 0x8D);
		case 0x8E: return _mm256_shuffle_ps(a, b, 0x8E);
		case 0x8F: return _mm256_shuffle_ps(a, b, 0x8F);
		case 0x90: return _mm256_shuffle_ps(a, b, 0x90);
		case 0x91: return _mm256_shuffle_ps(a, b, 0x91);
		case 0x92: return _mm256_shuffle_ps(a, b, 0x92);
		case 0x93: return _mm256_shuffle_ps(a, b, 0x93);
		case 0x94: return _mm256_shuffle_ps(a, b, 0x94);
		case 0x95: return _mm256_shuffle_ps(a, b, 0x95);
		case 0x96: return _mm256_shuffle_ps(a, b, 0x96);
		case 0x97: return _mm256_shuffle_ps(a, b, 0x97);
		case 0x98: return _mm256_shuffle_ps(a, b, 0x98);
		case 0x99: return _mm256_shuffle_ps(a, b, 0x99);
		case 0x9A: return _mm256_shuffle_ps(a, b, 0x9A);
		case 0x9B: return _mm256_shuffle_ps(a, b, 0x9B);
		case 0x9C: return _mm256_shuffle_ps(a, b, 0x9C);
		case 0x9D: return _mm256_shuffle_ps(a, b, 0x9D);
		case 0x9E: return _mm256_shuffle_ps(a, b, 0x9E);
		case 0x9F: return _mm256_shuffle_ps(a, b, 0x9F);
		case 0xA0: return _mm256_shuffle_ps(a, b, 0xA0);
		case 0xA1: return _mm256_shuffle_ps(a, b, 0xA1);
		case 0xA2: return _mm256_shuffle_ps(a, b, 0xA2);
		case 0xA3: return _mm256_shuffle_ps(a, b, 0xA3);
		case 0xA4: return _mm256_shuffle_ps(a, b, 0xA4);
		case 0xA5: return _mm256_shuffle_ps(a, b, 0xA5);
		case 0xA6: return _mm256_shuffle_ps(a, b, 0xA6);
		case 0xA7: return _mm256_shuffle_ps(a, b, 0xA7);
		case 0xA8: return _mm256_shuffle_ps(a, b, 0xA8);
		case 0xA9: return _mm256_shuffle_ps(a, b, 0xA9);
		case 0xAA: return _mm256_shuffle_ps(a, b, 0xAA);
		case 0xAB: return _mm256_shuffle_ps(a, b, 0xAB);
		case 0xAC: return _mm256_shuffle_ps(a, b, 0xAC);
		case 0xAD: return _mm256_shuffle_ps(a, b, 0xAD);
		case 0xAE: return _mm256_shuffle_ps(a, b, 0xAE);
		case 0xAF: return _mm256_shuffle_ps(a, b, 0xAF);
		case 0xB0: return _mm256_shuffle_ps(a, b, 0xB0);
		case 0xB1: return _mm256_shuffle_ps(a, b, 0xB1);
		case 0xB2: return _mm256_shuffle_ps(a, b, 0xB2);
		case 0xB3: return _mm256_shuffle_ps(a, b, 0xB3);
		case 0xB4: return _mm256_shuffle_ps(a, b, 0xB4);
		case 0xB5: return _mm256_shuffle_ps(a, b, 0xB5);
		case 0xB6: return _mm256_shuffle_ps(a, b, 0xB6);
		case 0xB7: return _mm256_shuffle_ps(a, b, 0xB7);
		case 0xB8: return _mm256_shuffle_ps(a, b, 0xB8);
		case 0xB9: return _mm256_shuffle_ps(a, b, 0xB9);
		case 0xBA: return _mm256_shuffle_ps(a, b, 0xBA);
		case 0xBB: return _mm256_shuffle_ps(a, b, 0xBB);
		case 0xBC: return _mm256_shuffle_ps(a, b, 0xBC);
		case 0xBD: return _mm256_shuffle_ps(a, b, 0xBD);
		case 0xBE: return _mm256_shuffle_ps(a, b, 0xBE);
		case 0xBF: return _mm256_shuffle_ps(a, b, 0xBF);
		case 0xC0: return _mm256_shuffle_ps(a, b, 0xC0);
		case 0xC1: return _mm256_shuffle_ps(a, b, 0xC1);
		case 0xC2: return _mm256_shuffle_ps(a, b, 0xC2);
		case 0xC3: return _mm256_shuffle_ps(a, b, 0xC3);
		case 0xC4: return _mm256_shuffle_ps(a, b, 0xC4);
		case 0xC5: return _mm256_shuffle_ps(a, b, 0xC5);
		case 0xC6: return _mm256_shuffle_ps(a, b, 0xC6);
		case 0xC7: return _mm256_shuffle_ps(a, b, 0xC7);
		case 0xC8: return _mm256_shuffle_ps(a, b, 0xC8);
		case 0xC9: return _mm256_shuffle_ps(a, b, 0xC9);
		case 0xCA: return _mm256_shuffle_ps(a, b, 0xCA);
		case 0xCB: return _mm256_shuffle_ps(a, b, 0xCB);
		case 0xCC: return _mm256_shuffle_ps(a, b, 0xCC);
		case 0xCD: return _mm256_shuffle_ps(a, b, 0xCD);
		case 0xCE: return _mm256_shuffle_ps(a, b, 0xCE);
		case 0xCF: return _mm256_shuffle_ps(a, b, 0xCF);
		case 0xD0: return _mm256_shuffle_ps(a, b, 0xD0);
		case 0xD1: return _mm256_shuffle_ps(a, b, 0xD1);
		case 0xD2: return _mm256_shuffle_ps(a, b, 0xD2);
		case 0xD3: return _mm256_shuffle_ps(a, b, 0xD3);
		case 0xD4: return _mm256_shuffle_ps(a, b, 0xD4);
		case 0xD5: return _mm256_shuffle_ps(a, b, 0xD5);
		case 0xD6: return _mm256_shuffle_ps(a, b, 0xD6);
		case 0xD7: return _mm256_shuffle_ps(a, b, 0xD7);
		case 0xD8: return _mm256_shuffle_ps(a, b, 0xD8);
		case 0xD9: return _mm256_shuffle_ps(a, b, 0xD9);
		case 0xDA: return _mm256_shuffle_ps(a, b, 0xDA);
		case 0xDB: return _mm256_shuffle_ps(a, b, 0xDB);
		case 0xDC: return _mm256_shuffle_ps(a, b, 0xDC);
		case 0xDD: return _mm256_shuffle_ps(a, b, 0xDD);
		case 0xDE: return _mm256_shuffle_ps(a, b, 0xDE);
		case 0xDF: return _mm256_shuffle_ps(a, b, 0xDF);
		case 0xE0: return _mm256_shuffle_ps(a, b, 0xE0);
		case 0xE1: return _mm256_shuffle_ps(a, b, 0xE1);
		case 0xE2: return _mm256_shuffle_ps(a, b, 0xE2);
		case 0xE3: return _mm256_shuffle_ps(a, b, 0xE3);
		case 0xE4: return _mm256_shuffle_ps(a, b, 0xE4);
		case 0xE5: return _mm256_shuffle_ps(a, b, 0xE5);
		case 0xE6: return _mm256_shuffle_ps(a, b, 0xE6);
		case 0xE7: return _mm256_shuffle_ps(a, b, 0xE7);
		case 0xE8: return _mm256_shuffle_ps(a, b, 0xE8);
		case 0xE9: return _mm256_shuffle_ps(a, b, 0xE9);
		case 0xEA: return _mm256_shuffle_ps(a, b, 0xEA);
		case 0xEB: return _mm256_shuffle_ps(a, b, 0xEB);
		case 0xEC: return _mm256_shuffle_ps(a, b, 0xEC);
		case 0xED: return _mm256_shuffle_ps(a, b, 0xED);
		case 0xEE: return _mm256_shuffle_ps(a, b, 0xEE);
		case 0xEF: return _mm256_shuffle_ps(a, b, 0xEF);
		case 0xF0: return _mm256_shuffle_ps(a, b, 0xF0);
		case 0xF1: return _mm256_shuffle_ps(a, b, 0xF1);
		case 0xF2: return _mm256_shuffle_ps(a, b, 0xF2);
		case 0xF3: return _mm256_shuffle_ps(a, b, 0xF3);
		case 0xF4: return _mm256_shuffle_ps(a, b, 0xF4);
		case 0xF5: return _mm256_shuffle_ps(a, b, 0xF5);
		case 0xF6: return _mm256_shuffle_ps(a, b, 0xF6);
		case 0xF7: return _mm256_shuffle_ps(a, b, 0xF7);
		case 0xF8: return _mm256_shuffle_ps(a, b, 0xF8);
		case 0xF9: return _mm256_shuffle_ps(a, b, 0xF9);
		case 0xFA: return _mm256_shuffle_ps(a, b, 0xFA);
		case 0xFB: return _mm256_shuffle_ps(a, b, 0xFB);
		case 0xFC: return _mm256_shuffle_ps(a, b, 0xFC);
		case 0xFD: return _mm256_shuffle_ps(a, b, 0xFD);
		case 0xFE: return _mm256_shuffle_ps(a, b, 0xFE);
		default:   return _mm256_shuffle_ps(a, b, 0xFF);
	}
}

__m256d avx256_sqrt_pd(__m256d a) { return _mm256_sqrt_pd(a); }

__m256 avx256_sqrt_ps(__m256 a) { return _mm256_sqrt_ps(a); }

void avx256_store_pd(double* mem_addr, __m256d a) { return _mm256_store_pd(mem_addr, a); }

void avx256_store_ps(float* mem_addr, __m256 a) { return _mm256_store_ps(mem_addr, a); }

void avx256_store_si256(__m256i* mem_addr, __m256i a) { return _mm256_store_si256(mem_addr, a); }

void avx256_storeu_pd(double* mem_addr, __m256d a) { return _mm256_storeu_pd(mem_addr, a); }

void avx256_storeu_ps(float* mem_addr, __m256 a) { return _mm256_storeu_ps(mem_addr, a); }

void avx256_storeu_si256(__m256i* mem_addr, __m256i a) { return _mm256_storeu_si256(mem_addr, a); }

void avx256_storeu2_m128(float* hiaddr, float* loaddr, __m256 a) { return _mm256_storeu2_m128(hiaddr, loaddr, a); }

void avx256_storeu2_m128d(double* hiaddr, double* loaddr, __m256d a) { return _mm256_storeu2_m128d(hiaddr, loaddr, a); }

void avx256_storeu2_m128i(__m128i* hiaddr, __m128i* loaddr, __m256i a) { return _mm256_storeu2_m128i(hiaddr, loaddr, a); }

void avx256_stream_pd(double* mem_addr, __m256d a) { return _mm256_stream_pd(mem_addr, a); }

void avx256_stream_ps(float* mem_addr, __m256 a) { return _mm256_stream_ps(mem_addr, a); }

void avx256_stream_si256(__m256i* mem_addr, __m256i a) { return _mm256_stream_si256(mem_addr, a); }

__m256d avx256_sub_pd(__m256d a, __m256d b) { return _mm256_sub_pd(a, b); }

__m256 avx256_sub_ps(__m256 a, __m256 b) { return _mm256_sub_ps(a, b); }

int avx_testc_pd(__m128d a, __m128d b) { return _mm_testc_pd(a, b); }

int avx256_testc_pd(__m256d a, __m256d b) { return _mm256_testc_pd(a, b); }

int avx_testc_ps(__m128 a, __m128 b) { return _mm_testc_ps(a, b); }

int avx256_testc_ps(__m256 a, __m256 b) { return _mm256_testc_ps(a, b); }

int avx256_testc_si256(__m256i a, __m256i b) { return _mm256_testc_si256(a, b); }

int avx_testnzc_pd(__m128d a, __m128d b) { return _mm_testnzc_pd(a, b); }

int avx256_testnzc_pd(__m256d a, __m256d b) { return _mm256_testnzc_pd(a, b); }

int avx_testnzc_ps(__m128 a, __m128 b) { return _mm_testnzc_ps(a, b); }

int avx256_testnzc_ps(__m256 a, __m256 b) { return _mm256_testnzc_ps(a, b); }

int avx256_testnzc_si256(__m256i a, __m256i b) { return _mm256_testnzc_si256(a, b); }

int avx_testz_pd(__m128d a, __m128d b) { return _mm_testz_pd(a, b); }

int avx256_testz_pd(__m256d a, __m256d b) { return _mm256_testz_pd(a, b); }

int avx_testz_ps(__m128 a, __m128 b) { return _mm_testz_ps(a, b); }

int avx256_testz_ps(__m256 a, __m256 b) { return _mm256_testz_ps(a, b); }

int avx256_testz_si256(__m256i a, __m256i b) { return _mm256_testz_si256(a, b); }

__m256d avx256_undefined_pd() { return _mm256_undefined_pd(); }

__m256 avx256_undefined_ps() { return _mm256_undefined_ps(); }

__m256i avx256_undefined_si256() { return _mm256_undefined_si256(); }

__m256d avx256_unpackhi_pd(__m256d a, __m256d b) { return _mm256_unpackhi_pd(a, b); }

__m256 avx256_unpackhi_ps(__m256 a, __m256 b) { return _mm256_unpackhi_ps(a, b); }

__m256d avx256_unpacklo_pd(__m256d a, __m256d b) { return _mm256_unpacklo_pd(a, b); }

__m256 avx256_unpacklo_ps(__m256 a, __m256 b) { return _mm256_unpacklo_ps(a, b); }

__m256d avx256_xor_pd(__m256d a, __m256d b) { return _mm256_xor_pd(a, b); }

__m256 avx256_xor_ps(__m256 a, __m256 b) { return _mm256_xor_ps(a, b); }

void avx256_zeroall() { return _mm256_zeroall(); }

void avx256_zeroupper() { return _mm256_zeroupper(); }

__m256d avx256_zextpd128_pd256(__m128d a) { return _mm256_zextpd128_pd256(a); }

__m256 avx256_zextps128_ps256(__m128 a) { return _mm256_zextps128_ps256(a); }

__m256i avx256_zextsi128_si256(__m128i a) { return _mm256_zextsi128_si256(a); }
