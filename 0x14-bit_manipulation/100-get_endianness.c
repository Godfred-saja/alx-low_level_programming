#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int xn;
char *cm;

xn = 1;
cm = (char *) &xn;

return ((int)*cm);
}
