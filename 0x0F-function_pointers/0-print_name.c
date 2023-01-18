/**
 * print_name - function that prints name
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 || name != 0)
	f(name);
}
