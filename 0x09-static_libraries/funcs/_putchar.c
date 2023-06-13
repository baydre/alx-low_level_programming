/*
 * Static libraries, Task 0: _putchar function is responsible
 * for writing a char 'c' to the stdout and returns an integer
 * indicating success or failure.
 */
#include "main.h"

/**
 * _putchar - writes char 'c' to stdout.
 * @c: character to printed
 * Return: (result == success) ? '1' : '-1'
 */
int _putchar(char c)
{
	/* int is returned to indicate success or failure */
	return (write(1, &c, 1));
}
