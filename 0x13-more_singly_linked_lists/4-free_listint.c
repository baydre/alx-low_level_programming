/*
 * more_singly_linked_list, Task 4: function that frees a list.
 */
#include "lists.h"

/**
 * free_listint - frees allocated memory for each node.
 * @head: head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *bay;

	while (current != NULL)
	{
		bay = current;
		current = current->next;
		free(bay);
	}
}
