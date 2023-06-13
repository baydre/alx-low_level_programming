/*
 * Static libraries, Task 0: atoi function converts a string 's'
 * to an integer and returns the converted value. It considers
 * leading whitespace and stops conversion at the first non-digit character.
 */
#include "main.h"

/**
 * _atoi - converts a string of digits to integer value
 * @s: string to be converted
 * Return: converted value
 */
int _atoi(char *s)
{
	/* implements _atoi function */
	int symb = 1;
	unsigned int digi = 0;

	while (*s++)
	{
		if (*s == '-')
		{
			symb *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digi = (digi * 10) + (*s - '0');
		}
		else if (digi > 0)
			break;
	}

	return (digi * symb);
}
