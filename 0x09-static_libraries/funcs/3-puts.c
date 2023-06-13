/*
 * Static libraries, Task 0: function writes the string 's'
 * to the standard output (usually the console) followed by
 * a newline character. It does not return a value.
 */
#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 * Return: Nothing
 */
void _puts(char *str)
{
	/* implements _puts function */
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
