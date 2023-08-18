#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of the list.
 * @head: pointer variable.
 * @n: argument variable.
 * Return: new node address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*create a node*/
	dlistint_t *xptr = malloc(sizeof(dlistint_t));
	dlistint_t *bptr = *head;

	if (xptr == NULL)
		return (NULL);
	/*value assignment for elements in the node*/
	xptr->n = n;
	xptr->next = NULL;
	/*iterate through the linked list*/
	if (*head == NULL)
	{
		*head = xptr;
		xptr->prev = NULL;
	}
	else
	{
		while (bptr->next != NULL)
		{
			bptr = bptr->next;
		}
		bptr->next = xptr;
		xptr->prev = bptr;
	}
	/*position node at end of the list*/
	/*return the address of the new-node */
	return (xptr);
}
