#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatinates two strings and assign to a new memory
 *
 * @s1: desc.
 * @s2: src.
 * Return: ptr.
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int lenlen;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	lenlen = len1 + len2;
	ptr = (char *) malloc(sizeof(char) * lenlen);
	if (ptr == NULL)
		return (NULL);
	strcat(s1, s2);
	ptr = s1;

	return (ptr);
}
