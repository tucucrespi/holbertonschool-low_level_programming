#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
int n = 0;
char x;
while (n < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
n++;
}
}
