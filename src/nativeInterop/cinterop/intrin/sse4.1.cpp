#include <immintrin.h>

#include "sse4.1.h"

__m128i sse4_1_blend_epi16(__m128i a, __m128i b, const int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_blend_epi16(a, b, 0x00);
		case 0x01: return _mm_blend_epi16(a, b, 0x01);
		case 0x02: return _mm_blend_epi16(a, b, 0x02);
		case 0x03: return _mm_blend_epi16(a, b, 0x03);
		case 0x04: return _mm_blend_epi16(a, b, 0x04);
		case 0x05: return _mm_blend_epi16(a, b, 0x05);
		case 0x06: return _mm_blend_epi16(a, b, 0x06);
		case 0x07: return _mm_blend_epi16(a, b, 0x07);
		case 0x08: return _mm_blend_epi16(a, b, 0x08);
		case 0x09: return _mm_blend_epi16(a, b, 0x09);
		case 0x0A: return _mm_blend_epi16(a, b, 0x0A);
		case 0x0B: return _mm_blend_epi16(a, b, 0x0B);
		case 0x0C: return _mm_blend_epi16(a, b, 0x0C);
		case 0x0D: return _mm_blend_epi16(a, b, 0x0D);
		case 0x0E: return _mm_blend_epi16(a, b, 0x0E);
		case 0x0F: return _mm_blend_epi16(a, b, 0x0F);
		case 0x10: return _mm_blend_epi16(a, b, 0x10);
		case 0x11: return _mm_blend_epi16(a, b, 0x11);
		case 0x12: return _mm_blend_epi16(a, b, 0x12);
		case 0x13: return _mm_blend_epi16(a, b, 0x13);
		case 0x14: return _mm_blend_epi16(a, b, 0x14);
		case 0x15: return _mm_blend_epi16(a, b, 0x15);
		case 0x16: return _mm_blend_epi16(a, b, 0x16);
		case 0x17: return _mm_blend_epi16(a, b, 0x17);
		case 0x18: return _mm_blend_epi16(a, b, 0x18);
		case 0x19: return _mm_blend_epi16(a, b, 0x19);
		case 0x1A: return _mm_blend_epi16(a, b, 0x1A);
		case 0x1B: return _mm_blend_epi16(a, b, 0x1B);
		case 0x1C: return _mm_blend_epi16(a, b, 0x1C);
		case 0x1D: return _mm_blend_epi16(a, b, 0x1D);
		case 0x1E: return _mm_blend_epi16(a, b, 0x1E);
		case 0x1F: return _mm_blend_epi16(a, b, 0x1F);
		case 0x20: return _mm_blend_epi16(a, b, 0x20);
		case 0x21: return _mm_blend_epi16(a, b, 0x21);
		case 0x22: return _mm_blend_epi16(a, b, 0x22);
		case 0x23: return _mm_blend_epi16(a, b, 0x23);
		case 0x24: return _mm_blend_epi16(a, b, 0x24);
		case 0x25: return _mm_blend_epi16(a, b, 0x25);
		case 0x26: return _mm_blend_epi16(a, b, 0x26);
		case 0x27: return _mm_blend_epi16(a, b, 0x27);
		case 0x28: return _mm_blend_epi16(a, b, 0x28);
		case 0x29: return _mm_blend_epi16(a, b, 0x29);
		case 0x2A: return _mm_blend_epi16(a, b, 0x2A);
		case 0x2B: return _mm_blend_epi16(a, b, 0x2B);
		case 0x2C: return _mm_blend_epi16(a, b, 0x2C);
		case 0x2D: return _mm_blend_epi16(a, b, 0x2D);
		case 0x2E: return _mm_blend_epi16(a, b, 0x2E);
		case 0x2F: return _mm_blend_epi16(a, b, 0x2F);
		case 0x30: return _mm_blend_epi16(a, b, 0x30);
		case 0x31: return _mm_blend_epi16(a, b, 0x31);
		case 0x32: return _mm_blend_epi16(a, b, 0x32);
		case 0x33: return _mm_blend_epi16(a, b, 0x33);
		case 0x34: return _mm_blend_epi16(a, b, 0x34);
		case 0x35: return _mm_blend_epi16(a, b, 0x35);
		case 0x36: return _mm_blend_epi16(a, b, 0x36);
		case 0x37: return _mm_blend_epi16(a, b, 0x37);
		case 0x38: return _mm_blend_epi16(a, b, 0x38);
		case 0x39: return _mm_blend_epi16(a, b, 0x39);
		case 0x3A: return _mm_blend_epi16(a, b, 0x3A);
		case 0x3B: return _mm_blend_epi16(a, b, 0x3B);
		case 0x3C: return _mm_blend_epi16(a, b, 0x3C);
		case 0x3D: return _mm_blend_epi16(a, b, 0x3D);
		case 0x3E: return _mm_blend_epi16(a, b, 0x3E);
		case 0x3F: return _mm_blend_epi16(a, b, 0x3F);
		case 0x40: return _mm_blend_epi16(a, b, 0x40);
		case 0x41: return _mm_blend_epi16(a, b, 0x41);
		case 0x42: return _mm_blend_epi16(a, b, 0x42);
		case 0x43: return _mm_blend_epi16(a, b, 0x43);
		case 0x44: return _mm_blend_epi16(a, b, 0x44);
		case 0x45: return _mm_blend_epi16(a, b, 0x45);
		case 0x46: return _mm_blend_epi16(a, b, 0x46);
		case 0x47: return _mm_blend_epi16(a, b, 0x47);
		case 0x48: return _mm_blend_epi16(a, b, 0x48);
		case 0x49: return _mm_blend_epi16(a, b, 0x49);
		case 0x4A: return _mm_blend_epi16(a, b, 0x4A);
		case 0x4B: return _mm_blend_epi16(a, b, 0x4B);
		case 0x4C: return _mm_blend_epi16(a, b, 0x4C);
		case 0x4D: return _mm_blend_epi16(a, b, 0x4D);
		case 0x4E: return _mm_blend_epi16(a, b, 0x4E);
		case 0x4F: return _mm_blend_epi16(a, b, 0x4F);
		case 0x50: return _mm_blend_epi16(a, b, 0x50);
		case 0x51: return _mm_blend_epi16(a, b, 0x51);
		case 0x52: return _mm_blend_epi16(a, b, 0x52);
		case 0x53: return _mm_blend_epi16(a, b, 0x53);
		case 0x54: return _mm_blend_epi16(a, b, 0x54);
		case 0x55: return _mm_blend_epi16(a, b, 0x55);
		case 0x56: return _mm_blend_epi16(a, b, 0x56);
		case 0x57: return _mm_blend_epi16(a, b, 0x57);
		case 0x58: return _mm_blend_epi16(a, b, 0x58);
		case 0x59: return _mm_blend_epi16(a, b, 0x59);
		case 0x5A: return _mm_blend_epi16(a, b, 0x5A);
		case 0x5B: return _mm_blend_epi16(a, b, 0x5B);
		case 0x5C: return _mm_blend_epi16(a, b, 0x5C);
		case 0x5D: return _mm_blend_epi16(a, b, 0x5D);
		case 0x5E: return _mm_blend_epi16(a, b, 0x5E);
		case 0x5F: return _mm_blend_epi16(a, b, 0x5F);
		case 0x60: return _mm_blend_epi16(a, b, 0x60);
		case 0x61: return _mm_blend_epi16(a, b, 0x61);
		case 0x62: return _mm_blend_epi16(a, b, 0x62);
		case 0x63: return _mm_blend_epi16(a, b, 0x63);
		case 0x64: return _mm_blend_epi16(a, b, 0x64);
		case 0x65: return _mm_blend_epi16(a, b, 0x65);
		case 0x66: return _mm_blend_epi16(a, b, 0x66);
		case 0x67: return _mm_blend_epi16(a, b, 0x67);
		case 0x68: return _mm_blend_epi16(a, b, 0x68);
		case 0x69: return _mm_blend_epi16(a, b, 0x69);
		case 0x6A: return _mm_blend_epi16(a, b, 0x6A);
		case 0x6B: return _mm_blend_epi16(a, b, 0x6B);
		case 0x6C: return _mm_blend_epi16(a, b, 0x6C);
		case 0x6D: return _mm_blend_epi16(a, b, 0x6D);
		case 0x6E: return _mm_blend_epi16(a, b, 0x6E);
		case 0x6F: return _mm_blend_epi16(a, b, 0x6F);
		case 0x70: return _mm_blend_epi16(a, b, 0x70);
		case 0x71: return _mm_blend_epi16(a, b, 0x71);
		case 0x72: return _mm_blend_epi16(a, b, 0x72);
		case 0x73: return _mm_blend_epi16(a, b, 0x73);
		case 0x74: return _mm_blend_epi16(a, b, 0x74);
		case 0x75: return _mm_blend_epi16(a, b, 0x75);
		case 0x76: return _mm_blend_epi16(a, b, 0x76);
		case 0x77: return _mm_blend_epi16(a, b, 0x77);
		case 0x78: return _mm_blend_epi16(a, b, 0x78);
		case 0x79: return _mm_blend_epi16(a, b, 0x79);
		case 0x7A: return _mm_blend_epi16(a, b, 0x7A);
		case 0x7B: return _mm_blend_epi16(a, b, 0x7B);
		case 0x7C: return _mm_blend_epi16(a, b, 0x7C);
		case 0x7D: return _mm_blend_epi16(a, b, 0x7D);
		case 0x7E: return _mm_blend_epi16(a, b, 0x7E);
		case 0x7F: return _mm_blend_epi16(a, b, 0x7F);
		case 0x80: return _mm_blend_epi16(a, b, 0x80);
		case 0x81: return _mm_blend_epi16(a, b, 0x81);
		case 0x82: return _mm_blend_epi16(a, b, 0x82);
		case 0x83: return _mm_blend_epi16(a, b, 0x83);
		case 0x84: return _mm_blend_epi16(a, b, 0x84);
		case 0x85: return _mm_blend_epi16(a, b, 0x85);
		case 0x86: return _mm_blend_epi16(a, b, 0x86);
		case 0x87: return _mm_blend_epi16(a, b, 0x87);
		case 0x88: return _mm_blend_epi16(a, b, 0x88);
		case 0x89: return _mm_blend_epi16(a, b, 0x89);
		case 0x8A: return _mm_blend_epi16(a, b, 0x8A);
		case 0x8B: return _mm_blend_epi16(a, b, 0x8B);
		case 0x8C: return _mm_blend_epi16(a, b, 0x8C);
		case 0x8D: return _mm_blend_epi16(a, b, 0x8D);
		case 0x8E: return _mm_blend_epi16(a, b, 0x8E);
		case 0x8F: return _mm_blend_epi16(a, b, 0x8F);
		case 0x90: return _mm_blend_epi16(a, b, 0x90);
		case 0x91: return _mm_blend_epi16(a, b, 0x91);
		case 0x92: return _mm_blend_epi16(a, b, 0x92);
		case 0x93: return _mm_blend_epi16(a, b, 0x93);
		case 0x94: return _mm_blend_epi16(a, b, 0x94);
		case 0x95: return _mm_blend_epi16(a, b, 0x95);
		case 0x96: return _mm_blend_epi16(a, b, 0x96);
		case 0x97: return _mm_blend_epi16(a, b, 0x97);
		case 0x98: return _mm_blend_epi16(a, b, 0x98);
		case 0x99: return _mm_blend_epi16(a, b, 0x99);
		case 0x9A: return _mm_blend_epi16(a, b, 0x9A);
		case 0x9B: return _mm_blend_epi16(a, b, 0x9B);
		case 0x9C: return _mm_blend_epi16(a, b, 0x9C);
		case 0x9D: return _mm_blend_epi16(a, b, 0x9D);
		case 0x9E: return _mm_blend_epi16(a, b, 0x9E);
		case 0x9F: return _mm_blend_epi16(a, b, 0x9F);
		case 0xA0: return _mm_blend_epi16(a, b, 0xA0);
		case 0xA1: return _mm_blend_epi16(a, b, 0xA1);
		case 0xA2: return _mm_blend_epi16(a, b, 0xA2);
		case 0xA3: return _mm_blend_epi16(a, b, 0xA3);
		case 0xA4: return _mm_blend_epi16(a, b, 0xA4);
		case 0xA5: return _mm_blend_epi16(a, b, 0xA5);
		case 0xA6: return _mm_blend_epi16(a, b, 0xA6);
		case 0xA7: return _mm_blend_epi16(a, b, 0xA7);
		case 0xA8: return _mm_blend_epi16(a, b, 0xA8);
		case 0xA9: return _mm_blend_epi16(a, b, 0xA9);
		case 0xAA: return _mm_blend_epi16(a, b, 0xAA);
		case 0xAB: return _mm_blend_epi16(a, b, 0xAB);
		case 0xAC: return _mm_blend_epi16(a, b, 0xAC);
		case 0xAD: return _mm_blend_epi16(a, b, 0xAD);
		case 0xAE: return _mm_blend_epi16(a, b, 0xAE);
		case 0xAF: return _mm_blend_epi16(a, b, 0xAF);
		case 0xB0: return _mm_blend_epi16(a, b, 0xB0);
		case 0xB1: return _mm_blend_epi16(a, b, 0xB1);
		case 0xB2: return _mm_blend_epi16(a, b, 0xB2);
		case 0xB3: return _mm_blend_epi16(a, b, 0xB3);
		case 0xB4: return _mm_blend_epi16(a, b, 0xB4);
		case 0xB5: return _mm_blend_epi16(a, b, 0xB5);
		case 0xB6: return _mm_blend_epi16(a, b, 0xB6);
		case 0xB7: return _mm_blend_epi16(a, b, 0xB7);
		case 0xB8: return _mm_blend_epi16(a, b, 0xB8);
		case 0xB9: return _mm_blend_epi16(a, b, 0xB9);
		case 0xBA: return _mm_blend_epi16(a, b, 0xBA);
		case 0xBB: return _mm_blend_epi16(a, b, 0xBB);
		case 0xBC: return _mm_blend_epi16(a, b, 0xBC);
		case 0xBD: return _mm_blend_epi16(a, b, 0xBD);
		case 0xBE: return _mm_blend_epi16(a, b, 0xBE);
		case 0xBF: return _mm_blend_epi16(a, b, 0xBF);
		case 0xC0: return _mm_blend_epi16(a, b, 0xC0);
		case 0xC1: return _mm_blend_epi16(a, b, 0xC1);
		case 0xC2: return _mm_blend_epi16(a, b, 0xC2);
		case 0xC3: return _mm_blend_epi16(a, b, 0xC3);
		case 0xC4: return _mm_blend_epi16(a, b, 0xC4);
		case 0xC5: return _mm_blend_epi16(a, b, 0xC5);
		case 0xC6: return _mm_blend_epi16(a, b, 0xC6);
		case 0xC7: return _mm_blend_epi16(a, b, 0xC7);
		case 0xC8: return _mm_blend_epi16(a, b, 0xC8);
		case 0xC9: return _mm_blend_epi16(a, b, 0xC9);
		case 0xCA: return _mm_blend_epi16(a, b, 0xCA);
		case 0xCB: return _mm_blend_epi16(a, b, 0xCB);
		case 0xCC: return _mm_blend_epi16(a, b, 0xCC);
		case 0xCD: return _mm_blend_epi16(a, b, 0xCD);
		case 0xCE: return _mm_blend_epi16(a, b, 0xCE);
		case 0xCF: return _mm_blend_epi16(a, b, 0xCF);
		case 0xD0: return _mm_blend_epi16(a, b, 0xD0);
		case 0xD1: return _mm_blend_epi16(a, b, 0xD1);
		case 0xD2: return _mm_blend_epi16(a, b, 0xD2);
		case 0xD3: return _mm_blend_epi16(a, b, 0xD3);
		case 0xD4: return _mm_blend_epi16(a, b, 0xD4);
		case 0xD5: return _mm_blend_epi16(a, b, 0xD5);
		case 0xD6: return _mm_blend_epi16(a, b, 0xD6);
		case 0xD7: return _mm_blend_epi16(a, b, 0xD7);
		case 0xD8: return _mm_blend_epi16(a, b, 0xD8);
		case 0xD9: return _mm_blend_epi16(a, b, 0xD9);
		case 0xDA: return _mm_blend_epi16(a, b, 0xDA);
		case 0xDB: return _mm_blend_epi16(a, b, 0xDB);
		case 0xDC: return _mm_blend_epi16(a, b, 0xDC);
		case 0xDD: return _mm_blend_epi16(a, b, 0xDD);
		case 0xDE: return _mm_blend_epi16(a, b, 0xDE);
		case 0xDF: return _mm_blend_epi16(a, b, 0xDF);
		case 0xE0: return _mm_blend_epi16(a, b, 0xE0);
		case 0xE1: return _mm_blend_epi16(a, b, 0xE1);
		case 0xE2: return _mm_blend_epi16(a, b, 0xE2);
		case 0xE3: return _mm_blend_epi16(a, b, 0xE3);
		case 0xE4: return _mm_blend_epi16(a, b, 0xE4);
		case 0xE5: return _mm_blend_epi16(a, b, 0xE5);
		case 0xE6: return _mm_blend_epi16(a, b, 0xE6);
		case 0xE7: return _mm_blend_epi16(a, b, 0xE7);
		case 0xE8: return _mm_blend_epi16(a, b, 0xE8);
		case 0xE9: return _mm_blend_epi16(a, b, 0xE9);
		case 0xEA: return _mm_blend_epi16(a, b, 0xEA);
		case 0xEB: return _mm_blend_epi16(a, b, 0xEB);
		case 0xEC: return _mm_blend_epi16(a, b, 0xEC);
		case 0xED: return _mm_blend_epi16(a, b, 0xED);
		case 0xEE: return _mm_blend_epi16(a, b, 0xEE);
		case 0xEF: return _mm_blend_epi16(a, b, 0xEF);
		case 0xF0: return _mm_blend_epi16(a, b, 0xF0);
		case 0xF1: return _mm_blend_epi16(a, b, 0xF1);
		case 0xF2: return _mm_blend_epi16(a, b, 0xF2);
		case 0xF3: return _mm_blend_epi16(a, b, 0xF3);
		case 0xF4: return _mm_blend_epi16(a, b, 0xF4);
		case 0xF5: return _mm_blend_epi16(a, b, 0xF5);
		case 0xF6: return _mm_blend_epi16(a, b, 0xF6);
		case 0xF7: return _mm_blend_epi16(a, b, 0xF7);
		case 0xF8: return _mm_blend_epi16(a, b, 0xF8);
		case 0xF9: return _mm_blend_epi16(a, b, 0xF9);
		case 0xFA: return _mm_blend_epi16(a, b, 0xFA);
		case 0xFB: return _mm_blend_epi16(a, b, 0xFB);
		case 0xFC: return _mm_blend_epi16(a, b, 0xFC);
		case 0xFD: return _mm_blend_epi16(a, b, 0xFD);
		case 0xFE: return _mm_blend_epi16(a, b, 0xFE);
		default:   return _mm_blend_epi16(a, b, 0xFF);
	}
}

