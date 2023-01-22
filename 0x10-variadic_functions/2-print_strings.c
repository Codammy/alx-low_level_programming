#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - A function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: size of arg.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char*);
		
		string != NULL ? printf("%s", string) : printf("(nil)");

		if (separator != NULL)
		if (i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
