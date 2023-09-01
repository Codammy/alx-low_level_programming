#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 *
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int tmp = n, m = 0;

	if (n == 0)
		_putchar('0');
	while (tmp > 0)
	{
		tmp >>= 1;
		m++;
	}
	m = 1 << (m - 1);
	while (m)
	{
		n & m ? _putchar('1') : _putchar('0');
		m >>= 1;
	}
}
