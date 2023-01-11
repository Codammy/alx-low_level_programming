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
	int len = strlen(str);
	char *s = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);
	s = strdup(str);

	return (s);
}
