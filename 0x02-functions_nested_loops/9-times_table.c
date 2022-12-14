#include "main.h"

/**
 * times_table - prints timestable
 *
 * return void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
		int z = x * y;

		if (z <= 9)
		{
		_putchar(z + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else
		{
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
