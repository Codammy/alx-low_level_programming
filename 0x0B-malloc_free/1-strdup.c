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
/*	int len;*/
	char *s;
/*	int l;*/

	if (str == NULL)
		return (NULL);
/**
 * len = sizeof(str);
 *	l = strlen(str);
 *	printf("%d\n", len);
 *	printf("%d\n", l);
*/
	s = (char *) malloc(4109);

	s = strdup(str);

	return (s);
}
