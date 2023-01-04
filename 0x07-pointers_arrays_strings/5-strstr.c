#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 *
 * @heystack: pointer.
 * @needle: pointer.
 *
 * Return: (heystack);
 */
char *_strstr(char *heystack, char *needle)
{
	char *rest = strpbrk(heystack, needle);

	return (rest);
}
