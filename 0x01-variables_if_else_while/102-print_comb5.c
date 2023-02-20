#include <stdio.h>

/**
 * main - Prints all possible combinations of double-digits
 * * without repetition.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d2gi;
	int d1gi;
	int d2;
	int d1;

	for (d2gi = '0'; d2gi <= '9'; d2gi++) /*Prints first two digits combo*/
	{
		for (d1gi = '0'; d1gi <= '9'; d1gi++)
		{
			for (d2 = d2gi; d2 <= '9'; d2++) /*Print second pair of two digits combo*/
			{
				for (d1 = d1gi + 1; d1 <= '9'; d1++)
				{
					putchar(d2gi);
					putchar(d1gi);
					putchar(' ');
					putchar(d2);
					putchar(d1);

					if (!((d2gi == '9' && d1gi == '8') &&
						(d2 == '9' && d1 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				d1 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
