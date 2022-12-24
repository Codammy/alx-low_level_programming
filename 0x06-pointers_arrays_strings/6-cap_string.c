#include "main.h"
#include <string.h>

/**
 * cap_string - this uses our strupr to transform sring to uppercase
 * Return: capt
 * @capt: pointer to string
 */
char *cap_string(char *capt)
{
int slength = strlen(capt);
int i;

for (i = 0; i < slength; i++)
{
if (capt[i] >= 97)
	capt[i] = capt[i] - 32;
if (capt[i] == ' ')
{
	i++;
capt[i] = capt[i] - 32;
}
}
return (capt);
}
