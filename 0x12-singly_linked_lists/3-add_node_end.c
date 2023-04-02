#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 *                of a list_t list.
 * @head: pointer the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cp;
	int len = 0;
	list_t *fresh, *last;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	cp = strdup(str);
	if (str == NULL)
	{
		free(fresh);
		return (NULL);
	}

	while (str[len])
		len++;

	fresh->str = cp;
	fresh->len = len;
	fresh->next = NULL;

	if (*head == NULL)
		*head = fresh;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = fresh;
	}

	return (*head);
}
