#include "main.h"

/**
 * main - Prints alphabets in lower-case
 */

void print_alphabet(void)
{
	char alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;
	} while (alpha <= 'z');

	_putchar('\n');
}
