#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* main - multiplies two positive numbers
* @argc: n arguments function
* @argv: args function
* Return: int
**/

int main(int argc, char *argv[])
{
unsigned long mul;
int i, p;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (i = 1; i < argc; i++)
{
for (p = 0; argv[i][p] != '\0'; p++)
{
if (argv[i][p] > 57 || argv[i][p] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(argv[1]) * atol(argv[2]);
printf("%lu\n", mul);
return (0);
}
