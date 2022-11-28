package platform.intrin

@PublishedApi
internal external fun nativeSSE3(): Boolean
inline val SSE3: Boolean get() = nativeSSE3()

//TODO functions
