#include "main.h"
/**
* prime_a - Main Entry
* @n: input
* @m: input
* Return: 0
*/
int prime_a(int n, int m)
{
if (n <= 1 || (n != m && n % m == 0))
{
return (0);
}
else if (n == m)
{
return (1);
}
return (prime_a(n, m + 1));
}

/**
* is_prime_number - Main Entry
* @n: input
* Return: 0
*/
int is_prime_number(int n)
{
return (prime_a(n, 2));
}
