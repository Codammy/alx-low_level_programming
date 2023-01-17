#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the space alloccated to dog
 *
 * @d: stores dog address
 */
void free_dog(dog_t *d)
{
	if (d->owner != 0)
		free(d);
}
