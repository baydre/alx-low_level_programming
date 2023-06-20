/*
 * structures_typedef, Task 2: function that prints a "struct dog".
 */
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: initialises the struct type dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", (d->name != NULL) ? d->owner : "(nil)");
	}
}
