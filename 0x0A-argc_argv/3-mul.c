#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers.
* @argc: input of argument count
* @argv: input og argument value
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, res = 1;
if (argc != 3)
{
printf("%s\n", "Error");
}
else
{
for (i = 0; i < argc; i++)
{
res *= atoi(argv[i]);
}
printf("%d\n", res);
}
return (0);
}
