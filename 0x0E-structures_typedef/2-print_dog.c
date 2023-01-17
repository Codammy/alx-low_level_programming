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
/*	(*d).name = "bingo";*/
		if ((*d).name == 0)
			printf("(nil)");
/*	(*d).age = 2;*/
		if ((*d).age == 0)
			printf("(nil)");
/*	(*d).owner = "Mr Dam";*/
		if ((*d).owner == 0)
			printf("(nil)");
}
