/*
 * singly-linked_list, Task 4: function that frees a list.
 */
#include "lists.h"

/**
 * free_list - free the list.
 * @head: head of the list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *bay;

	while (current != NULL)
	{
		bay = current;
		current = current->next;
		free(bay->str);
		free(bay);
	}

	head = NULL;
}
