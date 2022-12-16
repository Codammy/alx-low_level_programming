#include "main.h"

/**
 * print_line - prints character / to stdo
 * @n: parameter;
 * Return: null
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		break;
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
