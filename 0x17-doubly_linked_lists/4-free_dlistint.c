#include "lists.h"

/**
 * free_dlistint - print all the elements in the list.
 * @head: the inital pointer to the linked list
 * Return: the number of nodes
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head;
free(temp);
head = head->next;
}
}
