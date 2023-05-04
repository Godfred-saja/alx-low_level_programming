#include "main.h"

/**
* set_bit - Function that sets the value
* @n: pointer of an unsigned long int.
* @index: index of the bit.
* Return: Return 1 if it worked, -1 if it didn't.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mn;

if (index > 63)
return (-1);

mn = 1 << index;
*n = (*n | mn);

return (1);
}
