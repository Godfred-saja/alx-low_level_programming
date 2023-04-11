#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - function that returns a pointer to a 2 dimensional array
* @width: width of the matrix
* @height: height of the matrix
*
* Return: pointer to the created matrix (Success)
* or NULL (Error)
*/
int **alloc_grid(int width, int height)
{
int **ar;
int i, k;

if (height <= 0 || width <= 0)
return (NULL);

ar = (int **) malloc(sizeof(int *) * height);

if (ar == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
ar[i] = (int *) malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
free(ar);
for (k = 0; k <= i; k++)
free(ar[k]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (k = 0; k < width; k++)
{
ar[i][k] = 0;
}
}
return (ar);
}
