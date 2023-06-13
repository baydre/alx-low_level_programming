/*
 * malloc_free, Task 1: function returns a pointer to a newly space in memory,
 * which contains a copy of the string given as a parameter.
 */
#include "main.h"

/**
 * _strdup - returns a pointer to the duplicated new str.
 * @str: duplicated new string.
 * Return: (_strdup == success) return *_strdup otherwise '\0' if it fails.
 */
char *_strdup(char *str)
{
	int b = 0;
	int len = 0;
	char *dup_str;

	/*dup_str = malloc(sizeof(char) * (len + 1));*/

	/* returns NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	
	while (str[len] != '\0')
	{
		len++;
	}
	 
	
	dup_str = (char *)malloc(sizeof(char) * (len + 1));
	/* */
	if (dup_str == NULL)
	{
		return (NULL);
	}

	while (b < len)
	{
		dup_str[b] = str[b];
		b++;
	}

	dup_str[len] = '\0';

	return (dup_str);
}
