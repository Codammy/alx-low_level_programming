#include <stdio.h>

/**
 * main - Entry point
 * printing all possible single digits numbers in ascending order
 * with a comma after each
 * Return: (0)
 */
int main(void)
{
	int i = 48;
	int j = i - 1;

	while (i <= 57)
	{
		putchar(i);
		while (j < i)
		{
			if (j == 56)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
