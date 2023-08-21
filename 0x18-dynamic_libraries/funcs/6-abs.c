/*
 * Static libraries, Task 0: _abs function calculates the absolute value
 * of the integer 'n' and returns the result. The absolute value is
 * the non-negative value of 'n', regardless of its sign.
 */
#include "main.h"

/**
 * _abs - calculates absolute value of integer
 * @n: integer to be calculated
 * Return: result, an absolute value
 */
int _abs(int n)
{
	/* implements _abs function */
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}

