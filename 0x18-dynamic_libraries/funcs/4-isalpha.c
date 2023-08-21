/*
 * Static libraries, Task 0: function checks whether the character 'c'
 * is an alphabetic character (either uppercase or lowercase letter).
 * It returns a non-zero value if 'c' is an alphabetic character,
 * and 0 otherwise.
 */
#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to be checked.
 * Return: (c == lower || c == upper) ? '1': '0'.
 */
int _isalpha(int c)
{
	/* implements _isalpha function */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
