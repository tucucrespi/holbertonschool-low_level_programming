#include "holberton.h"

/**
 * print_numbers - print the sum of two integer.
 * print numbers 0 to 9
 *
 * Return: result int.
 */
void print_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
_putchar (x);
}
_putchar ('\n');
}
