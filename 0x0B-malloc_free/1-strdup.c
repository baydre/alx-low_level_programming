#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 *memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		copy[x] = str[x];
	copy[len] = '\0';

	return (copy);
}
