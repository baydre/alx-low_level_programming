/*
 * Static libraries, Task 0: function checks whether the character 'c'
 * is a lowercase letter. It returns a non-zero value
 * if 'c' is lowercase, and 0 otherwise.
 */
#include "main.h"

/**
  * _islower - checks for lowercase character
  * @alpha: The character to be checked
  * Return: (c == 'lowercase') ? '1' : '0'
  */
int _islower(int alpha)
{
	/* implements _islower function */
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
