/*
 * function_pointers, Task 1: function that executes a function given as
 * a parameter on each element of an array.
 */
#include "function_pointers.h"

/**
 * array_iterator - iterates through each element of array
 * and calls fuction pointed to action.
 * @array: integer array pointer.
 * @size: integer size
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
