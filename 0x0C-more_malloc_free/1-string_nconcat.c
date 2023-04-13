#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that allocates memory using malloc.
* @s1: input function
* @s2: input function
* @n: number of bytes from s2 to concatenate to s1
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, p, k;
char *s;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
p = 0;
else
{
for (p = 0; s2[p]; p++)
;
}
if (p > n)
p = n;
s = malloc(sizeof(char) * (i + p + 1));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < p; k++)
s[k + i] = s2[k];
s[i + p] = '\0';
return (s);
}
