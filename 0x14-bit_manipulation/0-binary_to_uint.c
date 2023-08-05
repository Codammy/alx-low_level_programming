#include <string.h>
#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: binary number (string)
 * Return: converted number or 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0, len, i;

	if (!b)
		return (0);
	len = strlen(b) - 1;
	for (i = 1; len >= 0; i *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			num += i;
		len--;
	}
	return (num);
}
