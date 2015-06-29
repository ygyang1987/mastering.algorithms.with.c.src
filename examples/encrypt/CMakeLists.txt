SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c 
	${ROOT}/src/bit.c
	${ROOT}/src/des.c
	${ROOT}/src/rsa.c)
ADD_EXECUTABLE(encrypt1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/cbc.c
	${ROOT}/src/bit.c
	${ROOT}/src/des.c
	${ROOT}/src/rsa.c)
ADD_EXECUTABLE(encrypt2 ${SOURCES2})
