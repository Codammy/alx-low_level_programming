#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: fro
 * @m: to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipped = 0, count = 0;

	flipped = n ^ m;

	while (flipped)
	{
		if (flipped  & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
