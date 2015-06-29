SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/list.c
	${ROOT}/src/set.c)
ADD_EXECUTABLE(set1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/cover.c
	${ROOT}/src/list.c
	${ROOT}/src/set.c)
ADD_EXECUTABLE(set2 ${SOURCES2})
