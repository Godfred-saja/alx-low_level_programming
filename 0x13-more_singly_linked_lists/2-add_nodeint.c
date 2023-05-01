#include "lists.h"

/**
* add_nodeint - Function that add a new node at the beginning
* @head: head of a list.
* @n: n element.
* Return: Return address of the new element. NUll if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *news;

news = malloc(sizeof(listint_t));

if (news == NULL)
return (NULL);

news->n = n;
news->next = *head;
*head = news;

return (*head);
}
