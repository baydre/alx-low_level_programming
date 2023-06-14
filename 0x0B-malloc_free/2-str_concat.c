/*
 * malloc_free,Task 2: function that concatenates two strings.
 */
#include "main.h"

/**
 * str_concat - concatenates two strings by checking if either
 * of the input strings is NULL.
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len, len1, len2;
	char *result;

	/* treats as an empty str as NULL is passed */
	if (s1 == NULL)
	{
		s1 = "";
	}
	/* treats as an empty str as NULL is passed */
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* determines the length of both str */
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));

	/* copies str contents to newly alloc mem */
	if (result != NULL)
	{
		strcpy(result, s1);
		strcat(result, s2);
	}

	return (result);
}
