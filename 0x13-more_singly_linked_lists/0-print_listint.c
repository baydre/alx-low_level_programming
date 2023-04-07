#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of list_int list
 * @h: pointer to struct list_int
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
