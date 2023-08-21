/*
 * Static libraries, Task 0: _strpbrk function searches the string 's'
 * for any character from the string 'accept'. It returns a pointer to
 * the first occurrence of any character from 'accept' in 's',
 * or a null pointer if no match is found.
 */
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: If a set is matched, a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	/* implements _strpbrk function */
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}

		s++;
	}
	return ('\0');
}
