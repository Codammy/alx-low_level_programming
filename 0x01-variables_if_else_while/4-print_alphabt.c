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
	int lower_c, val_for_q = 101;

	lower_c = 97;

	while (lower_c <= 122)
	{
		if (lower_c == val_for_q)
		{
			lower_c++;
			val_for_q += 12;

			continue;
		}
		putchar(lower_c);
		lower_c++;
	}
	putchar('\n');
	return (0);
}
