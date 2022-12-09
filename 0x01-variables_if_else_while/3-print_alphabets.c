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
	int lower_c, capitalize;

	lower_c = 97;

	while (lower_c <= 122)
	{
		putchar(lower_c);
		lower_c++;
	}

	/* HIGHER CASE */
	capitalize = 65;

	while (capitalize <= 90)
	{
		putchar(capitalize);
		capitalize++;
	}
	putchar('\n');
	return (0);
}
