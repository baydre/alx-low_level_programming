#include "main.h"
/**
  * _islower - The entry point of the function
  * @alpha: The character to be checked
  *
  * Description: This is  a function that checks for lowercase character.
  * Return: 1 if  lowercase, 0 if uppercase
  */
int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
