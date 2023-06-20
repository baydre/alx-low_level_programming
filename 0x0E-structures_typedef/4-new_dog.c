/*
 * structures_typedef, Task 3: function that creates a new dog
 */
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *aja;

	aja = malloc(sizeof(dog_t));

	if (aja != NULL)
	{
		aja->name = malloc(strlen(name) + 1);
		aja->owner = malloc(strlen(owner) + 1);

		if (aja->name != NULL && aja->owner != NULL)
		{
			strcpy(aja->name, name);
			strcpy(aja->owner, owner);
			aja->age = age;

			return (aja);
		}

		free(aja->name);
		free(aja->owner);
		free(aja);
	}

	return (NULL);
}
