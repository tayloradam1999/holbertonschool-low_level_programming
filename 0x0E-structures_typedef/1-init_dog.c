#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initalizes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to dog's name
 * @age: Variable for dog's age
 * @owner: Pointer to owner's name
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
