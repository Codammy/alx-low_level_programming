
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct variable or object
 * @name: object name; indicates dogs name
 * @age:  .......age
 * @owner: ........owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = "bingo";
	(*d).age = 2;
	(*d).owner = "Dammy";

	return (d);
}
