#include "lists.h"

/**
 * free_listint2 - print the last node.
 * @head: the inital pointer to the linked list
 * Return: the new node
 */
void free_listint2(listint_t **head)
{
listint_t *aux;

if (!head)
return;
while (*head)
aux = *head, *head = (*head)->next, free(aux);
}
