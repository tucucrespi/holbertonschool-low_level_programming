#include "dog.h"
#include <stdio.h>

/**
 * free_dog - return name of the file asdasgassgasg
 * @d :asfgasgdshd
 *
 * Return: return always 0
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
