#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - main
 *@b:int
 *Return:void
 *
 *
 *
 *
 */
void  *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(sizeof(unsigned int) * b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
