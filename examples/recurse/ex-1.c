/*****************************************************************************
*  ex-1.c                                                                    *
*  ======                                                                    *
*  Description: Illustrates computing a factorial using recursion and tail   *
*               recursion (see Chapter 3).                                   *
*****************************************************************************/

#include <stdio.h>

#include "fact.h"
#include "facttail.h"

/*****************************************************************************
*  --------------------------------- main ---------------------------------  *
*****************************************************************************/

int main(int argc, char **argv)
{

	int n;

/*****************************************************************************
*  Computer the factorials of several numbers.                               *
*****************************************************************************/

	for (n = 0; n <= 13; n++) {

		fprintf(stdout, "%2d! recursive: %-10d ", n, fact(n));
		fprintf(stdout, "tail recursive: %-10d\n", facttail(n, 1));

	}

	return 0;

}
