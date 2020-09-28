#include <stdio.h>

/**
 * print_rev - returns a string rev.
 * @s : s is words
 * Return: quantiti is i
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; --i)
{
_putchar(s[i]);
}
_putchar ('\n');
}
