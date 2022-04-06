#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - main
 *@width:int
 *@height:int
 *Return:int
 *
 */

int **alloc_grid(int width, int height)
{
	int **array = (int **)malloc(height * sizeof(int *));
	int i;

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}
	return (array);
}
