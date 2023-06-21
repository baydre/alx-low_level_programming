/*
 * function_pointers, Task 2: function that searches for an integer.
 */
#include "function_pointers.h"

/**
 * int_index - iterates through each element of array
 * and calls the function pointed to by "cmp".
 * @array: pointer to an array integer.
 * @size: array size.
 * @cmp: function pointer.
 * Return: (-1) minus one.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
