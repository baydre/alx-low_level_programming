#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int digit = 0, src_len = 0;

	while (src[digit++])
		src_len++;

	for (digit = 0; src[digit] && digit < n; digit++)
		dest[digit] = src[digit];

	for (digit = src_len; digit < n; digit++)
		dest[digit] = '\0';

	return (dest);
}
