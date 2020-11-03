#include "lists.h"

/**
 * add_nodeint - singly linked list
 * @head: integer
 * @n: integer
 * Return: Holberton project
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
if (!head)
return (NULL);

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
