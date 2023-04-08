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
int i; c = 1;
if (argc != 3)
{
printf("%s\n", "Error");
}
else
{
for (i = 0; i < argc; i++)
{
c *= atoi(argv[i]);
}
printf("%s\n", c);
}
return (0);
}
