#include "main.h"

/**
 * print_number - print mumbers to stdo
 * @n: param
 * Return: void;
 */
void print_number(int n)
{
	int x = n / 10;
	int y = n % 10;

	if (n < 0)
	{
	_putchar('-');
	n += n;
	if (n > 9)
	{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	}
	else
	{
	_putchar(n + '0');
	}
	}
	if (n >= 10)
	{
	_putchar(x + '0');
	_putchar(y + '0');
	}
	else
	{
	_putchar(n + '0');
	}
}
