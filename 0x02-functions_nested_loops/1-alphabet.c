#include<stdio.h>
/**
*print_alphate - function that prints alphate in lowercase
*
* Return - Always 0
*/
void print_alphabet(void);
{
char ch;
for(ch='a'; ch<='z'; ch++)
{
putchar(ch);
}
printf("\n");
return (0);
}
