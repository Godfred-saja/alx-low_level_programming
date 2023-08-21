#include "main.h"
/**
* _memcpy - function that copies memory area.
* @dest: input
* @src: input
* @n: input
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i;

for (i = n; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
