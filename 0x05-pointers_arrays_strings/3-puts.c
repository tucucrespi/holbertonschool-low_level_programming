#include "holberton.h"
#include <stdio.h>

/**
 * _puts - returns the length of a string.
 * @str : s is words
 * Return: quantiti is i
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar ('\n');
}
