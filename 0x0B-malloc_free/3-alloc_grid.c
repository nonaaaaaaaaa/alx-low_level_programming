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
	int i = 0;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	dim = (int **)malloc(sizeof(int *) * height);
	if (dim != NULL)
	{
		for (; i < height; i++)
		{
			dim[i] = (int *)malloc(sizeof(int *) * width);
			if (dim != NULL)
			{
				for (j = 0; j < width; j++)
				       dim[i][j] = 0;
			}
			else
			{
			while (i >= 0)
			{
			free(dim[i]);
		i--;
			}
		free(dim);
	return (NULL);
			}
		}
	return (dim);
	}
	else
	{
	return (NULL);
	}
}
