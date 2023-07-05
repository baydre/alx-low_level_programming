/*
 * more_singly_linked_list, Task 0: function that prints all the elements
 * of a list
 */
#include "lists.h"

/**
 * print_listint - prints the values of a list.
 * @h: head of the list.
 * Return: number of count.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
