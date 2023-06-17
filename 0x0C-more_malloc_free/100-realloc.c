/*
 * more_malloc_free, Task 4: function that reallocates memory block
 * using malloc and free.
 */

#include "main.h"
#include "0-malloc_checked.c"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to memory previously allocated.
 * @old_size: size allocated space in bytes.
 * @new_size: new size of the new memory block in bytes.
 * Return: pointer of newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *bptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc_checked(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	bptr = malloc_checked(new_size);

	if (bptr != NULL)
	{
		unsigned int min_size = (old_size < new_size) ? old_size : new_size;

		memcpy(bptr, ptr, min_size);
		free(ptr);
	}

	return (bptr);
}
