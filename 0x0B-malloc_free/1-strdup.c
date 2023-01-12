#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: points to a string.
 *
 * Return: NULL or str..
 */
char *_strdup(char *str)
{
	char *s;
	int l;

	if (str == NULL)
		return (NULL);

	l = strlen(str) - 1;
	s = (char *) malloc((sizeof(char) + 1) * l);
	s = strdup(str);
	return (s);
}
