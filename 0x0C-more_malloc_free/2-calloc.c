#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: nmemb
 * @size: size
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *s;
unsigned int i;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
s = malloc(size * nmemb);

if (s == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
s[i] = 0;
}
return (s);
}
