# mastering.algorithms.with.c.src
Mastering Algorithms with C, Source Code
------------------------------------------------------------------------------
README
Mastering Algorithms with C
------------------------------------------------------------------------------

This disk contains all of the code from the book "Mastering Algorithms with C"
plus several examples illustrating how to use it.  All of the code was written
to be platform independent, with a few minor exceptions.  It has been compiled
and tested  on the platforms listed below,  but it should work  on others with
little or no modification.

   HP-UX 10.20
   SunOs 5.6 
   Linux 5.1
   DOS/Windows NT/95/98 (1, 2)

   (1) The files huffman.c and lz77.c use byte-flipping macros provided by the
       UNIX socket interface for convenience; therefore, these  files will not
       compile under Windows without similar support. The file transfer.c also
       uses two functions which are part of this interface.

   (2) The file directls.c implements a function for sorted directory listings
       in UNIX; consequently, it makes a few calls that are not typically sup-
       ported under Windows.

The source code on this disk can be freely used, adapted, and redistributed in
source or  binary form, so long as an acknowledgment appears in derived source
files. The citation should list that the code comes from the  book  "Mastering
Algorithms with C"  by Kyle Loudon,  published by O'Reilly & Associates.  This
code is under copyright and cannot be included in any other book, publication,
or  educational product  without  permission  from  O'Reilly & Associates.  No
warranty is attached; we cannot take responsibility for errors or  fitness for
use.

The disk is organized into three directories: header files, source files,  and
examples. This organization is outlined below along with a description of what
each directory contains.

   include

      This directory contains all of the header files contained and referenced
      in the book. Every file is named the same as in the book.

   src 

      This directory contains all of the source files found in the book. Every
      file is named the same as in the book.

   examples

      This directory contains source code not found in the book. This code may
      be useful for experimenting with the book's code. The directory contains
      a number of subdirectories, each addressing a specific topic. Each topic
      has one or more examples (called ex-1.c, ex-2.c, etc.). Each example has
      a makefile named according to the topic addressed by the executable that
      the makefile builds. Note that small changes to a makefile may be needed
      to account for compiler differences, the make variant being applied, and
      other idiosyncracies on some systems; makefiles are provided mainly as a
      reference for which source files must be compiled and which objects must
      be linked in order to make use of certain data structures or algorithms,
      etc.

For UNIX users, it should be relatively simple to work with the makefiles that
have been distributed on this disk. Assuming the directory structure described
above, define the environment variable ALGOWC_TOPDIR  to the path at which the
directory structure begins. It may also be necessary to change the name of the
compiler or linker each makefile calls, or in a few isolated cases, adjust the
list of libraries linked with certain executables.


To build examples:
	On Windows:
		cmake [source_directory]

	On Unix like OS:
		make

	or
		cmake [source_directory]
		
