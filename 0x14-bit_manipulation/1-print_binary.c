#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to convert
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int k = n, x = n, count = 0;

	if (n == 0)
		_putchar('0');
	else
	while (x > 0)
	{
		x = k >> 1;
		k = x;
		count++;
	}
	while (count > 0)
	{
		k = n >> (--count);
		(k & 1) ? _putchar('1') : _putchar('0');
	}
}
