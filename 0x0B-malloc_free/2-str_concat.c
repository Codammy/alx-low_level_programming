#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  concatenates two strings.
 *
 * @s1: start
 * @s2: end
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *compsent;
	int len1 = strlen(s1), len2 = strlen(s2) + 1, i, j = 0;
	int len = len1 + len2;

	compsent = malloc(sizeof(char) * len);
	if (!compsent)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < len1)
			compsent[i] = s1[i];
		else
			compsent[i] = s2[j++];
	}

	return (compsent);
}
