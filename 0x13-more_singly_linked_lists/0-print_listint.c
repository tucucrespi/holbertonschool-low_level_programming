#include "lists.h"
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
size_t print_listint(const listint_t *h)
{
	int i;
	for(i = 0; h != NULL; i++)
	{
		printf("%i\n", h-> n);
		h= h->next;
	}
	return(i);
}
