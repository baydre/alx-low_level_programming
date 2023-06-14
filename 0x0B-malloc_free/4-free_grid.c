/*
 * malloc_free, Task 4: function that frees 2 dimensional grid previously
 * created by alloc_grid function
 */
#include "main.h"

/**
 * free_grid - frees 2D grid previously created by alloc_grid
 * @grid: grid to be used
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int b = 0;

	if (grid != NULL)
	{
		for (; b < height; b++)
		{
			free(grid[b]);
		}
		free(grid);
	}
}
