#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints all arguments it receives.
 * @argc: argument counter; indicates number of CLI arguments
 * @argv: argument vector; Array name
 *
 * Return: '0' Always success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
