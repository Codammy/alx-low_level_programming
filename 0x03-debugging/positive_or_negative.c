#include "main.h"

/**
 * main - Entry point
 * printing the mode of a random int to stdo
 * 
 */
void positive_or_negative(int i)
{
	/* conditional statement */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
