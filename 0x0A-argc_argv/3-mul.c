#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: argument counter; indicates number of CLI arguments
 * @argv: argument vector; Array name
 *
 * Return: '1' Error if it doesn't get 2 args, otherwise '0'.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
