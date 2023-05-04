#include "main.h"
#include <stdio.h>

/**
* print_binary - Function that print binary representation of a number
* @n: decimal number to print as binary
*/
void print_binary(unsigned long int n)
{
unsigned long int tmp;
int sh;

if (n == 0)
{
printf("0");
return;
}

for (tmp = n, sh = 0; (tmp >>= 1) > 0; sh++)
;

for (; sh >= 0; sh--)
{
if ((n >> sh) & 1)
printf("1");
else
printf("0");
}
}
