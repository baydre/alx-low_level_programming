#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s_digi;
	int d_digi;

	for (d_digi = '0'; d_digi <= '9'; d_digi++) /*++ double digits*/
	{
		for (s_digi = (d_digi + 1); s_digi <= '9'; s_digi++) /*++ single digits*/
		{
			putchar(d_digi);
			putchar(s_digi);

			if (d_digi != '8' || s_digi != '9') /*seperates values with commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');

		return (0);

}
