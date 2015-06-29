SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES ex-1.c 
	${ROOT}/src/bitree.c
	${ROOT}/src/bistree.c)
ADD_EXECUTABLE(bistree1 ${SOURCES})
