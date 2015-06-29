SET(ROOT ../..)
INCLUDE_DIRECTORIES(${ROOT}/include)
SET(SOURCES1 ex-1.c ${ROOT}/src/clist.c)
ADD_EXECUTABLE(clist1 ${SOURCES1})
SET(SOURCES2 ex-2.c 
	${ROOT}/src/clist.c
	${ROOT}/src/page.c)
ADD_EXECUTABLE(clist2 ${SOURCES2})
