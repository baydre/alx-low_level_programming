#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: bit passed to the function
 * @index: index to be solved
 * Return: value of index otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int dgt = n >> index;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	return (dgt & 1);
}
