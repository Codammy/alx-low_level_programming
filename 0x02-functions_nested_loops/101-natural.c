#include <stdio.h>

/**
 * main - sum up multiples 3 and 5.
 *
 * Return: 0.
 */
int main(void)
{
	int x = 0;

	for (int n = 1; n < 1024; n++)
	{
	if (n % 3 == 0 || n % 5 == 0)
		x += n;
	}
	printf("%d", x);

}