__m128d sse4_1_blend_pd(__m128d a, __m128d b, const int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_blend_pd(a, b, 0);
		case 1:  return _mm_blend_pd(a, b, 1);
		case 2:  return _mm_blend_pd(a, b, 2);
		default: return _mm_blend_pd(a, b, 3);
	}
}

__m128 sse4_1_blend_ps(__m128 a, __m128 b, const int imm8) {
	switch (imm8 & 0xF) {
		case  0: return _mm_blend_ps(a, b,  0);
		case  1: return _mm_blend_ps(a, b,  1);
		case  2: return _mm_blend_ps(a, b,  2);
		case  3: return _mm_blend_ps(a, b,  3);
		case  4: return _mm_blend_ps(a, b,  4);
		case  5: return _mm_blend_ps(a, b,  5);
		case  6: return _mm_blend_ps(a, b,  6);
		case  7: return _mm_blend_ps(a, b,  7);
		case  8: return _mm_blend_ps(a, b,  8);
		case  9: return _mm_blend_ps(a, b,  9);
		case 10: return _mm_blend_ps(a, b, 10);
		case 11: return _mm_blend_ps(a, b, 11);
		case 12: return _mm_blend_ps(a, b, 12);
		case 13: return _mm_blend_ps(a, b, 13);
		case 14: return _mm_blend_ps(a, b, 14);
		default: return _mm_blend_ps(a, b, 15);
	}
}

