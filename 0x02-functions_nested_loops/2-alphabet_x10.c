#include "holberton.h"

/**
 * print_alphabet_x10
 *
 * print int
 */
void print_alphabet_x10(void)

{
int i;
for (i = 0 ; i <= 9 ; i++)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
