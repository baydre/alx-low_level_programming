/*
 * Command line arguments, Task 5: Program that prints the minimum number
 * of coins to make change of an amount of money.
 * Usage: ./change cents. where cents is the amount of cents
 * you need to give back. if the number of args passed to your program
 * is not exactly '1', print 'ERROR\n' and return '1'.
 * atoi should be used to parse the parameter passed to the program.
 * if the number passed as the argument is negative, print 0, followed by '\n'.
 * use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
 */
#include "main.h"
#define SIZE 5
/**
 * main - entry point
 * @argc: argument count, number of cmdln arguments passed.
 * @argv: argument vector, arrays of strings that contains
 * the cmdln arguments.
 * Return: zero '0' success.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int cents, num_coins, count, i;
	int coins[SIZE] = {25, 10, 5, 2, 1};

	/* checks if cmdln args is passed */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	/* checks if cents less than zero */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	/* iterates to make up amount of change needed */
	for (; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}

	/* prints amount of change needed */
	printf("%i\n", count);
	return (0);
}
