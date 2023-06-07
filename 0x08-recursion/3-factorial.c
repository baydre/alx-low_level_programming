/*
 * Recursion, Task 3: Function that returns the factorial
 * of a given number.
 */
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number of factorial.
 * Return: factorial value.
 */
int factorial(int n)
{
	/* base case */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else /* recursive function */
	{
		return (n * factorial(n - 1));
	}
}
