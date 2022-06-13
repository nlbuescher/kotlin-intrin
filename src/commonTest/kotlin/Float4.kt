expect class Float4 {
	constructor(scalar: Float = 0f)
	constructor(x: Float, y: Float, z: Float, w: Float)

	var x: Float
	var y: Float
	var z: Float
	var w: Float

	fun copy(x: Float = this.x, y: Float = this.y, z: Float = this.z, w: Float = this.w): Float4

	operator fun get(index: Int): Float
	operator fun set(index: Int, value: Float)

	operator fun unaryPlus(): Float4
	operator fun unaryMinus(): Float4

	operator fun plus(scalar: Float): Float4
	operator fun minus(scalar: Float): Float4
	operator fun times(scalar: Float): Float4
	operator fun div(scalar: Float): Float4
	operator fun rem(scalar: Float): Float4

	operator fun plus(other: Float4): Float4
	operator fun minus(other: Float4): Float4
	operator fun times(other: Float4): Float4
	operator fun div(other: Float4): Float4
	operator fun rem(other: Float4): Float4

	operator fun plusAssign(scalar: Float)
	operator fun minusAssign(scalar: Float)
	operator fun timesAssign(scalar: Float)
	operator fun divAssign(scalar: Float)
	operator fun remAssign(scalar: Float)

	operator fun plusAssign(other: Float4)
	operator fun minusAssign(other: Float4)
	operator fun timesAssign(other: Float4)
	operator fun divAssign(other: Float4)
	operator fun remAssign(other: Float4)

	val squareMagnitude: Float
	val magnitude: Float

	/** Returns the dot product of this vector and [other]. */
	infix fun dot(other: Float4): Float

	fun normalize(): Float4

	override fun equals(other: Any?): Boolean
	override fun hashCode(): Int
	override fun toString(): String
}

fun Float4.toFloatArray(): FloatArray = floatArrayOf(x, y, z, w)
fun Float4.toFloat4(): Float4 = copy()

expect fun round(x: Float4): Float4
expect fun floor(x: Float4): Float4
