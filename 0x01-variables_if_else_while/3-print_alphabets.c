#include <stdio.h>

/**
 * main - prints alphabets in lowercase and then uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	do {
		putchar(lower);
		lower++;
	} while (lower <= 'z'); /*prints lower-case alphabet*/

	do {
		putchar(upper);
		upper++;
	} while (upper <= 'Z'); /*prints upper-case alphabet*/

	putchar('\n');

	return (0);
}

