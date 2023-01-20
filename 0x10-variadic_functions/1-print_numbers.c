#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: size of arg.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ptr;

	if (n == 0 || separator == 0)
		return;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);

		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
