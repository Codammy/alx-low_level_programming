#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: memory to check from.
 * @c: value to check for.
 *
 * Return: (ret);
 */
char *_strchr(char *s, char c)
{
	char * ret = strchr(s, c);

	return (ret);
}
