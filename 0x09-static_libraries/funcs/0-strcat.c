/*
 * Static libraries, Task 0: strcat function concatenates
 * the string 'src' to the end of the string 'dest' and
 * returns a pointer to the resulting string 'dest'.
 */
#include "main.h"

/**
 * _strcat - concatenates the 'src' string to the 'dest' string
 * @src: source string to append to 'dest'
 * @dest: destination string to be concatenated
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	/* implements _strcat function */
	int a = 0;
	int b = 0;

	while (dest[a++])
	{
		b++;
	}
	for (; src[a]; a++)
	{
		dest[b++] = src[a];
	}
	return (dest);
}
