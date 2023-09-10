/*
 * hash_tables, Task 1: a hash function implementing
 * the djb2 algorithm.
 */
#include "hash_tables.h"

/**
 * hash_djb2 - implementation of djb2 algorithm.
 * function by Dan Bernstein.
 * @str: string key for generating the hash.
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
