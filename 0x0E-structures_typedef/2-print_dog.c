#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 *
 * @d: struct dog.
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("nil\n");
	if (d)
	{
		if (!d->name)
			printf("nil\n");
		else
			printf("Name: %s\n", d->name);

		if (!d->age)
			printf("nil\n");
		else
			printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
