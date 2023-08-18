#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list.
 * @h: pointer variable.
 * Return: counter variable.
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*initialize the counter variable*/
	size_t count = 0;
	const dlistint_t *xptr = h;
	/*iterate the linked list*/
	while (xptr != NULL)
	{
		xptr = xptr->next;
		count++;
	}
	return (count);
	/*return the counter variable*/
}
