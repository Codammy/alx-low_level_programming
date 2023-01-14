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
	int i, j, len1, len2, lenlen;
	char *ptr;
	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	len1 = strlen(s1);
	len2 = strlen(s2);
	lenlen = len1 + len2;
	j = 0;
	ptr = (char *) malloc((lenlen + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len1 - 1; i++)
		ptr[i] = s1[i];
	for (i = len1; i <= lenlen - 1; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[lenlen + 1] = '\0';

	return (ptr);
}
