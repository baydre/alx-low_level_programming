#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: argument counter; indicates number of CLI arguments
 * @argv: argument vector; Array name
 * Return: '0' Always success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
