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

	if (str == NULL)
		return (NULL);
	len = strlen(str) - 1;
	s = (char *) malloc(len * sizeof(char));

	s = strdup(str);

	return (s);
}
