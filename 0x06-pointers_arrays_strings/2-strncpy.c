#include "main.h"
/**
* _strncpy - function that copies at most an input
* @dest: The buffer starting the string copy.
* @src: The source string.
* @n: The maximum numberr of bytes to copies from src.
* Return: A pointer to be resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
