#include "lists.h"

/**
* dlistint_len - returns the number of elements
*
* @h: head of the list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
int counts;

counts = 0;

if (h == NULL)
return (counts);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
counts++;
h = h->next;
}

return (counts);
}
