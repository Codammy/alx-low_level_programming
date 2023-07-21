#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: lits of all types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list opt;
	char *strv;
	size_t len, i = 0, j = 1;

	if (!format)
		return;
	len = strlen(format);
	va_start(opt, format);
	while (i < len)
	{
		while (j < i)
		{
			j++;
			comma(format, i);
			break;
		}
		switch (format[i])
		{
			case 'f':
				printf("%d", va_arg(opt, int));
				break;
			case 'c':
				printf("%c", va_arg(opt, int));
				break;
			case 'i':
				printf("%d", va_arg(opt, int));
				break;
			case 's':
				strv = va_arg(opt, char *);
				if (!strv)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strv);
				break;
		}
		i++;
	}
	printf("\n");
}
/**
 * comma - adds comma.
 *
 * @format: formats
 * @i:index
 */
void comma(const char * const format, size_t i)
{
	switch (format[i])
	{
		case 'f':
			printf(", ");
			break;
		case 's':
			printf(", ");
			break;
		case 'c':
			printf(", ");
			break;
		case 'i':
			printf(", ");
			break;
	}
}
