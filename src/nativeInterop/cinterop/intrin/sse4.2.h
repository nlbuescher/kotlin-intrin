#ifndef SSE4_2_H
#define SSE4_2_H

#include <stdbool.h>
#include <stdint.h>

extern const bool SSE4_2;

#ifndef __m128i
typedef long long __m128i __attribute__((__vector_size__(16), __may_alias__));
#endif

#ifdef __cplusplus
extern "C" {
#endif

// These specify the type of data that we're comparing.
const int SIDD_UBYTE_OPS = 0x00;
const int SIDD_UWORD_OPS = 0x01;
const int SIDD_SBYTE_OPS = 0x02;
const int SIDD_SWORD_OPS = 0x03;

const int SIDD_CMP_EQUAL_ANY     = 0x00;
const int SIDD_CMP_RANGES        = 0x04;
const int SIDD_CMP_EQUAL_EACH    = 0x08;
const int SIDD_CMP_EQUAL_ORDERED = 0x0C;

const int SIDD_POSITIVE_POLARITY        = 0x00;
const int SIDD_NEGATIVE_POLARITY        = 0x10;
const int SIDD_MASKED_POSITIVE_POLARITY = 0x20;
const int SIDD_MASKED_NEGATIVE_POLARITY = 0x30;

const int SIDD_LEAST_SIGNIFICANT = 0x00;
const int SIDD_MOST_SIGNIFICANT  = 0x40;

const int SIDD_BIT_MASK  = 0x00;
const int SIDD_UNIT_MASK = 0x40;

bool sse4_2_cmpestra(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
bool sse4_2_cmpestrc(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
int sse4_2_cmpestri(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
__m128i sse4_2_cmpestrm(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
bool sse4_2_cmpestro(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
bool sse4_2_cmpestrs(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
bool sse4_2_cmpestrz(__m128i a, int la, __m128i b, int lb, const int8_t imm8);
__m128i sse4_2_cmpgt_epi64(__m128i a, __m128i b);
bool sse4_2_cmpistra(__m128i a, __m128i b, const int8_t imm8);
bool sse4_2_cmpistrc(__m128i a, __m128i b, const int8_t imm8);
int sse4_2_cmpistri(__m128i a, __m128i b, const int8_t imm8);
__m128i sse4_2_cmpistrm(__m128i a, __m128i b, const int8_t imm8);
bool sse4_2_cmpistro(__m128i a, __m128i b, const int8_t imm8);
bool sse4_2_cmpistrs(__m128i a, __m128i b, const int8_t imm8);
bool sse4_2_cmpistrz(__m128i a, __m128i b, const int8_t imm8);
uint32_t sse4_2_crc32_u16(uint32_t crc, uint16_t v);
uint32_t sse4_2_crc32_u32(uint32_t crc, uint32_t v);
uint64_t sse4_2_crc32_u64(uint64_t crc, uint64_t v);
uint32_t sse4_2_crc32_u8(uint32_t crc, uint8_t v);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // SSE4_2_H
