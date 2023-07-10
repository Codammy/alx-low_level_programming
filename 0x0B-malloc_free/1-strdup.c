#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a new string which is a dup of another.
 *
 * @str: pointer to string
 * Return: new string or NULL
 */
char *_strdup(char *str)
{
	char *newstring;
	int len = strlen(str), i;

	newstring = malloc(len + 1);
	if (!newstring)
		return (NULL);
	for (i = 0; i < len; i++)
		newstring[i] = str[i];

	return (newstring);
}
