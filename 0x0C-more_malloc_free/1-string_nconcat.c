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
	unsigned int b = n;
	size_t len_s1, len_s2, len_concat;
	char *soln;

	/* treat as an empty string if s1, s2 is NULL */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* gets the lengths of the strings */
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	/* determines the length to be concatenated */
	len_concat = (b >= len_s2) ? len_s2 : b;

	soln = (char*)malloc_checked(len_s1 + len_concat + 1);
	if (soln == NULL)
	{
		return (NULL);
	}

	/* copy s1 to soln */
	memcpy(soln, s1, len_s1);

	/* copy s2 to n-bytes */
	memcpy(soln + len_s1, s2, sizeof(char) * len_concat);

	/* terminate result using NULL */
	soln[len_s1 + len_concat] = '\0';

	return (soln);
}
