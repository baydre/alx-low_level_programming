/*
 * Static libraries, Task 0: _strcpy function copies the string 'src'
 * to the string 'dest', including the null terminator. It returns a
 * pointer to the destination string 'dest'.
 */
#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	/* implements _strcpy functions */
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
