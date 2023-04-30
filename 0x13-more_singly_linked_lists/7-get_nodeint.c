#include "lists.h"

/**
* get_nodeint_at_index - Function that returns the node at a certain index
* @head: first node in the linked list
* @index: index of the node to return
* Return: Return pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int cn = 0;
listint_t *temp = head;

while (temp && cn < index)
{
temp = temp->next;
cn++;
}

return (temp ? temp : NULL);
}
