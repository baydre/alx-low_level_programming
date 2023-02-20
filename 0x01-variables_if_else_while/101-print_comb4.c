#include <stdio.h>

/**
 * main - Prints all possible three digits combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d1gi;
	int d2gi;
	int d3gi;

	for (d3gi = '0'; d3gi <= '9'; d3gi++)
	{
		for (d2gi = (d3gi + 1); d2gi <= '9'; d2gi++)
		{
			for (d1gi = (d2gi + 1); d1gi <= '9'; d1gi++)
			{
				putchar(d3gi);
				putchar(d2gi);
				putchar(d1gi);
				if (d3gi != '7' || d2gi != '8' || d1gi != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
