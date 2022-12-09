#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * printing the mode of a random int to stdo
 * Return: (0)
 */
int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	printf("Last digit of %d is", n);
	/* conditional statement */
	if (ln > 5)
		printf(" %d and is greater than 5\n", ln);
	if (ln == 0)
		printf(" %d and is 0\n", ln);
	if ((ln < 6) && (ln != 0))
		printf(" %d and is less than 6 and not 0\n", ln);
	return (0);
}
