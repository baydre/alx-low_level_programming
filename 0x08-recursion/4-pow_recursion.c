/*
 * Recursion, Task 4: Function that returns the value of x
 * raised to the power of y
 */
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to pow y.
 * @x: base 10 digit
 * @y: exponential value
 * Return: (y < 0) ? '0' : '-1';
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
