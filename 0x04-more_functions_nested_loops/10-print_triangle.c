#include "main.h"

/**
 * print_triangle - check the code.
 *@size: param or size of thr shape.
 * Return: null.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
_putchar(' ');
for (k = 0; k < i; k++)
_putchar('#');
_putchar('\n');
}
}
}
