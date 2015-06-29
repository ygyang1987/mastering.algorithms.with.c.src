SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES ex-1.c 
	${ROOT}/src/ohtbl.c
	${ROOT}/src/list.c)
ADD_EXECUTABLE(ohtbl1 ${SOURCES})
