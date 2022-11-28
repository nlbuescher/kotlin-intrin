@file:JvmName("Float4Jvm")

import kotlinx.intrin.*
import platform.intrin.*
import kotlin.math.*

actual class Float4(internal var storage: FloatArray) {
	actual constructor(scalar: Float) : this(floatArrayOf(scalar, scalar, scalar, scalar))
	actual constructor(x: Float, y: Float, z: Float, w: Float) : this(floatArrayOf(x, y, z, w))

	actual var x: Float
		get() = storage[0]
		set(value) { storage[0] = value }

	actual var y: Float
		get() = storage[1]
		set(value) { storage[1] = value }

	actual var z: Float
		get() = storage[2]
		set(value) { storage[2] = value }

	actual var w: Float
		get() = storage[3]
		set(value) { storage[3] = value }

	actual fun copy(x: Float, y: Float, z: Float, w: Float) = Float4(x, y, z, w)

	actual operator fun get(index: Int) = storage[index]
	actual operator fun set(index: Int, value: Float) { storage[index] = value }

	actual operator fun unaryPlus(): Float4 = Float4(storage.copyOf())
	actual operator fun unaryMinus(): Float4 = Float4(FloatArray(storage.size) { -storage[it] })

	actual operator fun plus(scalar: Float): Float4 = Float4(
		storage vPlus floatArrayOf(scalar, scalar, scalar, scalar)
	)

	actual operator fun minus(scalar: Float): Float4 = Float4(
		storage vMinus floatArrayOf(scalar, scalar, scalar, scalar)
	)

	actual operator fun times(scalar: Float): Float4 = Float4(
		storage vTimes floatArrayOf(scalar, scalar, scalar, scalar)
	)

	actual operator fun div(scalar: Float): Float4 = Float4(
		storage vDiv floatArrayOf(scalar, scalar, scalar, scalar)
	)

	actual operator fun rem(scalar: Float): Float4 = Float4(
		storage vRem floatArrayOf(scalar, scalar, scalar, scalar)
	)

	actual operator fun plus(other: Float4): Float4 = Float4(
		storage vPlus other.storage
	)

	actual operator fun minus(other: Float4): Float4 = Float4(
		storage vMinus other.storage
	)

	actual operator fun times(other: Float4): Float4 = Float4(
		storage vTimes other.storage
	)

	actual operator fun div(other: Float4): Float4 = Float4(
		storage vDiv other.storage
	)

	actual operator fun rem(other: Float4): Float4 = Float4(
		storage vRem other.storage
	)

	actual operator fun plusAssign(scalar: Float) {
		storage = storage vPlus floatArrayOf(scalar, scalar, scalar, scalar)
	}

	actual operator fun minusAssign(scalar: Float) {
		storage = storage vMinus floatArrayOf(scalar, scalar, scalar, scalar)
	}

	actual operator fun timesAssign(scalar: Float) {
		storage = storage vTimes floatArrayOf(scalar, scalar, scalar, scalar)
	}

	actual operator fun divAssign(scalar: Float) {
		storage = storage vDiv floatArrayOf(scalar, scalar, scalar, scalar)
	}

	actual operator fun remAssign(scalar: Float) {
		storage = storage vRem floatArrayOf(scalar, scalar, scalar, scalar)
	}


	actual operator fun plusAssign(other: Float4) {
		storage = storage vPlus other.storage
	}

	actual operator fun minusAssign(other: Float4) {
		storage = storage vMinus other.storage
	}

	actual operator fun timesAssign(other: Float4) {
		storage = storage vTimes other.storage
	}

	actual operator fun divAssign(other: Float4) {
		storage = storage vDiv other.storage
	}

	actual operator fun remAssign(other: Float4) {
		storage = storage vRem other.storage
	}

	actual val squareMagnitude: Float get() = this dot this
	actual val magnitude: Float get() = sqrt(this dot this)

	/** Returns the dot product of this vector and [other]. */
	actual infix fun dot(other: Float4): Float = x * other.x + y * other.y + z * other.z + w * other.w

	actual fun normalize(): Float4 = this / magnitude

	actual override fun equals(other: Any?): Boolean {
		if (this === other) return true
		if (javaClass != other?.javaClass) return false

		other as Float4

		return storage.contentEquals(other.storage)
	}

	actual override fun hashCode(): Int = storage.contentHashCode()
	actual override fun toString(): String = "($x, $y, $z, $w)"
}

actual fun round(x: Float4): Float4 = Float4(vround(x.storage))
actual fun floor(x: Float4): Float4 = Float4(vfloor(x.storage))

class NaiveFloat4(@PublishedApi internal var storage: FloatArray) {
	constructor(scalar: Float) : this(floatArrayOf(scalar, scalar, scalar, scalar))
	constructor(x: Float, y: Float, z: Float, w: Float) : this(floatArrayOf(x, y, z, w))

