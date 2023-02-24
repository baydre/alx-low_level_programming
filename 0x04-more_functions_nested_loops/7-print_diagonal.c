#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int pen;
	int script;

	if (n > 0)
	{
		for (pen = 1; pen <= n; pen++)
		{
			for (script = 1; script < pen; script++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
