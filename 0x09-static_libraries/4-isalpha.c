#include "main.h"
/**
* _isalpha - function that checks for alphabetic character
*
* @c: print parameter for both lower and upper case
*
* Return: 1 if c is a letter, lowercase or uppercase
* and 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