__m128i sse4_1_blendv_epi8(__m128i a, __m128i b, __m128i mask) { return _mm_blendv_epi8(a, b, mask); }

__m128d sse4_1_blendv_pd(__m128d a, __m128d b, __m128d mask) { return _mm_blendv_pd(a, b, mask); }

__m128 sse4_1_blendv_ps(__m128 a, __m128 b, __m128 mask) { return _mm_blendv_ps(a, b, mask); }

__m128d sse4_1_ceil_pd(__m128d a) { return _mm_ceil_pd(a); }

__m128 sse4_1_ceil_ps(__m128 a) { return _mm_ceil_ps(a); }

__m128d sse4_1_ceil_sd(__m128d a, __m128d b) { return _mm_ceil_sd(a, b); }

__m128 sse4_1_ceil_ss(__m128 a, __m128 b) { return _mm_ceil_ss(a, b); }

__m128i sse4_1_cmpeq_epi64(__m128i a, __m128i b) { return _mm_cmpeq_epi64(a, b); }

__m128i sse4_1_cvtepi16_epi32(__m128i a) { return _mm_cvtepi16_epi32(a); }

__m128i sse4_1_cvtepi16_epi64(__m128i a) { return _mm_cvtepi16_epi64(a); }

__m128i sse4_1_cvtepi32_epi64(__m128i a) { return _mm_cvtepi32_epi64(a); }

