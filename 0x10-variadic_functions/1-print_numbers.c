/*
 * variadic_functions, Task 1: function that prints strings,
 * followed by a new line.
 */
#include "variadic_functions.h"

/**
 * print_numbers - takes "seperator" string, an unsigned int "n",
 * and a variable number of arguments.
 * @separator: string that separates numbers to be printed.
 * @n: number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list _args;

	va_start(_args, n);

	for (b = 0; b < n; b++)
	{
		int _num = va_arg(_args, int);

		printf("%i", _num);

		if (b < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(_args);

	printf("\n");
}
