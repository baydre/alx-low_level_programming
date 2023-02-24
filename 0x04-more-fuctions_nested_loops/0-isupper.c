#include "main.h"

/**
 * _isupper - This function checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
