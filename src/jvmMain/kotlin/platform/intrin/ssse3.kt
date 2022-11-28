package platform.intrin

@PublishedApi
internal external fun nativeSSSE3(): Boolean
inline val SSSE3: Boolean get() = nativeSSSE3()

//TODO functions
