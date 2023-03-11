#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

