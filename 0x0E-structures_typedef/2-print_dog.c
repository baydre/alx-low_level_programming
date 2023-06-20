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

	d->name = (d->name == NULL) ? "(nil)" : d->name;
	d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

	printf("Name: %s\nAge: %.2f\nOwner: %s\n", d->name, d->age, d->owner);
}
