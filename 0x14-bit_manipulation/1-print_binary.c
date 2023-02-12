#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to convert
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int k, x = n, count = 0;

	if (n == 0)
		_putchar('0');
	else
	while (x > 0)
	{
		x >>= 1;
		count++;
	}
	while (count > 0)
	{
		k = n >> (--count);
		(k & 1) ? _putchar('1') : _putchar('0');
	}
}
