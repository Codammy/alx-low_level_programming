#include "dog.h"
#include <stdio.h>
/**
 * print_dog - initializes a variable of type struct dog
 * @d: struct variable or object
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("(nil)");

	if (d->age == 0)
		printf("(nil)");

	if (d->owner == 0)
		printf("(nil)");
}
