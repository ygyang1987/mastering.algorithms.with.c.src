/*****************************************************************************
*  ex-2.c                                                                    *
*  ======                                                                    *
*  Description: Illustrates computing the prime factors of numbers using     *
*               recursion (see Chapter 3).                                   *
*****************************************************************************/

#include <stdio.h>

#include "factor.h"

/*****************************************************************************
*  --------------------------------- main ---------------------------------  *
*****************************************************************************/

int main(int argc, char **argv)
{

	int n;

/*****************************************************************************
*  Compute the prime factors of several numbers.                             *
*****************************************************************************/

	for (n = 1; n <= 10000; n++) {

		fprintf(stdout, "Factoring %d\n", n);
		factor(n, n, 2);

	}

	return 0;

}
