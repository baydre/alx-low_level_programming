#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * @n: points to bit value
 * @index: bit to be set starting from '0'
 * Return: 1 if it works otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}

