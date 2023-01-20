#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: size of args
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 1; i <= n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
