#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints a string in reverse follwed by a new line.
 *
 * @s: constant string
 *
 * Return: no rueturn.
 */
void _puts_recursion(char *s)
{
	int x = strlen(s);
puts(s[x]);
x--;
_puts_recursion(s);
}
