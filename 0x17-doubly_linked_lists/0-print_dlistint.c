#include "lists.h"

/**
 * print_dlistint - prints all elements in a list.
 * @h: pointer variable.
 * Return: counter variable.
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*initialize the count variable*/
	size_t count = 0;
	const dlistint_t *xptr = h;

	/*iterate over the list*/
	while (xptr != NULL)
	{
	/*print the elements & increment count*/
		printf("%d\n", xptr->n);
		xptr = xptr->next;
		count++;
	}

	return (count);
}
