/*
 * function_pointers, Task 4: program that prints the "opcodes"
 * of its own main function.
 */
#include "function_pointers.h"

/**
 * main - 
 *
 * Return:
 */
int main(int argc, char *argv[])
{
	int b, num_bytes;
	unsigned char *bptr;
	int (*main)(int char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	bptr = *(unsigned char *)main;

	for (b = 0; b < num_bytes; b++)
	{
		printf("%.2x", *bptr);
		bptr++;
	}

	printf("\n");
	return (0);

	
}
