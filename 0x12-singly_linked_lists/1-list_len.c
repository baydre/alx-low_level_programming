#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: linked list_t list
 * @elements: counter var for size_t (nodes)
 *
 * Return: number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	for (; h;)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
