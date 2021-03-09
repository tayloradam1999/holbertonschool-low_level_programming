#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog! :)
 * @name: Pointer to name in struct dog
 * @age: Float of dog's age
 * @owner: Pointer to owner in struct dog
 * Return: New dog! :)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z = 0;
	dog_t *dogger;

	while (name[x] != '\0')
		x++;

	while (owner[y] != '\0')
		y++;
	dogger = malloc(sizeof(dog_t));

	if (dogger == NULL)
	{
		free(dogger);
		return (NULL);
	}
	dogger->name = malloc(x * siizeof(dogger->name));
	if (dogger->name == NULL)
	{
		free(dogger->name);
		free(dogger);
		return (NULL);
	}

	for (; z <= x, z++)
		dogger->name[z] = name[z];
	dogger->age = age;

	dogger->owner = malloc(y * sizeof(dogger->owner));

	if (dogger->owner == NULL)
	{
		free(dogger->owner);
		free(dogger->name);
		free(dogger);
		return (NULL);
	}

	for (z = 0; z <= y; z++)
		dogger->owner[z] = owner[z];
	return (dogger);
}
