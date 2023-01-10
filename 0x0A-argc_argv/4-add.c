#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - sum up the value of arguments passed if its an integer
 * and greater than 1.
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
	int k;
	int l;

	if (argc < 2)
	{
		putchar(0 + '0');
		putchar('\n');
	} else
	{
	for (i = 1; i < argc; i++)
	{
	char *S = argv[i];
	int len = strlen(S) - 1;
	for (k = 0; k < len; k++)
	{
	char *p = S;
	S ++;
	j = atoi(p);
	if (j == 0)
	{
		puts("Error");
		return (1);
	}
	}
	l = atoi(argv[i]);
	if (l == 0)
	{
		puts("Error");
		return (1);
	}
	res += l;
}
	printf("%d\n", res);
	}
	return (0);
}
