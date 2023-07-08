/*
 * bit_manipulation, Task 2: function that returns the value
 * of a bit at a given index.
 */
#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: bit passed to the function
 * @index: index to be solved
 * Return: index value  otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitmask, count;

	if (index >= sizeof(int) * 8)
	{
		return (-1);
	}

	bitmask = 1 << index;
	count = n & bitmask;

	if (count != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
