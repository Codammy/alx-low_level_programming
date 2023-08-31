#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, j = 1;
	int i;

	if (!b)
		return (0);
	for (i = strlen(b) - 1; i >= 0; j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num += j;
		i--;
	}
	return (num);
}
