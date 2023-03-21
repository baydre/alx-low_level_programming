#include "main.h"
#include <stdlib.h>

/**
* argstostr - A function that concatenates all arguments of your program
* @ac: number of arguments
* @av: array containing arguments
* Return: A pointer to string that containing all arguments
* or NULL if ac == 0, if av == NULL, or upon failure
*/

char *argstostr(int ac, char **av)
{
	char *new_str;
	int len = 0, x = 0, y, z = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
		len++;
	}
	len++;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			new_str[z] = av[x][y];
			z++;
		}
		new_str[z] = '\n';
		z++;
	}
	new_str[z] = '\0';
	return (new_str);
}