__m128i sse4_1_cvtepi8_epi16(__m128i a) { return _mm_cvtepi8_epi16(a); }

__m128i sse4_1_cvtepi8_epi32(__m128i a) { return _mm_cvtepi8_epi32(a); }

__m128i sse4_1_cvtepi8_epi64(__m128i a) { return _mm_cvtepi8_epi64(a); }

__m128i sse4_1_cvtepu16_epi32(__m128i a) { return _mm_cvtepu16_epi32(a); }

__m128i sse4_1_cvtepu16_epi64(__m128i a) { return _mm_cvtepu16_epi64(a); }

__m128i sse4_1_cvtepu32_epi64(__m128i a) { return _mm_cvtepu32_epi64(a); }

__m128i sse4_1_cvtepu8_epi16(__m128i a) { return _mm_cvtepu8_epi16(a); }

__m128i sse4_1_cvtepu8_epi32(__m128i a) { return _mm_cvtepu8_epi32(a); }

__m128i sse4_1_cvtepu8_epi64(__m128i a) { return _mm_cvtepu8_epi64(a); }

__m128d sse4_1_dp_pd(__m128d a, __m128d b, const int imm8) {
	switch (imm8 & 0x33) {
		case 0x00: return _mm_dp_pd(a, b, 0x00);
		case 0x01: return _mm_dp_pd(a, b, 0x01);
		case 0x02: return _mm_dp_pd(a, b, 0x02);
		case 0x03: return _mm_dp_pd(a, b, 0x03);
		case 0x10: return _mm_dp_pd(a, b, 0x10);
		case 0x11: return _mm_dp_pd(a, b, 0x11);
		case 0x12: return _mm_dp_pd(a, b, 0x12);
		case 0x13: return _mm_dp_pd(a, b, 0x13);
		case 0x20: return _mm_dp_pd(a, b, 0x20);
		case 0x21: return _mm_dp_pd(a, b, 0x21);
		case 0x22: return _mm_dp_pd(a, b, 0x22);
		case 0x23: return _mm_dp_pd(a, b, 0x23);
		case 0x30: return _mm_dp_pd(a, b, 0x30);
		case 0x31: return _mm_dp_pd(a, b, 0x31);
		case 0x32: return _mm_dp_pd(a, b, 0x32);
		default:   return _mm_dp_pd(a, b, 0x33);
	}
}

