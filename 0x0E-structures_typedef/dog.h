#ifndef DOG_H
#define DOG_H
/*
 * structures_typedef, Task 0: define a new type struct dog with the
 * following elements.
 */

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - struct type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new struct type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
