#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer of listint_t list
 * @index: node index, starting at 0
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x = head;

	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (x != NULL)
	{
		if (i == index)
		{
			return (x);
		}

		i++;
		x = x->next;
	}

	return (x);
}
