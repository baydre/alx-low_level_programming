/*
 * function_pointers, Task 3(iii): file contains functions that selects
 * the correct function to perform an operation asked by user.
 */
#include "3-calc.h"

/**
 * get_op_func - selects the correct operation function based
 * on the operator symbol provided.
 * @s: charater array operator
 * Return: function pointer that corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	int b = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[b].op != NULL)
	{
		if (strcmp(s, ops[b].op) == 0)
		{
			return (ops[b].f);
		}
		b++;
	}

	return (NULL);
}
