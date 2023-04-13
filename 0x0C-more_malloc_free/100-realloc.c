#include "main.h"
#include <stdlib.h>

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer to the memory previsouly allocated by malloc
* @old_size: size of the allocated memory for ptr
* @new_size: new size of the new memory block
* Return: 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pt;
unsigned int i, max = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
pt = malloc(new_size);
return (pt);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

pt = malloc(new_size);
if (pt == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
pt[i] = oldp[i];
free(ptr);
return (pt);
}
