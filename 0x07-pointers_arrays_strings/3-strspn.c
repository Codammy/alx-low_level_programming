#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer.
 * @c: pointer.
 *
 * Return: (n);
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = strspn(s, accept);

	return (n);
}
