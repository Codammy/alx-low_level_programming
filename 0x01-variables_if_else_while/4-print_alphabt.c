#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * printing ascii alphabets to stdo except q and e
 * Return: (0)
 */
int main(void)
{
	/* lower case */
	int lower_c;

	lower_c = 97;

	while (lower_c <= 122)
	{
		putchar(lower_c);
		if (lower_c == 100)
			break;
		lower_c++;
	}

	lower_c = 102;

	while (lower_c <= 122)
	{
		putchar(lower_c);
		if (lower_c == 112)
			break;
		lower_c++;
		}

	lower_c = 114;

	while (lower_c <= 122)
	{
		putchar(lower_c);
		lower_c++;
	}
	putchar('\n');
	return (0);
}
