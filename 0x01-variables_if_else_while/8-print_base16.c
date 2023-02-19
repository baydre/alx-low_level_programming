#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lower-case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexa = '0';
	char alpha = 'a';

	for (; hexa <= '9';)
	{
		putchar(hexa);
		hexa++;
	}

	for (; alpha <= 'f';)
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
