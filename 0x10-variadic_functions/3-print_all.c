#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of args passed.
 */
void print_all(const char * const format, ...)
{
	char *str;
	int i;
	va_list opt;

	va_start(opt, format);
	while (format[i])
	{
		if (format[i] == 'i' || format[i] == 'f')
			printf("%d", va_arg(opt, int));
		else if (format[i] == 'c')
			printf("%c", va_arg(opt, int));
		else if (format[i] == 's')
		{
			str = va_arg(opt, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}
		i++;
		while (format[i])
		 {
			 printf(", ");
			 break;
		 }
	}
	printf("\n");
}
