/*
 * more_singly_linked_list, Task 8: function that returns the sum of all
 * data(n) of a list.
 */
#include "2-add_nodeint.c"
#include "lists.h"

/**
 * insert_nodeint_at_index - checks for desired position and inserts a
 * new node in it.
 * @head: head of the list.
 * @idx: index where the new node is inserted.
 * @n: integer data value.
 * Return: NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	current = *head;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
			{
				return (NULL);
			}

			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;

			return (new_node);
		}

		count++;
		current = current->next;
	}

	return (NULL);
}
