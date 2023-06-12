/*
 * Command line arguments, Task 2: Program that prints all arguments it receives.
 * All args should be printed, including the first one.
 * Only print one argument per line, ending with a '\n'.
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
	int i = 0;
	/* prints all arguments it receives */
	do {
		printf("%s\n", argv[i]);
		i++;
	}
	while (i < argc);

	return (0);
}

