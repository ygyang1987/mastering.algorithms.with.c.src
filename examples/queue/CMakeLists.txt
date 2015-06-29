SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES ex-1.c 
	${ROOT}/src/queue.c
	${ROOT}/src/list.c)
ADD_EXECUTABLE(queue1 ${SOURCES})
