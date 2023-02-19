#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');

	putchar('\n');

	return (0);
}

