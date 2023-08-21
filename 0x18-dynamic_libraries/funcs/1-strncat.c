/*
 * Static libraries, Task 0: function concatenates at most 'n' characters
 * from the string 'src' to the end of the string 'dest'.
 * It returns a pointer to the resulting string 'dest'.
 */
#include "main.h"

/**
 * _strncat - concatenates 'n' strings bytes at most from src.
 * @dest: string to be appended upon.
 * @src: string to be appended to dest.
 * @n: 'n' bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* implements _strcat function */
	int p = 0, q = 0;

	while (dest[p++])
	{
		q++;
	}
	for (p = 0; src[p] && p < n; p++)
	{
		dest[q++] = src[p];
	}
	return (dest);
}
