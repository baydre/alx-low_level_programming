/*
 * Recursion, Task 0: Function that prints a string,
 * followed by a newline.
 */
#include "main.h"

/**
 * _puts_recursion - prints a string followed by \n.
 * @s: string to be printed.
 */
void _puts_recursion(char *s) /* function prototype */
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n'); /* prints a newline */
	}
	else /* recursive function */
	{
		_putchar(*s); /* prints characters */
		_puts_recursion(s + 1); /* makes recursive call */
	}
}
