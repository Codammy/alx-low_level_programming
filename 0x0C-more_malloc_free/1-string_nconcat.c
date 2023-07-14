#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: first
 * @s2: last
 * @n: number of bytes
 * Return: NULL or pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len1, len, i = 0, j = 0;

	if (s1 == NULL)
		return (NULL);
	else if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len = len1 + n;
	str = calloc(sizeof(int), len);
	if (!str)
		return (NULL);

	while (i < len)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[j++];
		i++;
	}

	return (str);
}
