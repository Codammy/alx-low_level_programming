#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to decimal.
 * @index: position to set;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int k;

	if (index > 32)
		return (-1);
	k = 1 << index;
	k = ~k;
	*n &= k;
	return (1);
}
