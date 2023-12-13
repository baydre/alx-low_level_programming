/*
 * search_algorithms, Task 0: function that searches for a value
 * in an array of integers using the linear search algorithm.
 */
#include "search_algos.h"

/**
 * linear_search - searches for value in an array.
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: location of first index else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array && size != 0)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
