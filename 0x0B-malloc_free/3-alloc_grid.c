#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - function that returns
 *  a pointer to a 2 dimensional array of integers
 *  @width: entry num
 *  @height: entry num
 *  Return: NULL for fail or negative
 *
 */

int **alloc_grid(int width, int height)
{
	int **dim;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(dim + i) = (int *)malloc(width * sizeof(int));
		if (*(dim + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = dim[i];
				free(p);
			}
			free(dim);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			dim[l][j] = 0;
		}
	}
	return (dim);
}

