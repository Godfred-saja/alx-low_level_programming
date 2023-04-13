#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: input function
* @max: input function
* Return: 0 (success)
*/
int *array_range(int min, int max)
{
int i, l;
int *b;

if (min > max)
return (NULL);
l = max - min + 1;
b = malloc(sizeof(int) * l);
if (b == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
b[i] = min;
}
return (b);
}
