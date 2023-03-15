#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers.
 * @argc: argument counter; indicates number of CLI arguments
 * @argv: argument vector; Array name
 *
 * Return: '1' Error if it contains symbol that are not digits.
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;
	char *sybl;

	if (argc == 3)
	{
		printf("0\n");
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &sybl, 10);
		if (*sybl)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
		printf("%d\n", sum);

		return (0);
}
