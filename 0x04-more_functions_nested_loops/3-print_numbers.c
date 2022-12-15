#include "main.h"
#include <ctype.h>
/**
 * print_numbers - check if a c is a digit or not.
 * Return: 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
