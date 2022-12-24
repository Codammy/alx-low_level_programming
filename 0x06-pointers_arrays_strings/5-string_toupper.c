#include "main.h"
#include <string.h>

/**
 * string_toupper - this uses our strupr to transform sring to uppercase
 * Return: string_toupper
 * @conv: pointer
 */
char *string_toupper(char *conv)
{
int slength = strlen(conv);
int i;

for (i = 0; i < slength; i++)
{
if (conv[i] >= 97)
{
conv[i] = conv[i] - 32;
}
else
{
conv[i] = conv[i];
}
}
return (conv);
}
