/*
 * malloc_free, Task 0: function that creates an array of chars,
 * and initialises it with a specific char.
 */
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: array size to be initialised.
 * @c: char to be initialised.
 * Return: '0\' (size == 0), *arr || '0\' if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *bay = malloc(sizeof(char) * size);
	unsigned int b = 0;

	/* returns NULL if size = 0 */
	if (size == 0)
	{
		return (NULL);
	}

	/* returns NULL if bay = 0 */
	if (bay == 0)
	{
		return (NULL);
	}

	/* iterates to create an array of chars */
	do {
		bay[b] = c;
		b++;
	} while (b < size);

	return (bay);
}
