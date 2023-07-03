/*
 * singly-linked_list, Task 3: function that adds a new node at the
 * end of list.
 */
#include "lists.h"

/**
 * add_node_end - adds a new node address to the end of the list.
 * @head: head of the list.
 * @str: string input.
 * Return: new node.
 */
list_t *add_node_end(list_t **head, const char *str)
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
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = node_new;
	}

	return (node_new);
}