__m128 sse4_1_dp_ps(__m128 a, __m128 b, const int imm8) {
	switch (imm8 & 0xFF) {
		case 0x00: return _mm_dp_ps(a, b, 0x00);
		case 0x01: return _mm_dp_ps(a, b, 0x01);
		case 0x02: return _mm_dp_ps(a, b, 0x02);
		case 0x03: return _mm_dp_ps(a, b, 0x03);
		case 0x04: return _mm_dp_ps(a, b, 0x04);
		case 0x05: return _mm_dp_ps(a, b, 0x05);
		case 0x06: return _mm_dp_ps(a, b, 0x06);
		case 0x07: return _mm_dp_ps(a, b, 0x07);
		case 0x08: return _mm_dp_ps(a, b, 0x08);
		case 0x09: return _mm_dp_ps(a, b, 0x09);
		case 0x0A: return _mm_dp_ps(a, b, 0x0A);
		case 0x0B: return _mm_dp_ps(a, b, 0x0B);
		case 0x0C: return _mm_dp_ps(a, b, 0x0C);
		case 0x0D: return _mm_dp_ps(a, b, 0x0D);
		case 0x0E: return _mm_dp_ps(a, b, 0x0E);
		case 0x0F: return _mm_dp_ps(a, b, 0x0F);
		case 0x10: return _mm_dp_ps(a, b, 0x10);
		case 0x11: return _mm_dp_ps(a, b, 0x11);
		case 0x12: return _mm_dp_ps(a, b, 0x12);
		case 0x13: return _mm_dp_ps(a, b, 0x13);
		case 0x14: return _mm_dp_ps(a, b, 0x14);
		case 0x15: return _mm_dp_ps(a, b, 0x15);
		case 0x16: return _mm_dp_ps(a, b, 0x16);
		case 0x17: return _mm_dp_ps(a, b, 0x17);
		case 0x18: return _mm_dp_ps(a, b, 0x18);
		case 0x19: return _mm_dp_ps(a, b, 0x19);
		case 0x1A: return _mm_dp_ps(a, b, 0x1A);
		case 0x1B: return _mm_dp_ps(a, b, 0x1B);
		case 0x1C: return _mm_dp_ps(a, b, 0x1C);
		case 0x1D: return _mm_dp_ps(a, b, 0x1D);
		case 0x1E: return _mm_dp_ps(a, b, 0x1E);
		case 0x1F: return _mm_dp_ps(a, b, 0x1F);
		case 0x20: return _mm_dp_ps(a, b, 0x20);
		case 0x21: return _mm_dp_ps(a, b, 0x21);
		case 0x22: return _mm_dp_ps(a, b, 0x22);
		case 0x23: return _mm_dp_ps(a, b, 0x23);
		case 0x24: return _mm_dp_ps(a, b, 0x24);
		case 0x25: return _mm_dp_ps(a, b, 0x25);
		case 0x26: return _mm_dp_ps(a, b, 0x26);
		case 0x27: return _mm_dp_ps(a, b, 0x27);
		case 0x28: return _mm_dp_ps(a, b, 0x28);
		case 0x29: return _mm_dp_ps(a, b, 0x29);
		case 0x2A: return _mm_dp_ps(a, b, 0x2A);
		case 0x2B: return _mm_dp_ps(a, b, 0x2B);
		case 0x2C: return _mm_dp_ps(a, b, 0x2C);
		case 0x2D: return _mm_dp_ps(a, b, 0x2D);
		case 0x2E: return _mm_dp_ps(a, b, 0x2E);
		case 0x2F: return _mm_dp_ps(a, b, 0x2F);
		case 0x30: return _mm_dp_ps(a, b, 0x30);
		case 0x31: return _mm_dp_ps(a, b, 0x31);
		case 0x32: return _mm_dp_ps(a, b, 0x32);
		case 0x33: return _mm_dp_ps(a, b, 0x33);
		case 0x34: return _mm_dp_ps(a, b, 0x34);
		case 0x35: return _mm_dp_ps(a, b, 0x35);
		case 0x36: return _mm_dp_ps(a, b, 0x36);
		case 0x37: return _mm_dp_ps(a, b, 0x37);
		case 0x38: return _mm_dp_ps(a, b, 0x38);
		case 0x39: return _mm_dp_ps(a, b, 0x39);
		case 0x3A: return _mm_dp_ps(a, b, 0x3A);
		case 0x3B: return _mm_dp_ps(a, b, 0x3B);
		case 0x3C: return _mm_dp_ps(a, b, 0x3C);
		case 0x3D: return _mm_dp_ps(a, b, 0x3D);
		case 0x3E: return _mm_dp_ps(a, b, 0x3E);
		case 0x3F: return _mm_dp_ps(a, b, 0x3F);
		case 0x40: return _mm_dp_ps(a, b, 0x40);
		case 0x41: return _mm_dp_ps(a, b, 0x41);
		case 0x42: return _mm_dp_ps(a, b, 0x42);
		case 0x43: return _mm_dp_ps(a, b, 0x43);
		case 0x44: return _mm_dp_ps(a, b, 0x44);
		case 0x45: return _mm_dp_ps(a, b, 0x45);
		case 0x46: return _mm_dp_ps(a, b, 0x46);
		case 0x47: return _mm_dp_ps(a, b, 0x47);
		case 0x48: return _mm_dp_ps(a, b, 0x48);
		case 0x49: return _mm_dp_ps(a, b, 0x49);
		case 0x4A: return _mm_dp_ps(a, b, 0x4A);
		case 0x4B: return _mm_dp_ps(a, b, 0x4B);
		case 0x4C: return _mm_dp_ps(a, b, 0x4C);
		case 0x4D: return _mm_dp_ps(a, b, 0x4D);
		case 0x4E: return _mm_dp_ps(a, b, 0x4E);
		case 0x4F: return _mm_dp_ps(a, b, 0x4F);
		case 0x50: return _mm_dp_ps(a, b, 0x50);
		case 0x51: return _mm_dp_ps(a, b, 0x51);
		case 0x52: return _mm_dp_ps(a, b, 0x52);
		case 0x53: return _mm_dp_ps(a, b, 0x53);
		case 0x54: return _mm_dp_ps(a, b, 0x54);
		case 0x55: return _mm_dp_ps(a, b, 0x55);
		case 0x56: return _mm_dp_ps(a, b, 0x56);
		case 0x57: return _mm_dp_ps(a, b, 0x57);
		case 0x58: return _mm_dp_ps(a, b, 0x58);
		case 0x59: return _mm_dp_ps(a, b, 0x59);
		case 0x5A: return _mm_dp_ps(a, b, 0x5A);
		case 0x5B: return _mm_dp_ps(a, b, 0x5B);
		case 0x5C: return _mm_dp_ps(a, b, 0x5C);
		case 0x5D: return _mm_dp_ps(a, b, 0x5D);
		case 0x5E: return _mm_dp_ps(a, b, 0x5E);
		case 0x5F: return _mm_dp_ps(a, b, 0x5F);
		case 0x60: return _mm_dp_ps(a, b, 0x60);
		case 0x61: return _mm_dp_ps(a, b, 0x61);
		case 0x62: return _mm_dp_ps(a, b, 0x62);
		case 0x63: return _mm_dp_ps(a, b, 0x63);
		case 0x64: return _mm_dp_ps(a, b, 0x64);
		case 0x65: return _mm_dp_ps(a, b, 0x65);
		case 0x66: return _mm_dp_ps(a, b, 0x66);
		case 0x67: return _mm_dp_ps(a, b, 0x67);
		case 0x68: return _mm_dp_ps(a, b, 0x68);
		case 0x69: return _mm_dp_ps(a, b, 0x69);
		case 0x6A: return _mm_dp_ps(a, b, 0x6A);
		case 0x6B: return _mm_dp_ps(a, b, 0x6B);
		case 0x6C: return _mm_dp_ps(a, b, 0x6C);
		case 0x6D: return _mm_dp_ps(a, b, 0x6D);
		case 0x6E: return _mm_dp_ps(a, b, 0x6E);
		case 0x6F: return _mm_dp_ps(a, b, 0x6F);
		case 0x70: return _mm_dp_ps(a, b, 0x70);
		case 0x71: return _mm_dp_ps(a, b, 0x71);
		case 0x72: return _mm_dp_ps(a, b, 0x72);
		case 0x73: return _mm_dp_ps(a, b, 0x73);
		case 0x74: return _mm_dp_ps(a, b, 0x74);
		case 0x75: return _mm_dp_ps(a, b, 0x75);
		case 0x76: return _mm_dp_ps(a, b, 0x76);
		case 0x77: return _mm_dp_ps(a, b, 0x77);
		case 0x78: return _mm_dp_ps(a, b, 0x78);
		case 0x79: return _mm_dp_ps(a, b, 0x79);
		case 0x7A: return _mm_dp_ps(a, b, 0x7A);
		case 0x7B: return _mm_dp_ps(a, b, 0x7B);
		case 0x7C: return _mm_dp_ps(a, b, 0x7C);
		case 0x7D: return _mm_dp_ps(a, b, 0x7D);
		case 0x7E: return _mm_dp_ps(a, b, 0x7E);
		case 0x7F: return _mm_dp_ps(a, b, 0x7F);
		case 0x80: return _mm_dp_ps(a, b, 0x80);
		case 0x81: return _mm_dp_ps(a, b, 0x81);
		case 0x82: return _mm_dp_ps(a, b, 0x82);
		case 0x83: return _mm_dp_ps(a, b, 0x83);
		case 0x84: return _mm_dp_ps(a, b, 0x84);
		case 0x85: return _mm_dp_ps(a, b, 0x85);
		case 0x86: return _mm_dp_ps(a, b, 0x86);
		case 0x87: return _mm_dp_ps(a, b, 0x87);
		case 0x88: return _mm_dp_ps(a, b, 0x88);
		case 0x89: return _mm_dp_ps(a, b, 0x89);
		case 0x8A: return _mm_dp_ps(a, b, 0x8A);
		case 0x8B: return _mm_dp_ps(a, b, 0x8B);
		case 0x8C: return _mm_dp_ps(a, b, 0x8C);
		case 0x8D: return _mm_dp_ps(a, b, 0x8D);
		case 0x8E: return _mm_dp_ps(a, b, 0x8E);
		case 0x8F: return _mm_dp_ps(a, b, 0x8F);
		case 0x90: return _mm_dp_ps(a, b, 0x90);
		case 0x91: return _mm_dp_ps(a, b, 0x91);
		case 0x92: return _mm_dp_ps(a, b, 0x92);
		case 0x93: return _mm_dp_ps(a, b, 0x93);
		case 0x94: return _mm_dp_ps(a, b, 0x94);
		case 0x95: return _mm_dp_ps(a, b, 0x95);
		case 0x96: return _mm_dp_ps(a, b, 0x96);
		case 0x97: return _mm_dp_ps(a, b, 0x97);
		case 0x98: return _mm_dp_ps(a, b, 0x98);
		case 0x99: return _mm_dp_ps(a, b, 0x99);
		case 0x9A: return _mm_dp_ps(a, b, 0x9A);
		case 0x9B: return _mm_dp_ps(a, b, 0x9B);
		case 0x9C: return _mm_dp_ps(a, b, 0x9C);
		case 0x9D: return _mm_dp_ps(a, b, 0x9D);
		case 0x9E: return _mm_dp_ps(a, b, 0x9E);
		case 0x9F: return _mm_dp_ps(a, b, 0x9F);
		case 0xA0: return _mm_dp_ps(a, b, 0xA0);
		case 0xA1: return _mm_dp_ps(a, b, 0xA1);
		case 0xA2: return _mm_dp_ps(a, b, 0xA2);
		case 0xA3: return _mm_dp_ps(a, b, 0xA3);
		case 0xA4: return _mm_dp_ps(a, b, 0xA4);
		case 0xA5: return _mm_dp_ps(a, b, 0xA5);
		case 0xA6: return _mm_dp_ps(a, b, 0xA6);
		case 0xA7: return _mm_dp_ps(a, b, 0xA7);
		case 0xA8: return _mm_dp_ps(a, b, 0xA8);
		case 0xA9: return _mm_dp_ps(a, b, 0xA9);
		case 0xAA: return _mm_dp_ps(a, b, 0xAA);
		case 0xAB: return _mm_dp_ps(a, b, 0xAB);
		case 0xAC: return _mm_dp_ps(a, b, 0xAC);
		case 0xAD: return _mm_dp_ps(a, b, 0xAD);
		case 0xAE: return _mm_dp_ps(a, b, 0xAE);
		case 0xAF: return _mm_dp_ps(a, b, 0xAF);
		case 0xB0: return _mm_dp_ps(a, b, 0xB0);
		case 0xB1: return _mm_dp_ps(a, b, 0xB1);
		case 0xB2: return _mm_dp_ps(a, b, 0xB2);
		case 0xB3: return _mm_dp_ps(a, b, 0xB3);
		case 0xB4: return _mm_dp_ps(a, b, 0xB4);
		case 0xB5: return _mm_dp_ps(a, b, 0xB5);
		case 0xB6: return _mm_dp_ps(a, b, 0xB6);
		case 0xB7: return _mm_dp_ps(a, b, 0xB7);
		case 0xB8: return _mm_dp_ps(a, b, 0xB8);
		case 0xB9: return _mm_dp_ps(a, b, 0xB9);
		case 0xBA: return _mm_dp_ps(a, b, 0xBA);
		case 0xBB: return _mm_dp_ps(a, b, 0xBB);
		case 0xBC: return _mm_dp_ps(a, b, 0xBC);
		case 0xBD: return _mm_dp_ps(a, b, 0xBD);
		case 0xBE: return _mm_dp_ps(a, b, 0xBE);
		case 0xBF: return _mm_dp_ps(a, b, 0xBF);
		case 0xC0: return _mm_dp_ps(a, b, 0xC0);
		case 0xC1: return _mm_dp_ps(a, b, 0xC1);
		case 0xC2: return _mm_dp_ps(a, b, 0xC2);
		case 0xC3: return _mm_dp_ps(a, b, 0xC3);
		case 0xC4: return _mm_dp_ps(a, b, 0xC4);
		case 0xC5: return _mm_dp_ps(a, b, 0xC5);
		case 0xC6: return _mm_dp_ps(a, b, 0xC6);
		case 0xC7: return _mm_dp_ps(a, b, 0xC7);
		case 0xC8: return _mm_dp_ps(a, b, 0xC8);
		case 0xC9: return _mm_dp_ps(a, b, 0xC9);
		case 0xCA: return _mm_dp_ps(a, b, 0xCA);
		case 0xCB: return _mm_dp_ps(a, b, 0xCB);
		case 0xCC: return _mm_dp_ps(a, b, 0xCC);
		case 0xCD: return _mm_dp_ps(a, b, 0xCD);
		case 0xCE: return _mm_dp_ps(a, b, 0xCE);
		case 0xCF: return _mm_dp_ps(a, b, 0xCF);
		case 0xD0: return _mm_dp_ps(a, b, 0xD0);
		case 0xD1: return _mm_dp_ps(a, b, 0xD1);
		case 0xD2: return _mm_dp_ps(a, b, 0xD2);
		case 0xD3: return _mm_dp_ps(a, b, 0xD3);
		case 0xD4: return _mm_dp_ps(a, b, 0xD4);
		case 0xD5: return _mm_dp_ps(a, b, 0xD5);
		case 0xD6: return _mm_dp_ps(a, b, 0xD6);
		case 0xD7: return _mm_dp_ps(a, b, 0xD7);
		case 0xD8: return _mm_dp_ps(a, b, 0xD8);
		case 0xD9: return _mm_dp_ps(a, b, 0xD9);
		case 0xDA: return _mm_dp_ps(a, b, 0xDA);
		case 0xDB: return _mm_dp_ps(a, b, 0xDB);
		case 0xDC: return _mm_dp_ps(a, b, 0xDC);
		case 0xDD: return _mm_dp_ps(a, b, 0xDD);
		case 0xDE: return _mm_dp_ps(a, b, 0xDE);
		case 0xDF: return _mm_dp_ps(a, b, 0xDF);
		case 0xE0: return _mm_dp_ps(a, b, 0xE0);
		case 0xE1: return _mm_dp_ps(a, b, 0xE1);
		case 0xE2: return _mm_dp_ps(a, b, 0xE2);
		case 0xE3: return _mm_dp_ps(a, b, 0xE3);
		case 0xE4: return _mm_dp_ps(a, b, 0xE4);
		case 0xE5: return _mm_dp_ps(a, b, 0xE5);
		case 0xE6: return _mm_dp_ps(a, b, 0xE6);
		case 0xE7: return _mm_dp_ps(a, b, 0xE7);
		case 0xE8: return _mm_dp_ps(a, b, 0xE8);
		case 0xE9: return _mm_dp_ps(a, b, 0xE9);
		case 0xEA: return _mm_dp_ps(a, b, 0xEA);
		case 0xEB: return _mm_dp_ps(a, b, 0xEB);
		case 0xEC: return _mm_dp_ps(a, b, 0xEC);
		case 0xED: return _mm_dp_ps(a, b, 0xED);
		case 0xEE: return _mm_dp_ps(a, b, 0xEE);
		case 0xEF: return _mm_dp_ps(a, b, 0xEF);
		case 0xF0: return _mm_dp_ps(a, b, 0xF0);
		case 0xF1: return _mm_dp_ps(a, b, 0xF1);
		case 0xF2: return _mm_dp_ps(a, b, 0xF2);
		case 0xF3: return _mm_dp_ps(a, b, 0xF3);
		case 0xF4: return _mm_dp_ps(a, b, 0xF4);
		case 0xF5: return _mm_dp_ps(a, b, 0xF5);
		case 0xF6: return _mm_dp_ps(a, b, 0xF6);
		case 0xF7: return _mm_dp_ps(a, b, 0xF7);
		case 0xF8: return _mm_dp_ps(a, b, 0xF8);
		case 0xF9: return _mm_dp_ps(a, b, 0xF9);
		case 0xFA: return _mm_dp_ps(a, b, 0xFA);
		case 0xFB: return _mm_dp_ps(a, b, 0xFB);
		case 0xFC: return _mm_dp_ps(a, b, 0xFC);
		case 0xFD: return _mm_dp_ps(a, b, 0xFD);
		case 0xFE: return _mm_dp_ps(a, b, 0xFE);
		default:   return _mm_dp_ps(a, b, 0xFF);
	}
}

