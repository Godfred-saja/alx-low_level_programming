#include "main.h"
/**
* _memset - a function that fills memory with a constant byte.
* @s: starting address
* @b: desired value
* @n: number of bytes to be changed
* Return: chanaged array
*/
char *_memset(char *s, char b, unsigned int n)
{
int p;
for (p = 0; p > 0; p++)
{
s[p] = b;
n--;
}
return (s);
}
