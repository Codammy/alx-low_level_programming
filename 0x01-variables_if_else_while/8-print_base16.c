#include <stdio.h>

/**
 * main - Entry point
 * printing base 16 number from 0 to f
 * Return: (0)
 */
int main(void)
{
	int i = 48;
	int j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
