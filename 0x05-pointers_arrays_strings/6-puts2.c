#include "holberton.h"
/**
 * puts2 - returns a string rev.
 * @str: s is words
 * Return: quantiti is i
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
