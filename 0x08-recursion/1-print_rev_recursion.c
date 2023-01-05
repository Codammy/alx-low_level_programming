#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - reverses a string
 * @s: constant string
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;
	char *new;

	strncpy(new, s, len - 1);
	if (len < 0)
		return;
	_putchar(s[len]);
	_print_rev_recursion(new);
}
