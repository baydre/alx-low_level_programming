/*
 * Command line Arguments(argc, argv), Task 0: Program that prints its
 * name, followed by a new line.
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
	(void)argc; /* used parameter argc */

	/* prints its name, followed by \n */
	printf("%s\n", argv[0]);
	return (0);
}
