/*
 * more_singly_linked_list, Task 2: function that adds a new node at the
 * beginning of a list.
 */
#include "lists.h"

/**
 * add_nodeint - adds a new node athe beginning of the list.
 * @head: head of the list.
 * @n: input integer value.
 * Return: new node address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
