/*
 * function_pointers, Task 0: function that prints a name.
 */
#include "function_pointers.h"

/**
 * print_name - calls the function pointed to "f"
 * and pass the "name".
 * @name: argument passed.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
