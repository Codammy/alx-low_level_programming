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
	int l = abs(n);
	int k = (l % 10);
	int z = 88;

	_putchar(k + '0');
	if (n == INT_MIN)
		return (z);
	else
		return (k);
}