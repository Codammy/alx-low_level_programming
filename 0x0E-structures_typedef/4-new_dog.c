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
	if (name == NULL)
		bingo->name = NULL;
	else
	{
		bingo->name = malloc(strlen(name) + 1);
		if (!(bingo->name))
			return (NULL);
		strcpy(bingo->name, name);
	}
	if (owner == NULL)
		bingo->owner = NULL;
	else
	{
		bingo->owner = malloc(strlen(owner) + 1);
		if (!(bingo->owner))
			return (NULL);
		strcpy(bingo->owner, owner);
	}
	bingo->age = age;

	return (bingo);
}
