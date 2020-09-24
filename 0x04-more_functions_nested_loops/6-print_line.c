#include "holberton.h"

/**
 * print_line - print the sum of two integer.
 * print numbers 0 to 9
 * @n print _ 
 * Return: result int.
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar ('_');
}
}
_putchar ('\n');
}
