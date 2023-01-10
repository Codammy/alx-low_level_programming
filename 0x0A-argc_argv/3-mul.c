#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numers.
 *
 * @argc: number of argument passed.
 * @argv: This is anarray of pointers, stores arguments passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;;

	printf("%d\n", res);
	return (0);
}
