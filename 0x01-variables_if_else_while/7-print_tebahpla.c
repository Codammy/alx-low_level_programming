#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * printing the mode of a random int to stdo
 * Return: (0)
 */
int main(void)
{
	int alphb = 122;

	while (alphb >= 97)
	{
		putchar(alphb);
		alphb--;
	}

	putchar('\n');
	return (0);
}
