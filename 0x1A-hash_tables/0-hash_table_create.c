/*
 * hash_tables, Task 0: function that creates a hash table.
 */
#include "hash_tables.h"

/**
 * hash_table_create - creates & allocates
 * memory for hash table.
 * @size: size of array.
 * Return: pointer to table_new else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
/* create a new hash table */
{
	hash_table_t *table_new;
	unsigned long int i;

	/* malloc for the hash table */
	table_new = malloc(sizeof(hash_table_t));
	if (table_new == NULL)
		return (NULL);

	/* malloc for the array of hash table entries */
	table_new->size = size;
	table_new->array = malloc(sizeof(hash_node_t *) * size);
	if (table_new->array == NULL)
	{
		free(table_new); /*malloc fails, free previous malloc*/
		return (NULL);
	}

	/* initialise size & entry each in the table */
	for (i = 0; i < size; i++)
		table_new->array[i] = NULL;

	return (table_new);
}
