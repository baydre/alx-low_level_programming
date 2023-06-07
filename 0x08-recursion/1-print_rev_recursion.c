/*
 * Recursion, Task 1: Function that prints a string in reverse.
 */
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be printed.
 */
void _print_rev_recursion(char *s) /* function prototype */
{
	/* base case */
	if (*s == '\0')
	{
		return;
	}
	else /* recursive function */
	{
		_print_rev_recursion(s + 1); /* makes recursive calls */
		_putchar(*s); /* prints characters */
	}
}
