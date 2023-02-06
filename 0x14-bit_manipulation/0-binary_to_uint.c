#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return:  the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	size_t lenBit, retVal = 0, by2 = 1;
	int i;

	if (b == NULL)
		return (0);
	lenBit = strlen(b);
	i = lenBit - 1;
	while (i >= 0)
	{
		if (b[i] == 0)
			return (0);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			retVal += by2;
		by2 *= 2;
		i--;
	}
	return (retVal);
}
