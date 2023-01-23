#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - A function that prints anything
 *
 * @format: List of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	int len = strlen(format);

	va_list p;

	va_start(p, format);

	while (i < len)
	{
		if (format[i] == 'f')
			printf("%f", va_arg(p, double));
		else if (format[i] == 's')
			printf("%s", va_arg(p, char *));
		else if (format[i] == 'i')
			printf("%d", va_arg(p, int));
		else if (format[i] == 'c')
			printf("%c", va_arg(p, int));

		if (i < len - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
