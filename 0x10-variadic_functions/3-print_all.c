#include <stdarg.h>
#include <string.h>

/**
 * print_all - A function that prints anything
 *
 * format: List of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i, len;
	va_list p;
	len = strlen(format);

	va_start(p, format);

	while (i < format)
	if (format[i] != "s" && format[i] != "c" && format[i] != "i" && format[i] != "f")
		continue;
	if (format[i] == "f")
		printf(va_arg(p, double);
	else
		va_arg(p, int);
	printf();
}
