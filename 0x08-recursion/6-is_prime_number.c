/*
 * Recursion, Task 6: Function that returns '1'
 * if the input integer is a prime number,
 * otherwise return 0.
 */
#include "main.h"

/**
 * is_prime_number - returns a prime number
 * @n: prime number to be returned
 * Return: (n == prime_num) ? '1' : '0'.
 */
int is_prime_number(int n)
int prime_num(int x, int y)
{
	return (prime_num(n, n - 1));
}
/**
 * prime_num - checks for prime number
 * @x: value to be checked
 * @y: divisor
 * Return: recursive funtion and base cases.
 */
int prime_num(int x, int y)
{
	/* base case */
	if (x < 2)
	{
		return (0);
	}
	else if (y == 1)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	/* recursive call */
	return (prime_num(x, y - 1));
}