int sse4_1_extract_epi32(__m128i a, const int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_extract_epi32(a, 0);
		case 1:  return _mm_extract_epi32(a, 1);
		case 2:  return _mm_extract_epi32(a, 2);
		default: return _mm_extract_epi32(a, 3);
	}
}

long long sse4_1_extract_epi64(__m128i a, const int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm_extract_epi64(a, 0);
		default: return _mm_extract_epi64(a, 1);
	}
}

int sse4_1_extract_epi8(__m128i a, const int imm8) {
	switch (imm8 & 0xF) {
		case  0: return _mm_extract_epi8(a,  0);
		case  1: return _mm_extract_epi8(a,  1);
		case  2: return _mm_extract_epi8(a,  2);
		case  3: return _mm_extract_epi8(a,  3);
		case  4: return _mm_extract_epi8(a,  4);
		case  5: return _mm_extract_epi8(a,  5);
		case  6: return _mm_extract_epi8(a,  6);
		case  7: return _mm_extract_epi8(a,  7);
		case  8: return _mm_extract_epi8(a,  8);
		case  9: return _mm_extract_epi8(a,  9);
		case 10: return _mm_extract_epi8(a, 10);
		case 11: return _mm_extract_epi8(a, 11);
		case 12: return _mm_extract_epi8(a, 12);
		case 13: return _mm_extract_epi8(a, 13);
		case 14: return _mm_extract_epi8(a, 14);
		default: return _mm_extract_epi8(a, 15);
	}
}

