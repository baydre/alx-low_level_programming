/*
 * structures_typedef, Task 5: function that frees dogs.
 */
#include "dog.h"

/**
 * free_dog - frees struct dog.
 * @d: pointer to struct.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		return;
	if (d->name != NULL) free(d->name);
	if (d->owner != NULL) free(d->owner);
	free(d);
}
