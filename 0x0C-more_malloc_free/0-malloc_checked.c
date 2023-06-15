/*
 * more_malloc_free, Task 0: function that allocates memory using malloc.
 */

#include "main.h"

/**
 * malloc_checked - takes argument of unsigned int which represents
 * the number of bytes to allocate.
 * @b: size of bytes to be allocated.
 * Return: allocated pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *bptr = malloc(b);

	/**/
	if (bptr == NULL)
	{
		exit(98);
	}

	return (bptr);
}
