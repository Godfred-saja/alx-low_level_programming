#include "main.h"
/**
* sqrt_a - Main Entry
* @n: input
* @m: input
* Return: 0
*/
int sqrt_a(int n, int m)
{
if (m * m == n)
{
return (m);
}
else if (m * m > n)
{
return (-1);
}
return (sqrt_a(n, m + 1));
}

/**
* _sqrt_recursion - Main Entry
* @n: input
* Return: 0
*/
int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
