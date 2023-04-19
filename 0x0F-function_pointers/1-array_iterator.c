#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - function given as a parameter
* @array: array to iterate over
* @size: size of the array
* @action: pointer to function used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int cn;

if (!array || !action)
return;

for (cn = 0; cn < size; cn++)
action(array[cn]);
}
