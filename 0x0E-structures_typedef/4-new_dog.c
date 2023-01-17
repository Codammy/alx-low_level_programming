#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == 0)
		return (0);
	(*newDog).name = name;
	(*newDog).age = age;
	(*newDog).owner = owner;

	return (newDog);
}
