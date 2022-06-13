package platform.intrin

private object Intrin {
	init {
		System.loadLibrary("intrin_jni")
	}
}

// need to reference Intrin so the init block gets executed
@Suppress("unused")
private val intrin = Intrin

private external fun nativeSSE(): Boolean
private external fun nativeSSE2(): Boolean
private external fun nativeSSE3(): Boolean
private external fun nativeSSSE3(): Boolean
private external fun nativeSSE41(): Boolean
private external fun nativeSSE42(): Boolean

val SSE: Boolean get() = nativeSSE()
val SSE2: Boolean get() = nativeSSE2()
val SSE3: Boolean get() = nativeSSE3()
val SSSE3: Boolean get() = nativeSSSE3()
val SSE4_1: Boolean get() = nativeSSE41()
val SSE4_2: Boolean get() = nativeSSE42()
