#include <stdio.h>

/**
 * main - Prints all single digit numbers with certain conditions
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}


