#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings.
 *
 * @separator: sep
 * @n: size
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list opt;
	unsigned int i = 0;

	va_start(opt, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(opt, char *));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
