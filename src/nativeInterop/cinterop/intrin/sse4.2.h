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

bool sse4_2_cmpestra(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
bool sse4_2_cmpestrc(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
int32_t sse4_2_cmpestri(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
__m128i sse4_2_cmpestrm(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
bool sse4_2_cmpestro(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
bool sse4_2_cmpestrs(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
bool sse4_2_cmpestrz(__m128i a, int32_t la, __m128i b, int32_t lb, uint8_t imm8);
__m128i sse4_2_cmpgt_epi64(__m128i a, __m128i b);
bool sse4_2_cmpistra(__m128i a, __m128i b, uint8_t imm8);
bool sse4_2_cmpistrc(__m128i a, __m128i b, uint8_t imm8);
int32_t sse4_2_cmpistri(__m128i a, __m128i b, uint8_t imm8);
__m128i sse4_2_cmpistrm(__m128i a, __m128i b, uint8_t imm8);
bool sse4_2_cmpistro(__m128i a, __m128i b, uint8_t imm8);
bool sse4_2_cmpistrs(__m128i a, __m128i b, uint8_t imm8);
bool sse4_2_cmpistrz(__m128i a, __m128i b, uint8_t imm8);
uint32_t sse4_2_crc32_u16(uint32_t crc, uint16_t v);
uint32_t sse4_2_crc32_u32(uint32_t crc, uint32_t v);
uint64_t sse4_2_crc32_u64(uint64_t crc, uint64_t v);
uint32_t sse4_2_crc32_u8(uint32_t crc, uint8_t v);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // SSE4_2_H
