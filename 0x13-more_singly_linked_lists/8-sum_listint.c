#include "lists.h"
/**
 * sum_listint - print the last node.
 * @head: the inital pointer to the linked list
 * Return: the new node
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp = head;

if (tmp == NULL)
return (0);

while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
