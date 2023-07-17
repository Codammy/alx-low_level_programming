#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog's age
 * @owner: dog owner
 * Return: new dog or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	bingo = malloc(sizeof(dog_t));
	if (!bingo)
		return (NULL);
	if (name == NULL || owner == NULL)
	bingo->name = strdup(name);
	bingo->owner = strdup(owner);
	bingo->age = age;

	return (bingo);
}
