# ****************************************************************************
# *  Define the searching path and directories.                              *
# ****************************************************************************
ROOT = ../..

VPATH = $(ROOT)/include $(ROOT)/src

# ****************************************************************************
# *  Define the variable SOURCES, which will be used in makedepend.mak.      *
# ****************************************************************************
SOURCES = ex-1.c \
 graph.c\
 list.c\
 mst.c\
 route.c\
 set.c\
 shortest.c\
 tsp.c
         
OBJECTS = $(subst .c,.o,$(SOURCES)) 

PROGRAM    = ex-1

# ****************************************************************************
# *  Define compiler options.                                                *
# ****************************************************************************
CC = gcc

CPPFLAGS = -I $(ROOT)/include
LIBS += -lm

# ****************************************************************************
# *  Define the rules.                                                       *
# ****************************************************************************

$(PROGRAM): $(OBJECTS)
	gcc $^ $(LIBS) -o $@ 

clean:
	rm -f $(PROGRAM)
	rm -f $(OBJECTS)
	rm -rf $(DEPENDS)

# ****************************************************************************
# *  Include automatic dependencies generation.                              *
# ****************************************************************************
include $(ROOT)/makedepend.mak
