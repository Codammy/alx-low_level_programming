#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * printing ascii alphabets to stdo
 * Return: (0)
 */
int main(void)
{
	/* lower case */
	int lower_c = 97;

	while (lower_c <= 122)
	{
		putchar(lower_c);
		lower_c++;
	}

	/* HIGHER CASE */
	int higher_c = 65;

	while (higher_c <= 90)
	{
		putchar(higher_c);
		higher_c++;
	}
	putchar('\n');
	return (0);
}
