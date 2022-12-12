#include <stdio.h>

/** main - A program  that prints all possible combinations
 * of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 7)
	{
		int j = i + 1;

		while (j <= 8)
		{
			int k = j + 1;

			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((j == 8) && (k == 9) && (i == 7))
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
