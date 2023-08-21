#include "main.h"
/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
int cn;

while (*s)
{
for (cn = 0; accept[cn]; cn++)
{
if (*s == accept[cn])
return (s);
}
s++;
}

return ('\0');
}
