#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2d array
 * @grid: 2d grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
