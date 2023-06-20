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
	/*
	 * if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	*/
	if (d == NULL)
		return;
	d->name = (d->name == NULL) ? "(nil)" : d->name;
	d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
