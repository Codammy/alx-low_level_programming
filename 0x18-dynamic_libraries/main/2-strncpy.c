#include <string.h>

/**
 * _strncpy  - copies n character pointer to another.
 * @n: number of character.
 * @dest: f pointer
 * @src: s pointer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
