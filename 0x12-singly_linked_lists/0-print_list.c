/*
 * singly-linked_list, Task 0: function that prints all elements
 * of a list.
 */
#include "lists.h"

/**
 * print_list - prints all elements.
 * @h: head of the list.
 * Return: number of a count.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		current = current->next;
	}

	return (count);
}
