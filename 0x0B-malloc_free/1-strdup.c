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
	int len;
	char *s;
/*	int l;*/

	len = 4109 / 2;
	if (str == NULL)
		return (NULL);

/* len = sizeof(str); */
/*	l = strlen(str); */
/*	printf("%d\n", len); */
/*	printf("%d\n", l); */
	s = (char *) malloc(len);

	s = strdup(str);

	return (s);
}
