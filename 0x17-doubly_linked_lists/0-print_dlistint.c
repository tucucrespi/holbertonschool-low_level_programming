#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the elements in the list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t counter = 0;

  if (!h)
    return (0);
  while (h != NULL)
    {
	printf("%i\n", h->n);
	h = h->next;
	counter++;
    }
  return (counter);
}
