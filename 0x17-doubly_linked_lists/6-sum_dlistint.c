#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data
*
* @head: head of the lists
* Return: sum of the datas
*/
int sum_dlistint(dlistint_t *head)
{
int sum;

sum = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
}

return (sum);
}
