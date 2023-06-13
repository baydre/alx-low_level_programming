/*
 * Static libraries, Task 0: isdigit function checks whether the character 'c'
 * is a digit (0-9). It returns a non-zero value if 'c' is a digit,
 * and 0 otherwise.
 */
#include "main.h"

/**
 * _isdigit - checks for digits (0 - 9)
 * @c: integer to be checked
 * Return: (c == digit) ? '1' : '0'
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
