/*
 * Command line arguments, Task 1: Program that prints the number of arguments
 * passed into it.
 */
#include "main.h"

/**
 * main - entry point
 * @argc: argument count, number of cmdln arguments passed.
 * @argv: argument vector, arrays of strings that contains
 * the cmdln arguments.
 * Return: zero '0' success
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	/* prints number of arguments passed */
	printf("%i\n", argc - 1);
	return (0);
}
