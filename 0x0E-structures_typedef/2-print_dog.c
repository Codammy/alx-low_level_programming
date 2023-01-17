#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct variable or object
 * @name: object name; indicates dogs name
 * @age:  .......age
 * @owner: ........owner
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
