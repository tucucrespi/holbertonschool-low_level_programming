#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: unsigned int type
 * Return: pointer
 */


void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);
return (p);
}
