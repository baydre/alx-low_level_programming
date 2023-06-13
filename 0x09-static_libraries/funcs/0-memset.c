/*
 * Static libraries, Task 0: _memset function fills the first 'n' bytes
 * of the memory area pointed to by 's' with the constant byte 'b'.
 * It returns a pointer to the memory area 's'.
 */
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: points to the constant
 * @b: constant variable
 * @n: maximum bytes usage
 * Return: pointer to the constant (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* implements the function of _memset */
	unsigned int num;

	for (num = 0; n > 0; num++, n--)
	{
		s[num] = b;
	}

	return (s);
}
