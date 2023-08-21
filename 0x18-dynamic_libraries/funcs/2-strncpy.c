/*
 * Static libraries, Task 0: _strncpy function copies at most 'n' characters
 * from the string 'src' to the string 'dest'. If 'src' is shorter than 'n',
 * the remaining characters in 'dest' are filled with null characters.
 * It returns a pointer to the destination string 'dest'.
 */
#include "main.h"

/**
 * _strncpy - copies at most 'n' bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int digit = 0, src_len = 0;

	while (src[digit++])
	{
		src_len++;
	}

	for (digit = 0; src[digit] && digit < n; digit++)
	{
		dest[digit] = src[digit];
	}

	for (digit = src_len; digit < n; digit++)
	{
		dest[digit] = '\0';
	}

	return (dest);
}
