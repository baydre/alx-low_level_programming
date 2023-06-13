/*
 * Static libraries, Task 0: function compares the strings
 * 's1' and 's2' lexicographically. It returns an integer value less than,
 * equal to, or greater than 0, depending on whether 's1' is less than,
 * equal to, or greater than 's2', respectively.
 */
#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 * If s1 == s2, 0.
 * If s1 > s2, the positive difference of
 * the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	/* implements _strcmp functions */
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
