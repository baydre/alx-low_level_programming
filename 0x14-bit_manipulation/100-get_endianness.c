#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian otherwise 1
 *        if little endian
 */

int get_endianness(void)
{
	int dgt = 1;
	char *endian = (char *)&dgt;

	if (*endian == 1)
	{
		return (1);
	}

	return (0);
}
