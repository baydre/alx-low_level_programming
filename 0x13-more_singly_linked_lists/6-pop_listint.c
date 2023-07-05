/*
 * more_singly_linked_list, Task 6: function that deletes
 * the head node of a list.
 */
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: head of the list.
 * Return: data collected
 */
int pop_listint(listint_t **head)
{
	int betti = (*head)->n;
	listint_t *bay = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(bay);

	return (betti);
}
