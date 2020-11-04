#include "lists.h"
/**
 * get_nodeint_at_index - print the last node.
 * @head: the inital pointer to the linked list
 * @index: integer
 * Return: the new node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp = head;

if (tmp == NULL)
return (NULL);

while (i < index)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
i++;
}
return (tmp);
}
