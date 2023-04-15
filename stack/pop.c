#include <stdio.h>
#include "stack.h"
void pop()
{
	int item;

	if (top == -1)
		printf("STACK UNDERFLOW\n");
	else
	{
		item = stack[top];
		printf("Item %d removed form stack\n", stack[top]);
		top--;
	}
	return;
}
