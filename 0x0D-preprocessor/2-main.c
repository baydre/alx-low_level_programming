/*
 * preprocessor, Task 2: program that prints the name of the file
 * it was compiled from, followed by a newline.
 */
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: zero '0' Always.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
