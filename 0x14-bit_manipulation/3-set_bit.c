#include "main.h"

/**
* set_bit - Function that sets value of a bit to 1 at a given index
* @n: decimal numbers passed by pointer
* @index: index position to change, starting from 0
* Return: 1 if it worked, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int pt;

if (index > 64)
return (-1);

for (pt = 1; index > 0; index--, pt *= 2)
;
*n += pt;

return (1);
}
