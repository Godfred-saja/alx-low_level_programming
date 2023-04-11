#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates an array of chars, and initializes
* @size: input the funtion
* @c: input the function
* Return: 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int cn;

if (size == 0)
{
return (NULL);
}

ar = malloc(sizeof(char) * size);

if (ar == NULL)
{

return (NULL);
}

for (cn = 0; cn < size; cn++)
{
ar[cn] = c;
}

return (ar);
}
