#include <stdio.h>
#include "stack.h"
void push()
{
	int item;

	if (top == maxItem - 1)
		printf("STACK OVERFLOW\n");
	else
	{
		top++;
		printf("Input item ... ");
		scanf("%d", &item);
		stack[top] = item;
	}
}
