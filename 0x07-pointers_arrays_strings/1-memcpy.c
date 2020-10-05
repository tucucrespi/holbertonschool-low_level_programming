#include "holberton.h"
/**
 * char *_memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: int unsigned
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	dest[i] = src[i];

return (dest);
}
