SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/arclen.c
	${ROOT}/src/cvxhull.c
	${ROOT}/src/lint.c
	${ROOT}/src/list.c)
ADD_EXECUTABLE(geometry1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/arclen.c
	${ROOT}/src/geodist.c)
ADD_EXECUTABLE(geometry2 ${SOURCES2})
