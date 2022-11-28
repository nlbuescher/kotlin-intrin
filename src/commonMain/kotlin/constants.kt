package platform.intrin

// SSE

const val SSE_HINT_T0: Int = 3
const val SSE_HINT_T1: Int = 2
const val SSE_HINT_T2: Int = 1
const val SSE_HINT_NTA: Int = 0

const val SSE_EXCEPT_MASK: UInt = 0x003fu
const val SSE_EXCEPT_INVALID: UInt = 0x0001u
const val SSE_EXCEPT_DENORM: UInt = 0x0002u
const val SSE_EXCEPT_DIV_ZERO: UInt = 0x0004u
const val SSE_EXCEPT_OVERFLOW: UInt = 0x0008u
const val SSE_EXCEPT_UNDERFLOW: UInt = 0x0010u
const val SSE_EXCEPT_INEXACT: UInt = 0x0020u

const val SSE_MASK_MASK: UInt = 0x1f80u
const val SSE_MASK_INVALID: UInt = 0x0080u
const val SSE_MASK_DENORM: UInt = 0x0100u
const val SSE_MASK_DIV_ZERO: UInt = 0x0200u
const val SSE_MASK_OVERFLOW: UInt = 0x0400u
const val SSE_MASK_UNDERFLOW: UInt = 0x0800u
const val SSE_MASK_INEXACT: UInt = 0x1000u

const val SSE_ROUND_MASK: UInt = 0x6000u
const val SSE_ROUND_NEAREST: UInt = 0x0000u
const val SSE_ROUND_DOWN: UInt = 0x2000u
const val SSE_ROUND_UP: UInt = 0x4000u
const val SSE_ROUND_TOWARD_ZERO: UInt = 0x6000u

const val SSE_FLUSH_ZERO_MASK: UInt = 0x8000u
const val SSE_FLUSH_ZERO_ON: UInt = 0x8000u
const val SSE_FLUSH_ZERO_OFF: UInt = 0x0000u

// SSE 4.1

const val SSE4_1_FROUND_TO_NEAREST_INT: Int = 0x00
const val SSE4_1_FROUND_TO_NEG_INF: Int = 0x01
const val SSE4_1_FROUND_TO_POS_INF: Int = 0x02
const val SSE4_1_FROUND_TO_ZERO: Int = 0x03
const val SSE4_1_FROUND_CUR_DIRECTION: Int = 0x04

const val SSE4_1_FROUND_RAISE_EXC: Int = 0x00
const val SSE4_1_FROUND_NO_EXC: Int = 0x08

const val SSE4_1_FROUND_NINT: Int = (SSE4_1_FROUND_TO_NEAREST_INT or SSE4_1_FROUND_RAISE_EXC)
const val SSE4_1_FROUND_FLOOR: Int = (SSE4_1_FROUND_TO_NEG_INF or SSE4_1_FROUND_RAISE_EXC)
const val SSE4_1_FROUND_CEIL: Int = (SSE4_1_FROUND_TO_POS_INF or SSE4_1_FROUND_RAISE_EXC)
const val SSE4_1_FROUND_TRUNC: Int = (SSE4_1_FROUND_TO_ZERO or SSE4_1_FROUND_RAISE_EXC)
const val SSE4_1_FROUND_RINT: Int = (SSE4_1_FROUND_CUR_DIRECTION or SSE4_1_FROUND_RAISE_EXC)
const val SSE4_1_FROUND_NEARBYINT: Int = (SSE4_1_FROUND_CUR_DIRECTION or SSE4_1_FROUND_NO_EXC)

// SSE 4.2

// These constants specify the source data format
const val SIDD_UBYTE_OPS: Int = 0x00
const val SIDD_UWORD_OPS: Int = 0x01
const val SIDD_SBYTE_OPS: Int = 0x02
const val SIDD_SWORD_OPS: Int = 0x03

// These constants specify the comparison operation
const val SIDD_CMP_EQUAL_ANY: Int = 0x00
const val SIDD_CMP_RANGES: Int = 0x04
const val SIDD_CMP_EQUAL_EACH: Int = 0x08
const val SIDD_CMP_EQUAL_ORDERED: Int = 0x0C

// These constants specify the polarity
const val SIDD_POSITIVE_POLARITY: Int = 0x00
const val SIDD_NEGATIVE_POLARITY: Int = 0x10
const val SIDD_MASKED_POSITIVE_POLARITY: Int = 0x20
const val SIDD_MASKED_NEGATIVE_POLARITY: Int = 0x30

// These constants specify the output selection in sse4_2_cmpXstri()
const val SIDD_LEAST_SIGNIFICANT: Int = 0x00
const val SIDD_MOST_SIGNIFICANT: Int = 0x40

// These constants specify the output selection in sse4_2_cmpXstrm()
const val SIDD_BIT_MASK: Int = 0x00
const val SIDD_UNIT_MASK: Int = 0x40
