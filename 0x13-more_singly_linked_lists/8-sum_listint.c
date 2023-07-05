/*
 * more_singly_linked_list, Task 8: function that returns the sum of all
 * the data (n) of list.
 */
#include "lists.h"

/**
 * sum_listint - sums all the data value available.
 * @head: head of the list.
 * Return: sum value.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
