/*
 * Recursion, Task 5: Function that returns the natural
 * square root of a number.
 */
#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: natural number
 * Return: (n < 0) ? '-1' : '0';
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (c_sqrt(n, 1));
	}
}
/**
 * c_sqrt - solves for the square root of
 * natural number.
 * @p: natural number
 * @q: checks for sqrt of 'q'.
 * Return: ( sqr_q >= p ? '0' && '-1' : 'sqr_root'.
 */
int c_sqrt(int p, int q)
{
	if (q * q == p)
	{
		return (q);
	}
	else if (q * q > p)
	{
		return (-1);
	}
	else
	{
		return (c_sqrt(p, q + 1));
	}
}
