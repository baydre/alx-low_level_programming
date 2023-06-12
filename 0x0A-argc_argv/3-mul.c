/*
 * Command line, Task 3: Program that multiplies two numbers.
 * Program should print result of multiplication,
 * followed by a '\n'.
 * Assume two digits & result of the multiplication should be
 * stored in an integer.
 * Program should print "ERROR\n" if it does receives args
 * other than two.
 */
#include "main.h"

/**
 * main - entry point
 * @argc: argument count, number of cmdln arguments passed.
 * @argv: argument vector, arrays of strings that contains
 * the cmdln arguments.
 * Return: zero '0' success
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	/* accepts only two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* converts string digit args to int value */
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	/* multiplies two numbers */
	z = x * y;

	/* prints the result */
	printf("%i\n", z);
	return (0);
}
