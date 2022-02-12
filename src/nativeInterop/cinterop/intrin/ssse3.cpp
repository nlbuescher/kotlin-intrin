#include <tmmintrin.h>

#include <functional>
#include <unordered_map>

#include "ssse3.h"

using namespace std;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-attributes"

__m128i ssse3_abs_epi16(__m128i a) { return _mm_abs_epi16(a); }
__m128i ssse3_abs_epi32(__m128i a) { return _mm_abs_epi32(a); }
__m128i ssse3_abs_epi8(__m128i a) { return _mm_abs_epi8(a); }
namespace alignr_epi8 {
	const unordered_map<int8_t, function<__m128i(__m128i, __m128i)>> map {
		{ 0, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  0); }},
		{ 1, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  1); }},
		{ 2, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  2); }},
		{ 3, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  3); }},
		{ 4, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  4); }},
		{ 5, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  5); }},
		{ 6, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  6); }},
		{ 7, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  7); }},
		{ 8, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  8); }},
		{ 9, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b,  9); }},
		{10, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 10); }},
		{11, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 11); }},
		{12, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 12); }},
		{13, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 13); }},
		{14, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 14); }},
		{15, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 15); }},
		{16, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 16); }},
		{17, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 17); }},
		{18, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 18); }},
		{19, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 19); }},
		{20, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 20); }},
		{21, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 21); }},
		{22, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 22); }},
		{23, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 23); }},
		{24, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 24); }},
		{25, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 25); }},
		{26, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 26); }},
		{27, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 27); }},
		{28, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 28); }},
		{29, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 29); }},
		{30, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 30); }},
		{31, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 31); }},
		{32, [](__m128i a, __m128i b) { return _mm_alignr_epi8(a, b, 32); }},
	};
} // namespace alignr_epi8
__m128i ssse3_alignr_epi8(__m128i a, __m128i b, int8_t imm8) { if (imm8 > 32) imm8 = 32; return alignr_epi8::map.at(imm8)(a, b); }
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

#pragma GCC diagnostic pop
