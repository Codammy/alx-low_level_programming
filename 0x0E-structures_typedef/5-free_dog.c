#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees all dog element.
 *
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
