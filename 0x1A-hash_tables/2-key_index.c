/*
 * hash_tables, Task 2: function that gives you
 * the index of a key
 */
#include "hash_tables.h"

/**
 * key_index - calculates the hash value for the key.
 * @key: search key.
 * @size: array size of hash_table.
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value_hash = hash_djb2(key);

	if (size == 0)
		return (0);

	return (value_hash % size);
}
