#include "lists.h"

/**
 * sum_dlistint - print all the elements in the list.
 * @head: the inital pointer to the linked list
 * Return: the number of nodes
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
