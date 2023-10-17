#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if a c is a digit or not.
 * @c: value
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
