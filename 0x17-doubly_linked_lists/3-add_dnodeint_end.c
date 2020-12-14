#include "lists.h"

/**
 * add_dnodeint_end - print all the elements in the list.
 * @head: the inital pointer to the linked list
 * @n: abcabcabc
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
last = (*head);
new_node->next = NULL;

if (*head == NULL)
{
(*head) = NULL;
(*head) = new_node;
return (new_node);
}

while (last->next != NULL)
last = last->next;
last->next = new_node;
new_node->prev = last;

return (new_node);
}
