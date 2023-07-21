#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline.
 *
 * @separator: seperates each numbers
 * @n: size of opt args
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list opt;
	unsigned int i = 0;

	va_start(opt, n);
	while (i < n)
	{
		printf("%d", va_arg(opt, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
