#include "main.h"
#include <ctype.h>
/**
 * print_most_numbers - prints numbers renaging from 0 - 9.
 * do not print 4 and 9
 * Return: 0.
 */
void print__most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i == 4 || i == 9)
		continue;
	putchar(i + '0');
	}
	_putchar('\n');
}
