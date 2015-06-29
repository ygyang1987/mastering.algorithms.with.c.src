SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)

if(WIN32)

MESSAGE("examples/compress is not supported on Windows")

else()

SET(SOURCES ex-1.c 
	${ROOT}/src/bit.c
	${ROOT}/src/bitree.c
	${ROOT}/src/heap.c
	${ROOT}/src/huffman.c
	${ROOT}/src/lz77.c)
ADD_EXECUTABLE(compress1 ${SOURCES})

endif()
