#include "lists.h"

/**
* pop_listint - Function that deletes the head node of a linked list
* @head: head of a list.
* Return: Return head node's data.
*/
int pop_listint(listint_t **head)
{
int codes;
listint_t *h;
listint_t *curr;

if (*head == NULL)
return (0);

curr = *head;

codes = curr->n;

h = curr->next;

free(curr);

*head = h;

return (codes);
}
