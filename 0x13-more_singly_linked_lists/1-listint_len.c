/*
 * more_singly_linked_list, Task 1: function that returns the number of
 * elements in a linked list.
 */
#include "lists.h"

/**
 * listint_len - tracks the number of elements in a linked list.
 * @h: head of the list.
 * Return: number of count.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
