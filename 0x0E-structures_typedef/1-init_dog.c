/*
 * structures_typedef, Task 1: function that initialize a variable
 * of type "struct dog".
 */
#include "dog.h"

/**
 * init_dog - initialises struct dog
 * @d: initialises the struct type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
