#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: pointer copy from ..
 * @dest: pointer copy to..
 * Return: dest(pointer copying to).
 */
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
return (dest);
}
