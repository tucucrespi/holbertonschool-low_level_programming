#include "lists.h"
/**
 * print_listint - singly linked list
 * @h: integer
 *
 * Description: singly linked list node structure
 * Return: Holberton project
 */
size_t print_listint(const listint_t *h)
{
int i;
for (i = 0; h != NULL; i++)
{
printf("%i\n", h->n);
h = h->next;
}
return (i);
}
