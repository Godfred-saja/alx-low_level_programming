#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
int tan;
unsigned long fib1 = 0, fib2 = 1, sum;
for (tan = 0; tan < 50; tan++)
{
sum = fibo1 + fibo2;
printf("%lu", sum);
fibo1 = fibo2;
fibo2 = sum;
if (tan == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
