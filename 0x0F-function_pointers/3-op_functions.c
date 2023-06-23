/*
 * function_pointers, Task 3(ii): file contains the implementation of
 * five operation.
 * functions: "op_add", "op_sub", "op_mul", "op_div".
 */
#include "3-calc.h"

/**
 * op_add - computes the sum of given integers.
 * @a: input integer.
 * @b: input integer.
 * Return: sum of a & b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the differenc of given integers.
 * @a: input integer.
 * @b: input integer.
 * Return: difference of a & b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of given integers.
 * @a: input integer.
 * @b: input integer.
 * Return: product of a & b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of given integers.
 * @a: input integer.
 * @b: input integer.
 * Return: integer division value of a & b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the modulus of given integers.
 * @a: input integer.
 * @b: input integer.
 * Return: modulus remainder value of a & b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
