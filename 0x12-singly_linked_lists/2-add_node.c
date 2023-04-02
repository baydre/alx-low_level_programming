#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 *            of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: address of the new element, or NULL
 * if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	char *cp_str;
	int len = 0;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	cp_str = strdup(str);
	if (cp_str == NULL)
	{
		free(fresh);
		return (NULL);
	}

	while (str[len])
		len++;

	fresh->str = cp_str;
	fresh->len = len;
	fresh->next = *head;

	*head = fresh;

	return (fresh);
}
