#include "lists.h"

/**
 * insert_dnodeint_at_index - print all the elements in the list.
 * @h: the inital pointer to the linked list
 * @n: abcabcabc
 * @idx: abcdabcd
 * Return: the number of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *aux, *new_node;

if (!h)
return (NULL);
if (idx > dlistint_len(*h))
return (NULL);
if (idx == 0 || *h == NULL)
return (add_dnodeint(h, n));
if (idx == dlistint_len(*h))
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
aux = *h;
while (i++ < idx - 1)
aux = aux->next;
aux->next->prev = new_node;
new_node->next = aux->next;
aux->next = new_node;
new_node->n = n;
new_node->prev = aux;
return (new_node);
}

/**
 * dlistint_len - print all the elements in the list.
 * @h: abcabcabc
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

for (; h; count++)
{
h = h->next;
}
return (count);
}
