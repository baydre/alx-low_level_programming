/*
 * Static libraries, Task 0: _memcpy function copies 'n' bytes
 * from the memory area 'src' to the memory area 'dest'.
 * It returns a pointer to the destination memory area 'dest'.
 */
#include "main.h"

/**
 * _memcpy - copies bytes from memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: size of memory from source
 * Return: pointer to destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* implements _memcpy functions */
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
