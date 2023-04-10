#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 * Return: converted value otherwise '0'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b && *b)
	{
		if (*b < '0' || *b > '1')
		{
			return (0);
		}

		x = x * 2 + *b - '0';
		b++;
	}

	return (x);
}
