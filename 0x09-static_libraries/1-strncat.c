#include "main.h"

/**
 * *_strcat - Concatenates @src to @dest
 * @src: The source string to append to @dest
 * @dest: The destiation string to be concatenated upon
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x++])
		y++;
	for (x = 0; src[x]; x++)
		dest[y++] = src[x];
	return (dest);
}
