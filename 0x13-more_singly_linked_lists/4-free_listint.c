#include "lists.h"
/**
 * free_listint - print the last node.
 * @head: the inital pointer to the linked list
 * Return: the new node
 */
void free_listint(listint_t *head)
{
listint_t *actual_node;
listint_t *next_node;

actual_node = head;

while (actual_node != NULL)
{
next_node = actual_node->next;
free(actual_node);
actual_node = next_node;
}
}
