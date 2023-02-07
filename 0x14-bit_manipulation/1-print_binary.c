#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to convert
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int k = n;

	if (n == 0)
		_putchar('0');
	else
	while (n > 0)
	{
		k & 1 ? _putchar('1') : _putchar('0');
		k = n >> 1;
		n = k;
	}
}
