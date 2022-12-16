#include "main.h"

/**
 * print_diagonal - prints character \ to stdo
 * @n: parameter;
 * Return: null
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		break;
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
