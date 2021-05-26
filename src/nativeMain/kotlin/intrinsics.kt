import platform.intrin.*
import kotlin.math.*

operator fun Vector128.plus(other: Vector128): Vector128 = when {
	SSE -> sse_add_ps(this, other)
	else -> {
		println("add fallback")
		vectorOf(
			getFloatAt(0) + other.getFloatAt(0),
			getFloatAt(1) + other.getFloatAt(1),
			getFloatAt(2) + other.getFloatAt(2),
			getFloatAt(3) + other.getFloatAt(3)
		)
	}
}

operator fun Vector128.minus(other: Vector128): Vector128 = when {
	SSE -> sse_sub_ps(this, other)
	else -> {
		println("sub fallback")
		vectorOf(
			getFloatAt(0) - other.getFloatAt(0),
			getFloatAt(1) - other.getFloatAt(1),
			getFloatAt(2) - other.getFloatAt(2),
			getFloatAt(3) - other.getFloatAt(3)
		)
	}
}

operator fun Vector128.times(other: Vector128): Vector128 = when {
	SSE -> sse_mul_ps(this, other)
	else -> {
		println("mul fallback")
		vectorOf(
			getFloatAt(0) * other.getFloatAt(0),
			getFloatAt(1) * other.getFloatAt(1),
			getFloatAt(2) * other.getFloatAt(2),
			getFloatAt(3) * other.getFloatAt(3)
		)
	}
}

operator fun Vector128.div(other: Vector128): Vector128 = when {
	SSE -> sse_div_ps(this, other)
	else -> {
		println("div fallback")
		vectorOf(
			getFloatAt(0) / other.getFloatAt(0),
			getFloatAt(1) / other.getFloatAt(1),
			getFloatAt(2) / other.getFloatAt(2),
			getFloatAt(3) / other.getFloatAt(3)
		)
	}
}

operator fun Vector128.rem(other: Vector128): Vector128 = when {
	SSE -> {
		val div0 = sse_div_ps(this, other)
		val flr0 = floor(div0)
		val mul0 = sse_mul_ps(other, flr0)
		sse_sub_ps(this, mul0)
	}
	else -> {
		println("rem fallback")
		vectorOf(
			getFloatAt(0) % other.getFloatAt(0),
			getFloatAt(1) % other.getFloatAt(1),
			getFloatAt(2) % other.getFloatAt(2),
			getFloatAt(3) % other.getFloatAt(3)
		)
	}
}

fun round(x: Vector128): Vector128 = when {
	SSE4_1 -> sse4_1_round_ps(x, MM_FROUND_NEARBYINT)
	else -> {
		println("round fallback")
		vectorOf(
			round(x.getFloatAt(0)),
			round(x.getFloatAt(1)),
			round(x.getFloatAt(2)),
			round(x.getFloatAt(3))
		)
	}
}

fun floor(x: Vector128): Vector128 = when {
	SSE4_1 -> sse4_1_floor_ps(x)
	else -> {
		println("floor fallback")
		vectorOf(
			floor(x.getFloatAt(0)),
			floor(x.getFloatAt(1)),
			floor(x.getFloatAt(2)),
			floor(x.getFloatAt(3))
		)
	}
}
