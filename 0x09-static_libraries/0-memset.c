#include "main.h"
#include <string.h>

/**
 * _memset - fills memeory with a constant byte
 *
 * @s: pointer/ also starting point.
 * @b: constant byte.
 * @n: number of bytes to be filled.
 *
 * Return: (s) which is a pointer;
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
