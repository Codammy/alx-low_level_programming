#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches for a string for any of a set of bytes and return.
 *
 * @s: pointer.
 * @accept: pointer.
 *
 * Return: (s);
 */
char *_strpbrk(char *s, char *accept)
{
	char *rest = strpbrk(s, accept);

	return (rest);
}
