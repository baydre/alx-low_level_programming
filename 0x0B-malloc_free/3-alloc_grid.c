/*
 * malloc_free, Task 2: function that returns a pointer to
 * a 2 dimensional array of integers.
 */
#include "main.h"

/**
 * alloc_grid - allocates 2D array of integers with specified
 * width and length.
 * @width: array width
 * @height: array height
 * Return: pointer to 2D array integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid, p, q;

	grid = (int **)malloc(sizeof(int *) * height);
	p = q = 0;

	/* returns NULL if height && width == 0 */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* returns NULL if grid == 0 */
	if (grid == NULL)
	{
		return (NULL);
	}

	for (; p < height; p++)
	{
		grid[p] = (int *)malloc(sizeof(int) * width);
		/* alloc memory using malloc */
		if (grid[p] == NULL)
		{
			for (p--; p >= 0; p--)
			{
				free(grid[p]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (; p < height; p++)
	{
		for (; q < width; q++)
		{
			grid[p][q] = 0;
		}
	}
	return (grid);
}
