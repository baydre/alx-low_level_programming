#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *xPtr;

	do {
		xPtr = head->next;
		free(head->str);
		free(head);
		head = xPtr;
	} while (head);
}