int sse4_1_extract_ps(__m128 a, const int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_extract_ps(a, 0);
		case 1:  return _mm_extract_ps(a, 1);
		case 2:  return _mm_extract_ps(a, 2);
		default: return _mm_extract_ps(a, 3);
	}
}

__m128d sse4_1_floor_pd(__m128d a) { return _mm_floor_pd(a); }

__m128 sse4_1_floor_ps(__m128 a) { return _mm_floor_ps(a); }

__m128d sse4_1_floor_sd(__m128d a, __m128d b) { return _mm_floor_sd(a, b); }

__m128 sse4_1_floor_ss(__m128 a, __m128 b) { return _mm_floor_ss(a, b); }

__m128i sse4_1_insert_epi32(__m128i a, int i, const int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_insert_epi32(a, i, 0);
		case 1:  return _mm_insert_epi32(a, i, 1);
		case 2:  return _mm_insert_epi32(a, i, 2);
		default: return _mm_insert_epi32(a, i, 3);
	}
}

__m128i sse4_1_insert_epi64(__m128i a, long long i, const int imm8) {
	switch (imm8 & 0x1) {
		case 0:  return _mm_insert_epi64(a, i, 0);
		default: return _mm_insert_epi64(a, i, 1);
	}
}

__m128i sse4_1_insert_epi8(__m128i a, int i, const int imm8) {
	switch (imm8 & 0xF) {
		case  0: return _mm_insert_epi8(a, i,  0);
		case  1: return _mm_insert_epi8(a, i,  1);
		case  2: return _mm_insert_epi8(a, i,  2);
		case  3: return _mm_insert_epi8(a, i,  3);
		case  4: return _mm_insert_epi8(a, i,  4);
		case  5: return _mm_insert_epi8(a, i,  5);
		case  6: return _mm_insert_epi8(a, i,  6);
		case  7: return _mm_insert_epi8(a, i,  7);
		case  8: return _mm_insert_epi8(a, i,  8);
		case  9: return _mm_insert_epi8(a, i,  9);
		case 10: return _mm_insert_epi8(a, i, 10);
		case 11: return _mm_insert_epi8(a, i, 11);
		case 12: return _mm_insert_epi8(a, i, 12);
		case 13: return _mm_insert_epi8(a, i, 13);
		case 14: return _mm_insert_epi8(a, i, 14);
		default: return _mm_insert_epi8(a, i, 15);
	}
}

__m128 sse4_1_insert_ps(__m128 a, __m128 b, const int imm8) {
	switch (imm8 & 0x3) {
		case 0:  return _mm_insert_ps(a, b, 0);
		case 1:  return _mm_insert_ps(a, b, 1);
		case 2:  return _mm_insert_ps(a, b, 2);
		default: return _mm_insert_ps(a, b, 3);
	}
}

__m128i sse4_1_max_epi32(__m128i a, __m128i b) { return _mm_max_epi32(a, b); }

