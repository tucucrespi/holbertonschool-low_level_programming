#include "holberton.h"
/**
 * get_bit - singly linked list
 * @n: integer
 * @index: integer
 * Return: Holberton project
 */

int get_bit(unsigned long int n, unsigned int index)
{

if (n == 0 && index > 0)
return (-1);
if (index > sizeof(unsigned long int) * 8)
return (-1);
if ((n >> index) & 1)
return (1);
else
return (0);
}
