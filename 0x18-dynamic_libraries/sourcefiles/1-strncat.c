#include <string.h>

/**
 * _strncat  - concatinates n character pointer to another.
 * @n: number of character.
 * @dest: f pointer
 * @src: s pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
