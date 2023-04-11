#include "main.h"
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to newly allocated space in memory.
* @str: input function
* Return: 0 (Success)
*/
char *_strdup(char *str)
{
char *nstr;
unsigned int len, cn;

/* check if str is null */
if (str == NULL)
{
return (NULL);
}

len = 0;
while (str[len] != '\0')
{
len++;
}

nstr = malloc(sizeof(char) * (len + 1));

/*check if malloc was successful*/
if (nstr == NULL)
{
return (NULL);
}

for (cn = 0; cn < len; cn++)
{
nstr[cn] = str[cn];
}
nstr[len] = '\0';
return (nstr);
}
