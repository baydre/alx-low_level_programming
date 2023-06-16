/*
 * more_malloc_free, Task 1: function that concatenates two strings.
 */

#include "main.h"
#include "0-malloc_checked.c"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: NULL otherwise pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, b = n;
	char *soln;
	
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1]; len1++)
	{
		len1++;
	}
		
	soln = malloc(sizeof(char) * (len1 + 1));

	if (soln == NULL)
	{
		return (NULL);
	}
	
	b = 0;

	for (len1 = 0; s1[len1]; len1++)
	{
		soln[b++] = s1[len1];
	}

	for (len1 = 0; s2[len1] && len1 < n; len1++)
	{
		soln[b++] = s2[len1];
	}

	soln[b] = '\0';

	return (soln);
}
