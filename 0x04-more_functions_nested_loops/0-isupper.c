#include "main.h"
/**
* _isupper -  function that checks for uppercase character
*
* @c: parameter to be printed
*
* Return: 1 if it is a uppercase 
* and 0 otherwise
*/
int _isupper(int c)
{
if (c >= 33 && c <= 126)
return (1);
else
return (0);
}
