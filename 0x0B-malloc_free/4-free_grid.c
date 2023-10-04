#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees
 *  a 2 dimensional grid previously created by
 *  your alloc_grid function
 *  @grid: entry num
 *  @height: entry num
 *  Return: pointer of 2d arr
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
