/*
 * function_pointers, Task 0: function that prints a name.
 */
#include "function_pointers.h"

/**
 * print_name - takes two parameters 'f' and 'name'.
 * name: the argument passed.
 * @f: call the function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
