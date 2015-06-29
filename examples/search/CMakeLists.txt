SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/bisearch.c
	${ROOT}/src/issort.c)
ADD_EXECUTABLE(search1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/bisearch.c
	${ROOT}/src/issort.c
	${ROOT}/src/spell.c)
ADD_EXECUTABLE(search2 ${SOURCES2})
