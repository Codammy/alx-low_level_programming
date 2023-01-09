#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if a char is uppercase or not.
 * @c: value
 * Return: 1
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
