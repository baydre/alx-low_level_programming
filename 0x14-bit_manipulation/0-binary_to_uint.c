/*
 * bit_manipulation, Task 0: function that converts a binary number
 * to an unsigned int.
 */
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 * Return: converted value otherwise '0'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			count = count << 1;
		}
		else if (b[i] == '1')
		{
			count = (count << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (count);
}
