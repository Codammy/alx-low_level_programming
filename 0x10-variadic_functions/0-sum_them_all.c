#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of opt args passed
 * Return: sum of args passed or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list opt;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(opt, n);
	for (i = 0; i < n; i++)
		sum += va_arg(opt, int);

	return (sum);
}
