#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal
 * @index: index to get.
 *
 * Return: index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary[32];
	size_t x = n, i = 0;

	if (index > 32)
		return (-1);
	if (n == 0)
		return (0);
	while (x > 0)
	{
		if (x & 1)
			binary[i] = 1;
		else
			binary[i] = 0;
		x >>= 1;
		i++;
	}

	return (binary[index]);
}
