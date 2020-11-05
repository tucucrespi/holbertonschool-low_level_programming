#include "holberton.h"
/**
 * print_binary - singly linked list
 * @n: integer
 * Return: Holberton project
 */

void print_binary(unsigned long int n)
{
if (n >> 1)
print_binary(n >> 1);
_putchar(n & 1 ? '1' : '0');
}
