/*
 * more_singly_linked_list, Task 7: function that returns
 * the nth node of a list.
 */
#include "lists.h"

/**
 * get_nodeint_at_index - checks for desired index in each
 * node's index.
 * @head: head of the list.
 * @index: input integer value.
 * Return: NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
