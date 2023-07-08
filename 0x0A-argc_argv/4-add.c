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
	int sum = 0, tmp, i;

	while (argc != 1)
	{
		i = 0;
		while (i < strlen(argv[argc - 1]))
		{
			if (isalpha(*argv[argc - 1] + i))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		tmp = atoi(argv[argc - 1]);
		if (tmp)
			sum += tmp;
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
