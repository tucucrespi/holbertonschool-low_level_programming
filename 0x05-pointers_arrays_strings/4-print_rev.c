#include "holberton.h"

/**
 * print_rev - returns a string rev.
 * @s: s is words
 * Return: quantiti is i
 */

void print_rev(char *s)
{
int count;
char letter;

for (count = 0; s[count] != '\0'; count++)
{
}
for (count = count - 1; count >= 0 ; count--)
{
letter = s[count];
_putchar(letter);
}
_putchar('\n');
}
