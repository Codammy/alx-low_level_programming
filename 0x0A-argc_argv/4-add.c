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

	if (argc < 2) /* checks if arguments is passed after program name */
	{
		putchar(0 + '0');
		putchar('\n');
	} else /* if arguments is passed */
	{
	for (i = 1; i < argc; i++) /* iterates the argument */
	{
	char *S = argv[i];
	int len = strlen(S) - 1;

	for (k = 0; k < len; k++) /* iterates the argument string value */
	{
	char *p = S;

	S++;
	j = atoi(p); /* converts argument string value to a number */
	if (j == 0) /* checks if string value is not a number */
	{
		puts("Error");
		return (1); /* prints error and return 1. */
	}
	}
	l = atoi(argv[i]); /* converts arguments to number */
	if (l == 0) /* checks if argument is not a number */
	{
		puts("Error");
		return (1);
	}
	res += l; /* sums up number */
}
	printf("%d\n", res); /* prints sumed result */
	}
	return (0);	/* End of Program */
}
