/*
 * Command line, Task 4: Program that add positive numbers.
 * Prints the result, followed by a new line.
 * if no number is passed to the program, print '0\n'.
 * if one of the number contains symbol != digits,
 * print "ERROR\n"  and return (1).
 * Assume that numbers & addition of all numbers
 * & should be stored in integer.
 */
#include "main.h"

/**
 * main - entry point
 * @argc: argument count, number of cmdln arguments passed.
 * @argv: argument vector, arrays of strings that contains
 * the cmdln arguments.
 * Return: zero '0' success.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x = 1;
	int y = 0;

	/* checks if there's only one arg */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* iterates through each args */
	for (; x < argc; x++)
	{
		/* converts string digits to int value */
		char *arg = argv[x];
		int num = atoi(arg);

		for (; arg[y] != '\0'; y++)
		{
			/* checks if values are digits & print ERROR if otherwise */
			if (arg[y] < '0' || arg[y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Adds values together */
		sum += num;
	}

	/* print and exit program */
	printf("%i\n", sum);
	return (0);
}
