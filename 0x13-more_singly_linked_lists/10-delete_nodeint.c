/*
 * more_singly_linked_list, Task 10: function that deletes
 * the node at index of list.
 */
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the malloc and frees
 * the node.
 * @head: head of the list.
 * @index: input integer value.
 * Return: 1 successful otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		count++;
		prev = current;
		current = current->next;
	}

	return (-1);
}
