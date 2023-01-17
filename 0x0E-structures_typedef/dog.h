#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - A dog's information
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
