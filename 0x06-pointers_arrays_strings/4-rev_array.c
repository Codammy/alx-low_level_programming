#include <stdio.h>
/**
 * reverse_array - prints the reverse of an aray to stdo
 * @a: points to array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	n -= 1;
	while (n >= 0)
	{
		printf("%d", a[n]);
		if (n != 0)
			printf(", ");
		n--;
	}
	putchar('\n');
}
