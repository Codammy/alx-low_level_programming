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

	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
