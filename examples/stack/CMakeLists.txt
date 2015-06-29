SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES ex-1.c 
	${ROOT}/src/list.c
	${ROOT}/src/stack.c)
ADD_EXECUTABLE(stack1 ${SOURCES})
