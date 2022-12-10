#include <stdio.h>

/**
 * main - Entry point
 * printing base ten number from 0 to 10
 * Return: (0)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
