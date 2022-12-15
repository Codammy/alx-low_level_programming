#include "main.h"

/**
 * more_numbers - prints 10 times of i ranging from 0 - 14.
 * Return: 0.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
	if (i < 10)
	_putchar(i + '0');
	else
	{
	_putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
	}
	}
	_putchar('\n');
}
