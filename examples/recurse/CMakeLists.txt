SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/fact.c
	${ROOT}/src/facttail.c)
ADD_EXECUTABLE(recurse1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/factor.c)
ADD_EXECUTABLE(recurse2 ${SOURCES2})
