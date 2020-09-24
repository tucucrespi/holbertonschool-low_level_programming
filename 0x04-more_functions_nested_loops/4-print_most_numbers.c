#include "holberton.h"
/**
 * print_most_numbers - print numbers 0 to 9 exept 2 and 4
 * The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
if (x != '2' && x != '4')
_putchar (x);
}
_putchar ('\n');
}
