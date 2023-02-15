#include  "main.h"

/**
 * string_nconcat - concats two strings
 *
 * @s1: first string.
 * @s2: second string.
 * Return: 0*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newS, *appendS;
	int len, lenn;

	if ((s1 == NULL) && (s2 == NULL))
		return(NULL);

	len = strlen(s1);
	lenn = strlen(s2);
	appendS = malloc((len + lenn + 1) * sizeof(char));
	if (appendS == NULL)
		return (NULL);

	strcpy(appendS, s1);
	newS = strncat(appendS, s2, n);
	if (newS == NULL)
		return(NULL);

	return(newS);
}
