/*
 * singly-linked_list, Task 1: function that returns the number of elements
 * in a linked list.
 */
#include "lists.h"

/**
 * list_len - returns number of elements in the list.
 * @h: head of the list.
 * Return: number of count.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
