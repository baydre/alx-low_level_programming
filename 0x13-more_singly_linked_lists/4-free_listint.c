#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: points to the head of listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *bay;

	while (head)
	{
		bay = head->next;
		free(head);
		head = bay;
	}
}
