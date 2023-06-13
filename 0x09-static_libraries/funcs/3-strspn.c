/*
 * Static libraries, Task 0: _strspn function calculates the length
 * of the initial segment of 's' consisting of only characters
 * from 'accept'. It returns the length as an unsigned integer.
 */
#include "main.h"

/**
 * _strspn - calculates the length 's'.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 * Return: unsigned integer length.
 */

unsigned int _strspn(char *s, char *accept)
{
	/* implements _strspn fuction */
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}

		s++;
	}

	return (bytes);
}
