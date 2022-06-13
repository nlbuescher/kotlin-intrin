package platform.intrin

infix fun FloatArray.vPlus(other: FloatArray): FloatArray = when {
	SSE -> sse_add_ps(this, other)
	else -> {
		println("add fallback")
		floatArrayOf(
			this[0] + other[0],
			this[1] + other[1],
			this[2] + other[2],
			this[3] + other[3],
		)
	}
}

infix fun FloatArray.vMinus(other: FloatArray): FloatArray = when {
	SSE -> sse_sub_ps(this, other)
	else -> {
		println("sub fallback")
		floatArrayOf(
			this[0] - other[0],
			this[1] - other[1],
			this[2] - other[2],
			this[3] - other[3],
		)
	}
}

infix fun FloatArray.vTimes(other: FloatArray): FloatArray = when {
	SSE -> sse_mul_ps(this, other)
	else -> {
		println("mul fallback")
		floatArrayOf(
			this[0] * other[0],
			this[1] * other[1],
			this[2] * other[2],
			this[3] * other[3],
		)
	}
}

infix fun FloatArray.vDiv(other: FloatArray): FloatArray = when {
	SSE -> sse_div_ps(this, other)
	else -> {
		println("div fallback")
		floatArrayOf(
			this[0] / other[0],
			this[1] / other[1],
			this[2] / other[2],
			this[3] / other[3],
		)
	}
}

infix fun FloatArray.vRem(other: FloatArray): FloatArray = when {
	SSE -> {
		val div0 = sse_div_ps(this, other)
		val flr0 = vfloor(div0)
		val mul0 = sse_mul_ps(other, flr0)
		sse_sub_ps(this, mul0)
	}
	else -> {
		println("rem fallback")
		floatArrayOf(
			this[0] % other[0],
			this[1] % other[1],
			this[2] % other[2],
			this[3] % other[3],
		)
	}
}

fun vround(x: FloatArray): FloatArray = when {
	SSE4_1 -> sse4_1_round_ps(x, SSE4_1_FROUND_NEARBYINT)
	else -> {
		println("round fallback")
		floatArrayOf(
			kotlin.math.round(x[0]),
			kotlin.math.round(x[1]),
			kotlin.math.round(x[2]),
			kotlin.math.round(x[3]),
		)
	}
}

fun vfloor(x: FloatArray): FloatArray = when {
	SSE4_1 -> sse4_1_floor_ps(x)
	else -> {
		println("floor fallback")
		floatArrayOf(
			kotlin.math.floor(x[0]),
			kotlin.math.floor(x[1]),
			kotlin.math.floor(x[2]),
			kotlin.math.floor(x[3]),
		)
	}
}
