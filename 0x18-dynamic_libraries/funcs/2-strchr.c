/*
 * Static libraries, Task 0: _strchr function searches for the first occurrence
 * of the character 'c' in the string 's'. It returns a pointer to the first
 * occurrence of 'c' in 's', or a null pointer if 'c' is not found.
 */
#include "main.h"

/**
 * _strchr - searches for character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 * Return: (c == found) a pointer to the first occurence.
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	/* implements _strchr function */
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return ('\0');
}
