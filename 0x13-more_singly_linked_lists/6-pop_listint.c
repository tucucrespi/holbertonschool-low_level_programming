#include "lists.h"
/**
 * pop_listint - print the last node.
 * @head: the inital pointer to the linked list
 * Return: the new node
 */
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *aux;

if (!(*head))
return (0);

n = (*head)->n;
aux = *head;
*head = (*head)->next;
free(aux);
return (n);
}
