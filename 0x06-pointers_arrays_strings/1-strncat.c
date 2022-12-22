#include <string.h>

/**
 * _strcat  - concatinates n character pointer to another.
 * @dest: f pointer
 * @src: s pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
