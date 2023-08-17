#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
*
* @head: head of the lists
* Return: no returns
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmps;

if (head != NULL)
while (head->prev != NULL)
head = head->prev;

while ((tmps = head) != NULL)
{
head = head->next;
free(tmps);
}
}
