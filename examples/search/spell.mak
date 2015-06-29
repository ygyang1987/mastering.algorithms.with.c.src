# ****************************************************************************
# *  Define the searching path and directories.                              *
# ****************************************************************************
ROOT = ../..

VPATH = $(ROOT)/include $(ROOT)/src

# ****************************************************************************
# *  Define the variable SOURCES, which will be used in makedepend.mak.      *
# ****************************************************************************
SOURCES = ex-2.c \
 bisearch.c \
 issort.c \
 spell.c
         
OBJECTS = $(subst .c,.o,$(SOURCES)) 

PROGRAM    = ex-2

# ****************************************************************************
# *  Define compiler options.                                                *
# ****************************************************************************
CC = gcc

CPPFLAGS = -I $(ROOT)/include

# ****************************************************************************
# *  Define the rules.                                                       *
# ****************************************************************************

$(PROGRAM): $(OBJECTS)
#	gcc $^ -o $@ 

clean:
	rm -f $(PROGRAM)
	rm -f $(OBJECTS)
	rm -rf $(DEPENDS)

# ****************************************************************************
# *  Include automatic dependencies generation.                              *
# ****************************************************************************
include $(ROOT)/makedepend.mak
