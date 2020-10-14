#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: int type
 * @c: Char type
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;

if (size == 0)
{
return (NULL);
}
a = malloc(sizeof(char) * size);

if (a == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
a[i] = c;
}
}
return (a);

}
