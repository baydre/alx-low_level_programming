#include "main.h"

/**
 * main - Prints '_putchar' followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x[] = "_putchar";
	int y;

	for (y = 0; x[y] != '\0'; y++)
	{
		_putchar(x[y]);
	}

	_putchar('\n');
	return (0);
}
