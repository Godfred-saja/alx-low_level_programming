#include "main.h"
#include <stdio.h>

/**
* flip_bits - Function flip bits to convert one number to another number
* @n: first number to print
* @m: second number to convert to
* Return: Return number of bits that was needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int differ;
int count;

differ = n ^ m;
count = 0;

while (differ)
{
count++;
differ &= (differ - 1);
}

return (count);
}
