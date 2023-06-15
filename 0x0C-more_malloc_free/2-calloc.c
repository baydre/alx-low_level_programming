/*
 * more_malloc_free, Task 2: function that allocates memory for an array,
 * using malloc.
 */
#include "main.h"

/**
 * _calloc - takes two arguments, number of elements
 * size of each element.
 * @nmemb: elements number.
 * @size: total number of bytes.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *bptr;

	if (nmemb == 0  || size == 0)
	{
		return (NULL);
	}

	bptr = malloc_checked(nmemb * size);

	if (bptr != NULL)
	{
		memset(bptr, 0, nmemb * size);
	}

	return (bptr);
}
