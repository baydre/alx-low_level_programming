/*
 * function_pointers, Task 3(i): file contains main function responsible
 * for processing the command-line arguments, performing the requested
 * operation, and printing the result.
 */
#include "3-calc.h"

/**
 * main - process the command-line arguments.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: exits 0 normally.
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
