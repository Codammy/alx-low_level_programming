#include "main.h"

/**
 * more_numbers - prints 10 times of i ranging from 0 - 14.
 * Return: 0.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	for (j = 0; j <= 14; j++)
	{
	{
	if (j < 10)
	_putchar(i + '0');
	else
	{
	_putchar(j / 10 + '0');
	_putchar(j % 10 + '0');
	}
	}
	}
	_putchar('\n');
}
