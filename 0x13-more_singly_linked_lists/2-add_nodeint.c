#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds new node at the beginning
 *               of a listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
	{
		printf("Error\n");
		return (0);
	}


	fresh->n = n;
	fresh->next = *head;

	*head = fresh;

	return (fresh);
}
