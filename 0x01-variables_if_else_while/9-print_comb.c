#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
