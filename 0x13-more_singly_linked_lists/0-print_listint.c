#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a linked list
* @h: linked list of type listint_t to print
*
* Return: number of codes
*/
size_t print_listint(const listint_t *h)
{
size_t codes = 0;

while (h)
{
codes++;
printf("%d\n", h->n);
h = h->next;
}
return (codes);
}
