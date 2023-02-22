#include "main.h"
/**
  * print_alphabet - The entry point of the function
  * @void: The function takes no parameters
  *
  * Description:  This function prints the alphabet, in lowercase,
  * followed by a new line. You can only use _putchar twice in your code.
  */
void print_alphabet(void)
{
	char alpha = 'a';

	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	_putchar('\n');

