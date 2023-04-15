#include <stdio.h>
#include "stack.h"
/**
 * main - differnt implementation of stack operations using arrays.
 *
 * Return: 0.
 */
int stack[10];
int top = -1;
int maxItem = 10;
int main()
{
	char op;

	printf("\n********************* STACK IMPLEMNTATION *********************\n\n");

	while (1)
	{
		printf("CHOOSE OPERATION\n 1. PUSH\n 2. POP\n 3. DISPLAY\n 4. EXIT\n ... ");

		op = getchar();
		switch (op)
		{
			case '1':
				push();
				break;
			case '2':
				pop();
				break;
			case '3':
				display();
				break;
			case '4':
				exit(0);
			/**default: 
				printf("wrong selection\n");
				break;**/
		}
		if (top == MAXSIZE - 1)
		{
				printf("STACK FILLED\n\n");
				exit(0);
		}
	}
}
