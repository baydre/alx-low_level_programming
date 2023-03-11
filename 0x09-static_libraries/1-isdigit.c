#include "main.h"
#include <stdio.h>

/**
* _isdigit - function thats check for a digit (0 through 9).
* @c: The integer to check
* Return: 1  if c is a digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
