#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - sog
 * @array: name of dog
 * @size: age of dog
 * @action: owner of dog
 * Return: return always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL)
return;
if (size == 0)
return;
if (action == NULL)
return;
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
