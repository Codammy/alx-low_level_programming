#include <stdio.h>

/**
 * main -Printing all possible number combination of two digits
 *
 * Return : (0)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1 + i; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i == 8) && (j == 9))
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
