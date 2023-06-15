/*
 * more_malloc_free, Task 3: function that creates an array of integers.
 */
#include "main.h"

/**
 * array_range - takes arguments: min & max.
 * @min: minimum array range.
 * @max: maximum array range.
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int size, *b_arr;
	int b = 0;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	b_arr = malloc_checked(sizeof(int) * size);

	if (b_arr == NULL)
	{
		return (NULL);
	}

	while (b < size)
	{
		b_arr[b] = min++;
		b++;
	}

	return (b_arr);
}
