#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *update, *end;

	update =  malloc(sizeof(listint_t));
	if (update == NULL)
	{
		printf("Error\n");
		return (0);
	}

	update->n = n;
	update->next = NULL;

	if (*head == NULL)
	{
		*head = update;
	}

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = update;
	}

	return (*head);
}
