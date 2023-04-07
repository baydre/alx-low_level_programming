#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list and
 * takes in a double pointer
 * @head: The double pointer to head node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *bay;

	if (head == NULL)
		return;

	while (*head) 
	{
		bay = (*head)->next;
		free(*head);
		*head = bay;
	}

	head = NULL;
}
