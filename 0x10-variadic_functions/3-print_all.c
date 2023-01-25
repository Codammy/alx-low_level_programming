#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_all - A function that prints anything
 *
 * @format: List of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	int i, len;
	va_list p;
	char *s;

	i = 0;
	len = strlen(format);
	va_start(p, format);
while (i < len)
{
		while (i > 0)
		{
			printf(", ");
			break;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
				s = va_arg(p, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			case 'c':
				printf("%c", va_arg(p, int));
				break;
		}
	i++;
}
	putchar('\n');
}
