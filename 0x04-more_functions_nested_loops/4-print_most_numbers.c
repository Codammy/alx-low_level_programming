#include "main.h"
#include <ctype.h>
/**
 * print_most_numbers - prints numbers renaging from 0 - 9.
 * do not print 4 and 9
 * Return: 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i == 2 || i == 4)
		continue;
	_putchar(i + '0');
	}
	_putchar('\n');
}
