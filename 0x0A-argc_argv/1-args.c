#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: argument counter; indicates number of CLI arguments
 * @argv: argument vector; Array name
 *
 * Return: '0' Always success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
