/*
 * Static libraries, Task 0: function calculates the length of the string 's'
 * (the number of characters before the null terminator)
 * and returns the length as an integer.
 */
#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 * Return: int length of the string
 */

int _strlen(char *s)
{
	/* implements _strlen function */
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
