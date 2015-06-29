SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/issort.c
	${ROOT}/src/mgsort.c
	${ROOT}/src/qksort.c
	${ROOT}/src/ctsort.c
	${ROOT}/src/rxsort.c)
ADD_EXECUTABLE(sort1 ${SOURCES1})

if(WIN32)
	MESSAGE("example/sort2 is not supported on Windows")

else()

SET(SOURCES2 ex-2.c 
	${ROOT}/src/directls.c
	${ROOT}/src/issort.c
	${ROOT}/src/qksort.c)
ADD_EXECUTABLE(sort2 ${SOURCES2})

endif()
