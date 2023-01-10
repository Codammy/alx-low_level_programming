#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies 2 numers.
 *
 * @argc: number of argument passed.
 * @argv: This is anarray of pointers, stores arguments passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i;
	int j;

	if (argc < 2)
	{
		putchar(0 + '0');
		putchar('\n');
	} else
	{
	for (i = 1; i <= argc; i++)
	{
	j = atoi(argv[i]);	
	if (!(isdigit(j)))
	{
		puts("Error");
		return (1);
	}
	res += j;
}
	printf("%d", res);
	putchar('\n');
	}
	return (0);
}
