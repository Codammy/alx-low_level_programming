#include "main.h"

/**
 * flip_bits - converts fromnumber to another
 *
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int tmp, i = 0;

	tmp = m ^ n;
	while (tmp)
	{
		if (tmp & 1)
			i++;
		tmp >>= 1;
	}
	return (i);
}
