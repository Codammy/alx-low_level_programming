#include <stdio.h>
#include "stack.h"

void display()
{
	int i;

	if (top == -1)
	{
		printf("STACK IS EMPTY,\t TRY ADDING NEW ELEMENT\n");
		exit(0);
	}
	for (i = 0; i <= top; i++)
		printf("%d  ", stack[i]);
	putchar('\n');
}
