#include "main.h"
#include <stdlib.h>

/**
* strtow - function that splits a string into words
* @str: input pointer of the string to split
* Return: pointer to concatened strings or NULL if it str is NULL
*/

char **strtow(char *str)
{
	char **array;
	int x = 0, y, m, z = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[x]; x++)
	{
		if ((str[x] != ' ' || *str != '\t') && ((str[x + 1] == ' ' || str[x + 1] == '\t') || str[x + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0' && z < count; x++)
	{
		if (str[x] != ' ' || str[x] != '\t')
		{
			len = 0;
			y = x;
			while ((str[y] != ' ' || str[y] != '\t') && str[y] != '\0')
				y++, len++;
			array[z] = malloc((len + 1) * sizeof(char));
			if (array[z] == NULL)
			{
				for (z = z - 1; z >= 0; z++)
					free(array[z]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < len; m++, x++)
				array[z][m] = str[x];
			array[z++][m] = '\0';
		}
	}
	array[z] = NULL;
	return (array);
}
