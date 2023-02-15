#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * print_last_digit - using modulos
 * @n: param
 * Return: 0
 */
int print_last_digit(int n)
{
	int ab, las;

	ab = abs(n);
	las = ab % 10;
	if (n == INT_MIN)
		_putchar(las + '(');
	else
	_putchar(las + '0');
		return (las);
}
