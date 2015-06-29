SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES ex-1.c 
	${ROOT}/src/interpol.c
	${ROOT}/src/lsqe.c
	${ROOT}/src/root.c)
ADD_EXECUTABLE(num1 ${SOURCES})
