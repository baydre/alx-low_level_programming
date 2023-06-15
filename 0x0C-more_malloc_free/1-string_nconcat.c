/*
 * more_malloc_free, Task 1: function that concatenates two strings.
 */

#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: NULL otherwise pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, b = n;
	char *soln;

	/* calculate lengths strlen using strlen function */
	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	/**/
	if (b >= len2)
	{
		b = len2;
	}

	/* call malloc_checked from task 0 to alloc_mem */
	soln = malloc_checked(len1 + b + 1);

	if (soln == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		memcpy(soln, s1, len1);
	}

	if (b > 0 && s2 != NULL)
	{
		memcpy(soln + len1, s2, b);
	}

	soln[len1 + n] = '\0';

	return (soln);
}
