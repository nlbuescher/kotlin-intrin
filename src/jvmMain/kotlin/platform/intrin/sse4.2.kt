package platform.intrin

@PublishedApi
internal external fun nativeSSE4_2(): Boolean
inline val SSE4_2: Boolean get() = nativeSSE4_2()

//TODO functions
