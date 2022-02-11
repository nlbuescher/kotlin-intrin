#include <immintrin.h>

#include "ssse3.h"

__m128i ssse3_abs_epi16(__m128i a) { return _mm_abs_epi16(a); }

__m128i ssse3_abs_epi32(__m128i a) { return _mm_abs_epi32(a); }

__m128i ssse3_abs_epi8(__m128i a) { return _mm_abs_epi8(a); }

__m128i ssse3_alignr_epi8(__m128i a, __m128i b, int imm8) {
	switch (imm8) {
		case  0: return _mm_alignr_epi8(a, b,  0);
		case  1: return _mm_alignr_epi8(a, b,  1);
		case  2: return _mm_alignr_epi8(a, b,  2);
		case  3: return _mm_alignr_epi8(a, b,  3);
		case  4: return _mm_alignr_epi8(a, b,  4);
		case  5: return _mm_alignr_epi8(a, b,  5);
		case  6: return _mm_alignr_epi8(a, b,  6);
		case  7: return _mm_alignr_epi8(a, b,  7);
		case  8: return _mm_alignr_epi8(a, b,  8);
		case  9: return _mm_alignr_epi8(a, b,  9);
		case 10: return _mm_alignr_epi8(a, b, 10);
		case 11: return _mm_alignr_epi8(a, b, 11);
		case 12: return _mm_alignr_epi8(a, b, 12);
		case 13: return _mm_alignr_epi8(a, b, 13);
		case 14: return _mm_alignr_epi8(a, b, 14);
		case 15: return _mm_alignr_epi8(a, b, 15);
		case 16: return _mm_alignr_epi8(a, b, 16);
		case 17: return _mm_alignr_epi8(a, b, 17);
		case 18: return _mm_alignr_epi8(a, b, 18);
		case 19: return _mm_alignr_epi8(a, b, 19);
		case 20: return _mm_alignr_epi8(a, b, 20);
		case 21: return _mm_alignr_epi8(a, b, 21);
		case 22: return _mm_alignr_epi8(a, b, 22);
		case 23: return _mm_alignr_epi8(a, b, 23);
		case 24: return _mm_alignr_epi8(a, b, 24);
		case 25: return _mm_alignr_epi8(a, b, 25);
		case 26: return _mm_alignr_epi8(a, b, 26);
		case 27: return _mm_alignr_epi8(a, b, 27);
		case 28: return _mm_alignr_epi8(a, b, 28);
		case 29: return _mm_alignr_epi8(a, b, 29);
		case 30: return _mm_alignr_epi8(a, b, 30);
		case 31: return _mm_alignr_epi8(a, b, 31);
		default: return _mm_alignr_epi8(a, b, 32);
	}
}

__m128i ssse3_hadd_epi16(__m128i a, __m128i b) { return _mm_hadd_epi16(a, b); }

__m128i ssse3_hadd_epi32(__m128i a, __m128i b) { return _mm_hadd_epi32(a, b); }

__m128i ssse3_hadds_epi16(__m128i a, __m128i b) { return _mm_hadds_epi16(a, b); }

__m128i ssse3_hsub_epi16(__m128i a, __m128i b) { return _mm_hsub_epi16(a, b); }

__m128i ssse3_hsub_epi32(__m128i a, __m128i b) { return _mm_hsub_epi32(a, b); }

__m128i ssse3_hsubs_epi16(__m128i a, __m128i b) { return _mm_hsubs_epi16(a, b); }

__m128i ssse3_maddubs_epi16(__m128i a, __m128i b) { return _mm_maddubs_epi16(a, b); }

__m128i ssse3_mulhrs_epi16(__m128i a, __m128i b) { return _mm_mulhrs_epi16(a, b); }

__m128i ssse3_shuffle_epi8(__m128i a, __m128i b) { return _mm_shuffle_epi8(a, b); }

__m128i ssse3_sign_epi16(__m128i a, __m128i b) { return _mm_sign_epi16(a, b); }

__m128i ssse3_sign_epi32(__m128i a, __m128i b) { return _mm_sign_epi32(a, b); }

__m128i ssse3_sign_epi8(__m128i a, __m128i b) { return _mm_sign_epi8(a, b); }
