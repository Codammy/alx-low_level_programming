#include "main.h"
#include <ctype.h>
/**
 * _isupper(int c) - check if a char is uppercase or not.
 * @c: value
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
