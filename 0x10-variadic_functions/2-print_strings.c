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
	char *str;

	va_start(opt, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(opt, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
