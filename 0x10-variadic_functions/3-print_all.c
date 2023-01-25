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
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'i':
				printf("%f", va_arg(p, double));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
				printf("%s", va_arg(p, char *));
				break;
			case 'c':
				printf("%c", va_arg(p, int));
				break;
		}
		i++;
	}
	putchar('\n');
}
