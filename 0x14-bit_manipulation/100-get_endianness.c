/*
 * bit_manipulation, Task 6: function that checks the endianness.
 */
#include "main.h"

/**
 * get_endianness - checks the endiannes.
 * Return: 0 if big endian otherwise 1
 * if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *bytePtr = (unsigned char *)&num;

	if (*bytePtr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
