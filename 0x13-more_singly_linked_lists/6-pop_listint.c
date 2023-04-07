#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: pointer to the addr. of the head
 * of the listint_t list
 * Return:'0' Zero if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *bay;
	int x;

	if (*head == NULL)
	{
		return (0);
	}

	bay = *head;

	*head = (*head)->next;
	x = bay->n;

	free(bay);

	return (x);
}

