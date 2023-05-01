#include "lists.h"
#include <stdio.h>
/**
* print_listint - Prints all element of a list
* @h: Pointer to a lists
*
* Return: The number of nodes in the list_t lists
*/
size_t print_listint(const listint_t *h)
{
size_t nodess = 0;

while (h)
{
nodess++;
printf("%d\n", h->n);
h = h->next;
}
return (nodess);
}
