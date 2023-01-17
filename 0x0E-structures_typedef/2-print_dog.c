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
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
