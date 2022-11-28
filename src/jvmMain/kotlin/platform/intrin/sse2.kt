package platform.intrin

@PublishedApi
internal external fun nativeSSE2(): Boolean
inline val SSE2: Boolean get() = nativeSSE2()

//TODO functions
