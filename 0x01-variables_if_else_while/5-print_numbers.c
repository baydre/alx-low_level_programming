#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	do {
		printf("%d", digit);
		digit++;
	} while (digit <= 9);

	printf("\n");

	return (0);
}
