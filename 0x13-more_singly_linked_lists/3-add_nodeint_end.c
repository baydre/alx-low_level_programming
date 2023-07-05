/*
 * more_singly_linked_list, Task 3: function that adds a new node
 * at the end of the list.
 */
#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list.
 * @head: head of the list.
 * @n: input integer value.
 * Return: new node address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node_new;
	}

	return (node_new);
}
