#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints its own opcodes
* @argc: number of argument to print
* @argv: array of argument to print
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int bytes, cn;
char *arr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = (char *)main;

for (cn = 0; cn < bytes; cn++)
{
if (cn == bytes - 1)
{
printf("%02hhx\n", arr[cn]);
break;
}
printf("%02hhx ", arr[cn]);
}
return (0);
}
