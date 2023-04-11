#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - dimensional grid previously created by your alloc_grid function.
* @grid: input function
* @height: input function
*/
void free_grid(int **grid, int height)
{
int i;

if (grid != NULL || height != 0)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}
