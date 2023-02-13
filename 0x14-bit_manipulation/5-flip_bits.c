#include "main.h"

/**
 * flip_bits - returns the number of bit to fit to change a number.
 *
 * @n: fro.
 * @m: to.
 * Return: unsigned integer.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, j, k;

	while (n > 0)
	{
		j = n & 1;
		k = m & 1;
		if (j ^ k)
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
