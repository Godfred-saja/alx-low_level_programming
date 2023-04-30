#include "lists.h"

/**
* listint_len - Function returns the number of elements
* @h: head of a list.
* Return: Function numbers of nodes.
*/
size_t listint_len(const listint_t *h)
{
size_t codes = 0;

while (h != NULL)
{
h = h->next;
codes++;
}
return (codes);
}
