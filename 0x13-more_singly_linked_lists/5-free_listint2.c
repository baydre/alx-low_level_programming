/*
 * more_singly_linked_list, Task 5: function that frees a list
 * while setting the head to NULL.
 */
#include "lists.h"

/**
 * free_listint2 - frees the allocated memory for each nodes.
 * it also sets the head pointer to NULL.
 * @head: head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
