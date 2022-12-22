#include <string.h>

/**
 * _strcat  - concatinates n character pointer to another.
 * @dest: f pointer
 * @src: s pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
