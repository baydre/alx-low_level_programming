#include <stdio.h>

/**
 * main - print sum of even Fibonacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_of_evens = 0;
	int x;
	int y;
	int sum = 1;

	x = 1;
	y = 1;

	while (y < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_evens += sum;
	}
	printf("%d\n", sum_of_evens);

	return (0);
}
