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
dlistint_t *new_node;
dlistint_t *current;
unsigned int count;


current = (*h);
count = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

new_node->prev = current->prev;
current->prev = new_node;
new_node->next = current;

if (new_node->prev != NULL)
{
new_node->prev->next = new_node;
}
else
(*h) = new_node;

while (current)
{
if (count == idx)
return (current);
count++;
current = current->next;

}
return (NULL);
}
