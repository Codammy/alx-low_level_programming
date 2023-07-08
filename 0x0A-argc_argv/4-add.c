#include <stdio.h>
#include <string.h>
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
	int sum = 0, tmp = 1;
	unsigned int i;

	while (tmp < argc)
	{
	i = 0;
	while (i < strlen(argv[tmp]))
	{
		if (isalpha(argv[tmp][i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	tmp++;
	}
	while (argc != 1)
	{
		tmp = atoi(argv[argc - 1]);
		if (tmp)
			sum += tmp;
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
