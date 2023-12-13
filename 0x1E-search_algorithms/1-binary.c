/*
 * search_algorithms, Task 1: searches for a value in a sorted
 * array of integers using the binary search algorithm.
 */
#include "search_algos.h"

/**
 * print - prints the current index in an array.
 * @array: pointer to the first element of an array.
 * @lower: lower bound index.
 * @upper: upper bound index.
 */
void print(int *array, size_t lower, size_t upper)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = lower; i < upper; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[upper]);
}

/**
 * binary_search - searches for a value in a sorted array
 * of integers using binary search algorithm.
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: location of value index else -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lower = 0, upper = size - 1, mid = 0;

	if (array)
	{
		while (lower <= upper)
		{
			mid = (upper + lower) / 2;

			print(array, lower, upper);
			if (array[mid] < value)
				lower = mid + 1;
			else if (array[mid] > value)
				upper = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
