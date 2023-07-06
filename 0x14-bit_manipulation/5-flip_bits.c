#include "main.h"
#include <stdio.h>

/**
* flip_bits - flips bits to convert one number to another number
* @n: first numbers
* @m: second numbers to convert to
* Return: number of bits that was needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diffs;
int counters;

diffs = n ^ m;
counters = 0;

while (diffs)
{
counters++;
diffs &= (diffs - 1);
}

return (counters);
}
