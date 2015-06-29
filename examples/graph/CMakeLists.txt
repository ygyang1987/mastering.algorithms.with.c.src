SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/list.c
	${ROOT}/src/graph.c
	${ROOT}/src/set.c)
ADD_EXECUTABLE(graph1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/bfs.c
	${ROOT}/src/list.c
	${ROOT}/src/graph.c
	${ROOT}/src/queue.c
	${ROOT}/src/set.c)
ADD_EXECUTABLE(graph2 ${SOURCES2})
SET(SOURCES3 ex-3.c 
	${ROOT}/src/dfs.c
	${ROOT}/src/list.c
	${ROOT}/src/graph.c
	${ROOT}/src/set.c)
ADD_EXECUTABLE(graph3 ${SOURCES3})
