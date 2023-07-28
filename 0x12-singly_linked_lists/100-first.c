#include <stdio.h>

/**
 * run_first - function that prints before the main func is executed.
 */
void __attribute__((constructor)) run_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
