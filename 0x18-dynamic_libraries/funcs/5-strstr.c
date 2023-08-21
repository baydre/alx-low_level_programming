/*
 * Static libraries, Task 0: _strstr function searches for the first occurrence
 * of the string 'needle' within the string 'haystack'. It returns a pointer to
 * the first occurrence of 'needle' in 'haystack', or a null pointer
 * if 'needle' is not found.
 */
#include "main.h"

/**
 * _strstr - searches for string 'needle' in string 'haystack'.
 * @haystack: where to search for 'needle' string.
 * @needle: string to be searched.
 * Return: If the string is located, points to the beginning
 * of the located string. If the string is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	/* implements _strstr function */
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
