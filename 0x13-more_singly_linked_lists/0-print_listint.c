#include "lists.h"

/**
* print_listint - Function that prints all the elements of a list.
* @h: head of a list.
* Return: Return numbers of codes.
*/
size_t print_listint(const listint_t *h)
{
size_t codes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
codes++;
}
return (codes);
}
