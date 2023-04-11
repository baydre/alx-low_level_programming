#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * to flip to get from number to the other
 * @n: digit
 * @m: number of digit to flip to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, b_flip = n ^ m;

	do {
		if ((b_flip & 1) != 0)
			count++;
		b_flip >>= 1;
	} while (b_flip);

	return (count);
}
