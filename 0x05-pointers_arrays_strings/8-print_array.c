#include <stdio.h>

/**
 * print_array - prints numbers to stdo
 * @a: pointer
 * @n: pointer
 * Return: null
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i <= n - 1 ; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
