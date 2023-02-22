#include "main.h"

/**
 * main - Prints alphabets in lower-case
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;
	} while (alpha <= 'z');

	_putchar('\n');

	return (0);
}
