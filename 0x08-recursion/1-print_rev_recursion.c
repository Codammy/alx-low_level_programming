#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: constant string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
