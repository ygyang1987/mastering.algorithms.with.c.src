SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES ex-1.c 
	${ROOT}/src/list.c
	${ROOT}/src/chtbl.c)
ADD_EXECUTABLE(chtbl1 ${SOURCES})
