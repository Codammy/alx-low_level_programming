#include "main.h"
#include <string.h>

/**
 * cap_string - this uses our strupr to transform sring to uppercase
 * Return: capt
 * @capt: pointer to string
 */
char *cap_string(char *capt)
{
{
int slength = strlen(capt);
/*char c[slength - 1];*/
int i;

for (i = 0; i <= slength; i++)
{
if (capt[0] >= 97)
{
capt[i] = capt[i] - 32;
}
if ((capt[i] == ' ') || (capt[i] == '\n') || (capt[i] == '\t') || (capt[i] == ',') || (capt[i] == ';') || (capt[i] == '.') || (capt[i] == '!') || (capt[i] == '?') || (capt[i] == '"') || (capt[i] == '(') || (capt[i] == ')') || (capt[i] == '{') || (capt[i] == '}'))
{
i++;
if (capt[i] >= 97)
        capt[i] = capt[i] - 32;
else
        capt[i] = capt[i];
}
}
return (capt);
}
}
