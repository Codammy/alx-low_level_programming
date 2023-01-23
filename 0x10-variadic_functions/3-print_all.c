#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - A function that prints anything
 *
 * format: List of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	int i = 0, len;
	char c;
	int in;
	float f;
	char *s;

	va_list p;
	len = strlen(format);

	va_start(p, format);

	while (i < len)
	{
		if (format[i] != 's' && format[i] != 'c' && format[i] != 'i' && format[i] != 'f')
		{i++;
			continue;
		}
		if (format[i] == 'f')
		{
			f = va_arg(p, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(p, char *);
			printf("%s", s);
		}
		else if (format[i] == 'i')
		{
			in = va_arg(p, int);
			printf("%d", in);
		}
		else if (format[i] == 'c')
		{
			c = va_arg(p, int);
			printf("%c", c);
		}
		if (i < len - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
