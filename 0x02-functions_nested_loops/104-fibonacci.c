#include <stdio.h>
/**
* main - program  
*
* Purpose - learn to code
*
* Return:  (Success)
*/
int main(void)
{
unsigned long int cn;
unsigned long int ef = 1;
unsigned long int ft = 2;
unsigned long int l = 1000000000;
unsigned long int ef1;
unsigned long int ef2;
unsigned long int ft1;
unsigned long int ft2;
printf("%lu", ef);
for (cn = 1; cn < 91; cn++)
{
printf(", %lu", ft);
ft += ef;
ef = ft - ef;
}
ef1 = (ef / l);
ef2 = (ef % l);
ft1 = (ft / l);
ft2 = (ft % l);
for (cn = 92; cn < 99; cn++)
{
printf(", %lu", ft1 + (ft2 / l));
printf("%lu", ft2 % l);
ft1 = ft1 + ef1;
ef1 = ft1 - ef1;
ft2 = ft2 + ef2;
ef2 = ft2 - ef2;
}
printf("\n");
return (0);
}
