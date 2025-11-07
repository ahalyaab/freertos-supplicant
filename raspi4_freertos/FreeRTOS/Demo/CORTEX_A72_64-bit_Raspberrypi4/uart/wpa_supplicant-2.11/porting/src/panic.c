// SPDX-License-Identifier: MIT

#include <stdlib.h>  // for abort
#include <stdio.h>   // for printf (optional, if you want to print an error message)

void panic(void)
{
	printf("An error occurred! Aborting...\n");
	abort();
}
