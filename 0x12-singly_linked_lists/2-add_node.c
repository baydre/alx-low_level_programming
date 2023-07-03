/*
 * singly-linked_list, Task 2: function that adds a new node at the
 * beginning of a list.
 */
#include "lists.h"

/**
 * add_node - add a new node address to the list.
 * @head: head of the list.
 * @str: string input.
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new = malloc(sizeof(list_t));
	char *cp_str = strdup(str);

	if (node_new == NULL)
	{
		return (NULL);
	}

	if (cp_str == NULL)
	{
		free(node_new);
		return (NULL);
	}

	node_new->str = cp_str;
	node_new->len = strlen(cp_str);
	node_new->next = *head;

	*head = node_new;

	return (node_new);
}