__m128i sse4_1_max_epi8(__m128i a, __m128i b) { return _mm_max_epi8(a, b); }

__m128i sse4_1_max_epu16(__m128i a, __m128i b) { return _mm_max_epu16(a, b); }

__m128i sse4_1_max_epu32(__m128i a, __m128i b) { return _mm_max_epu32(a, b); }

__m128i sse4_1_min_epi32(__m128i a, __m128i b) { return _mm_min_epi32(a, b); }

__m128i sse4_1_min_epi8(__m128i a, __m128i b) { return _mm_min_epi8(a, b); }

__m128i sse4_1_min_epu16(__m128i a, __m128i b) { return _mm_min_epu16(a, b); }

__m128i sse4_1_min_epu32(__m128i a, __m128i b) { return _mm_min_epu32(a, b); }

__m128i sse4_1_minpos_epu16(__m128i a) { return _mm_minpos_epu16(a); }

__m128i sse4_1_mpsadbw_epu8(__m128i a, __m128i b, const int imm8) {
	switch (imm8 & 0x7) {
		case 0:  return _mm_mpsadbw_epu8(a, b, 0);
		case 1:  return _mm_mpsadbw_epu8(a, b, 1);
		case 2:  return _mm_mpsadbw_epu8(a, b, 2);
		case 3:  return _mm_mpsadbw_epu8(a, b, 3);
		case 4:  return _mm_mpsadbw_epu8(a, b, 4);
		case 5:  return _mm_mpsadbw_epu8(a, b, 5);
		case 6:  return _mm_mpsadbw_epu8(a, b, 6);
		default: return _mm_mpsadbw_epu8(a, b, 7);
	}
}

__m128i sse4_1_mul_epi32(__m128i a, __m128i b) { return _mm_mul_epi32(a, b); }

__m128i sse4_1_mullo_epi32(__m128i a, __m128i b) { return _mm_mullo_epi32(a, b); }

__m128i sse4_1_packus_epi32(__m128i a, __m128i b) { return _mm_packus_epi32(a, b); }

__m128d sse4_1_round_pd(__m128d a, int rounding) {
	switch (rounding & 0xF) {
		case  0: return _mm_round_pd(a,  0);
		case  1: return _mm_round_pd(a,  1);
		case  2: return _mm_round_pd(a,  2);
		case  3: return _mm_round_pd(a,  3);
		case  4: return _mm_round_pd(a,  4);
		case  5: return _mm_round_pd(a,  5);
		case  6: return _mm_round_pd(a,  6);
		case  7: return _mm_round_pd(a,  7);
		case  8: return _mm_round_pd(a,  8);
		case  9: return _mm_round_pd(a,  9);
		case 10: return _mm_round_pd(a, 10);
		case 11: return _mm_round_pd(a, 11);
		case 12: return _mm_round_pd(a, 12);
		case 13: return _mm_round_pd(a, 13);
		case 14: return _mm_round_pd(a, 14);
		default: return _mm_round_pd(a, 15);
	}
}

__m128 sse4_1_round_ps(__m128 a, int rounding) {
	switch (rounding & 0xF) {
		case  0: return _mm_round_ps(a,  0);
		case  1: return _mm_round_ps(a,  1);
		case  2: return _mm_round_ps(a,  2);
		case  3: return _mm_round_ps(a,  3);
		case  4: return _mm_round_ps(a,  4);
		case  5: return _mm_round_ps(a,  5);
		case  6: return _mm_round_ps(a,  6);
		case  7: return _mm_round_ps(a,  7);
		case  8: return _mm_round_ps(a,  8);
		case  9: return _mm_round_ps(a,  9);
		case 10: return _mm_round_ps(a, 10);
		case 11: return _mm_round_ps(a, 11);
		case 12: return _mm_round_ps(a, 12);
		case 13: return _mm_round_ps(a, 13);
		case 14: return _mm_round_ps(a, 14);
		default: return _mm_round_ps(a, 15);
	}
}

__m128d sse4_1_round_sd(__m128d a, __m128d b, int rounding) {
	switch (rounding & 0xF) {
		case  0: return _mm_round_sd(a, b,  0);
		case  1: return _mm_round_sd(a, b,  1);
		case  2: return _mm_round_sd(a, b,  2);
		case  3: return _mm_round_sd(a, b,  3);
		case  4: return _mm_round_sd(a, b,  4);
		case  5: return _mm_round_sd(a, b,  5);
		case  6: return _mm_round_sd(a, b,  6);
		case  7: return _mm_round_sd(a, b,  7);
		case  8: return _mm_round_sd(a, b,  8);
		case  9: return _mm_round_sd(a, b,  9);
		case 10: return _mm_round_sd(a, b, 10);
		case 11: return _mm_round_sd(a, b, 11);
		case 12: return _mm_round_sd(a, b, 12);
		case 13: return _mm_round_sd(a, b, 13);
		case 14: return _mm_round_sd(a, b, 14);
		default: return _mm_round_sd(a, b, 15);
	}
}

__m128 sse4_1_round_ss(__m128 a, __m128 b, int rounding) {
	switch (rounding & 0xF) {
		case  0: return _mm_round_ss(a, b,  0);
		case  1: return _mm_round_ss(a, b,  1);
		case  2: return _mm_round_ss(a, b,  2);
		case  3: return _mm_round_ss(a, b,  3);
		case  4: return _mm_round_ss(a, b,  4);
		case  5: return _mm_round_ss(a, b,  5);
		case  6: return _mm_round_ss(a, b,  6);
		case  7: return _mm_round_ss(a, b,  7);
		case  8: return _mm_round_ss(a, b,  8);
		case  9: return _mm_round_ss(a, b,  9);
		case 10: return _mm_round_ss(a, b, 10);
		case 11: return _mm_round_ss(a, b, 11);
		case 12: return _mm_round_ss(a, b, 12);
		case 13: return _mm_round_ss(a, b, 13);
		case 14: return _mm_round_ss(a, b, 14);
		default: return _mm_round_ss(a, b, 15);
	}
}

__m128i sse4_1_stream_load_si128(__m128i* mem_addr) { return _mm_stream_load_si128(mem_addr); }

int sse4_1_test_all_ones(__m128i a) { return _mm_test_all_ones(a); }

int sse4_1_test_all_zeros(__m128i a, __m128i mask) { return _mm_test_all_zeros(a, mask); }

int sse4_1_test_mix_ones_zeros(__m128i a, __m128i mask) { return _mm_test_mix_ones_zeros(a, mask); }

int sse4_1_testc_si128(__m128i a, __m128i b) { return _mm_testc_si128(a, b); }

int sse4_1_testnzc_si128(__m128i a, __m128i b) { return _mm_testnzc_si128(a, b); }

int sse4_1_testz_si128(__m128i a, __m128i b) { return _mm_testz_si128(a, b); }
