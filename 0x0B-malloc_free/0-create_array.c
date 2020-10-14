#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
int i
	char *parray;
if (size != 0)
{
	parray = (char *)malloc(sizeof(char) * size);
