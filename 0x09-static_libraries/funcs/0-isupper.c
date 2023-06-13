/*
 * Static libraries, Task 0: isupper function checks whether
 * the character 'c' is an uppercase letter.It returns a non-zero value
 * if 'c' is uppercase, and 0 otherwise.
 */
#include "main.h"

/**
 * _isupper -  checks for uppercase characters
 * @c: character to be checked
 * Return: (c == uppercase) ? '1' : '0';
 */
int _isupper(int c)
{
	/* implements the _isupper function */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
