/*
 * variadic_functions, Task 0: function that returns the sum of all
 * its parameters.
 */
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all parameters given.
 * @n: number of arguments passed to the function.
 * Result: calculated sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int b;
	int sum = 0;
	va_list _args;

	if (n == 0)
	{
		return (0);
	}

	va_start(_args, n);

	for (b = 0; b < n; b++)
	{
		int _num = va_arg(_args, int);
		sum += _num;
	}

	va_end(_args);

	return (sum);
}