	inline var x: Float
		get() = storage[0]
		set(value) { storage[0] = value }

	inline var y: Float
		get() = storage[1]
		set(value) { storage[1] = value }

	inline var z: Float
		get() = storage[2]
		set(value) { storage[2] = value }

	inline var w: Float
		get() = storage[3]
		set(value) { storage[3] = value }

	fun copy(x: Float, y: Float, z: Float, w: Float) = NaiveFloat4(x, y, z, w)

	operator fun get(index: Int) = storage[index]
	operator fun set(index: Int, value: Float) { storage[index] = value }

	operator fun unaryPlus(): NaiveFloat4 = NaiveFloat4(storage.copyOf())
	operator fun unaryMinus(): NaiveFloat4 = NaiveFloat4(FloatArray(storage.size) { -storage[it] })

	operator fun plus(scalar: Float): NaiveFloat4 = NaiveFloat4(
		storage vPlus floatArrayOf(scalar, scalar, scalar, scalar)
	)

	operator fun minus(scalar: Float): NaiveFloat4 = NaiveFloat4(
		storage vMinus floatArrayOf(scalar, scalar, scalar, scalar)
	)

	operator fun times(scalar: Float): NaiveFloat4 = NaiveFloat4(
		storage vTimes floatArrayOf(scalar, scalar, scalar, scalar)
	)

	operator fun div(scalar: Float): NaiveFloat4 = NaiveFloat4(
		storage vDiv floatArrayOf(scalar, scalar, scalar, scalar)
	)

	operator fun rem(scalar: Float): NaiveFloat4 = NaiveFloat4(
		storage vRem floatArrayOf(scalar, scalar, scalar, scalar)
	)

	operator fun plus(other: NaiveFloat4): NaiveFloat4 = NaiveFloat4(
		x + other.x,
		y + other.y,
		z + other.z,
		w + other.w,
	)

	operator fun minus(other: NaiveFloat4): NaiveFloat4 = NaiveFloat4(
		storage vMinus other.storage
	)

	operator fun times(other: NaiveFloat4): NaiveFloat4 = NaiveFloat4(
		x * other.x,
		y * other.y,
		z * other.z,
		w * other.w,
	)

	operator fun div(other: NaiveFloat4): NaiveFloat4 = NaiveFloat4(
		storage vDiv other.storage
	)

	operator fun rem(other: NaiveFloat4): NaiveFloat4 = NaiveFloat4(
		storage vRem other.storage
	)

	operator fun plusAssign(scalar: Float) {
		storage = storage vPlus floatArrayOf(scalar, scalar, scalar, scalar)
	}

	operator fun minusAssign(scalar: Float) {
		storage = storage vMinus floatArrayOf(scalar, scalar, scalar, scalar)
	}

	operator fun timesAssign(scalar: Float) {
		storage = storage vTimes floatArrayOf(scalar, scalar, scalar, scalar)
	}

	operator fun divAssign(scalar: Float) {
		storage = storage vDiv floatArrayOf(scalar, scalar, scalar, scalar)
	}

	operator fun remAssign(scalar: Float) {
		storage = storage vRem floatArrayOf(scalar, scalar, scalar, scalar)
	}


	operator fun plusAssign(other: NaiveFloat4) {
		storage = storage vPlus other.storage
	}

	operator fun minusAssign(other: NaiveFloat4) {
		storage = storage vMinus other.storage
	}

	operator fun timesAssign(other: NaiveFloat4) {
		storage = storage vTimes other.storage
	}

	operator fun divAssign(other: NaiveFloat4) {
		storage = storage vDiv other.storage
	}

	operator fun remAssign(other: NaiveFloat4) {
		storage = storage vRem other.storage
	}

	val squareMagnitude: Float get() = this dot this
	val magnitude: Float get() = sqrt(this dot this)

	/** Returns the dot product of this vector and [other]. */
	infix fun dot(other: NaiveFloat4): Float = x * other.x + y * other.y + z * other.z + w * other.w

	fun normalize(): NaiveFloat4 = this / magnitude

	override fun equals(other: Any?): Boolean {
		if (this === other) return true
		if (javaClass != other?.javaClass) return false

		other as NaiveFloat4

		return storage.contentEquals(other.storage)
	}

	override fun hashCode(): Int = storage.contentHashCode()
	override fun toString(): String = "($x, $y, $z, $w)"
}

fun round(x: NaiveFloat4): NaiveFloat4 = NaiveFloat4(vround(x.storage))
fun floor(x: NaiveFloat4): NaiveFloat4 = NaiveFloat4(vfloor(x.storage))
