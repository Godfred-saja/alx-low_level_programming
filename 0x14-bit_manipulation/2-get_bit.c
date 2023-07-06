#include "main.h"
#include <stdio.h>
/**
* get_bit - Function get the value of a bit at a given index
* @n: number to evaluate
* @index: index starting from 0, of the bit we want to get
* Return: Value of bit at index, or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int holds;

if (index > 64)
return (-1);

holds = n >> index;

return (holds & 1);
}
