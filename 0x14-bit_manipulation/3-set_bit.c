#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: points to the bit value
 * @index: index to be set starting from 0
 * Return: 1 if it works otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
