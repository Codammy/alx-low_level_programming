/**
 * print_name - function that prints name
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
