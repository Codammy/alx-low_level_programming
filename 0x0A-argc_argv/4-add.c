#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers together
 *
 * @argc: num args
 * @argv: args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0, tmp;

	while (argc != 1)
	{
		tmp = atoi(argv[argc - 1]);
		if (tmp)
			sum += tmp;
		else
		{
			printf("Error\n");
			return (1);
		}
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
