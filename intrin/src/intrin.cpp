// CPUID

#ifndef _MSC_VER
#include <cpuid.h>
#endif

static inline void cpuid(int info[4], int x) {
#ifndef _MSC_VER
	__cpuid_count(x, 0, info[0], info[1], info[2], info[3]);
#else
	__cpuidex(info, x, 0);
#endif
}

// INTRINSICS

bool SSE, SSE2, SSE3, SSSE3, SSE4_1, SSE4_2, AVX;

bool loadIntrinsics() {
	int info[4];
	cpuid(info, 1);

	SSE = (info[3] & bit_SSE) != 0;
	SSE2 = (info[3] & bit_SSE2) != 0;
	SSE3 = (info[2] & bit_SSE3) != 0;
	SSSE3 = (info[2] & bit_SSSE3) != 0;
	SSE4_1 = (info[2] & bit_SSE4_1) != 0;
	SSE4_2 = (info[2] & bit_SSE4_2) != 0;
	AVX = (info[2] & bit_AVX) != 0;

	return true;
}

bool unused = loadIntrinsics();
