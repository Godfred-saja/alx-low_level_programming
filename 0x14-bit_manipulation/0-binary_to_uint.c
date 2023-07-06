#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - Function that convert a binary number to an unsigned int
* @b: char string
* Return: converted decimal number or 0 if there is an unconvertable char
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int tot, pow;
int lem;

if (b == NULL)
return (0);

for (lem = 0; b[lem]; lem++)
{
if (b[lem] != '0' && b[lem] != '1')
return (0);
}

for (pow = 1, tot = 0, lem--; lem >= 0; lem--, pow *= 2)
{
if (b[lem] == '1')
tot += pow;
}

return (tot);
}
