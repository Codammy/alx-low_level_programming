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
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
				switch (format[i])
				{
				case 0:
					printf("(nil)");
					break;
				default:
					printf("%s", va_arg(p, char *));
					break;
				}
				break;
			case 'c':
				printf("%c", va_arg(p, int));
				break;
			default:
				break;
		}
		i++;
	}
	putchar('\n');
}
