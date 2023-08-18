#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer variable.
 * @n: argument variable.
 * Return: pointer to new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create a node*/
	dlistint_t *xptr = malloc(sizeof(dlistint_t));
	/*values assignment to node using n-arg*/
	xptr->n = n;
	/*make the node at the top of the list*/
	xptr->next = *head;
	xptr->prev = NULL;
	*head = xptr;
	/*return a pointer to the node created*/
	return (xptr);
}
