#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	do {
		putchar(alpha);
		alpha--;
	} while (alpha >= 'a');

	putchar('\n');

	return (0);
}

