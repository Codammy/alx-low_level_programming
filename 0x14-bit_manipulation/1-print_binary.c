#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts, print decimal to binary
 *
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int ref = n, len = 0, num = n;

	if (n == 0)
		_putchar('0');
	while (ref > 0)
	{
		ref >>= 1;
		len++;
	}
	num = 1 << (len - 1);
	while (len > 0)
	{
		n & num ? _putchar('1') : _putchar('0');
		n <<= 1;
		len--;
	}
}
