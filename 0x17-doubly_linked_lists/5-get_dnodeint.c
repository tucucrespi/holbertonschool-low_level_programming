#include "lists.h"

/**
 * get_dnodeint_at_index - print all the elements in the list.
 * @head: the inital pointer to the linked list
 * @index: abcabcabc
 * Return: the number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
