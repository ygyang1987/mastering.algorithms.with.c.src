SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/graph.c
	${ROOT}/src/list.c
	${ROOT}/src/mst.c
	${ROOT}/src/route.c
	${ROOT}/src/set.c
	${ROOT}/src/shortest.c
	${ROOT}/src/tsp.c)
ADD_EXECUTABLE(graphalg1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/graph.c
	${ROOT}/src/list.c
	${ROOT}/src/route.c
	${ROOT}/src/set.c
	${ROOT}/src/shortest.c)
ADD_EXECUTABLE(graphalg2 ${SOURCES2})
