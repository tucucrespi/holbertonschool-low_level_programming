#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: integer
 *  *
 * Description: singly linked list node structure
 * Return: Holberton project
 */
size_t listint_len(const listint_t *h)
{
unsigned int contador = 0;

if (!h)
return (0);
while (h)
{
h = h->next;
contador++;
}
return (contador);
}
