#include "holberton.h"
/**
 * _puts_recursion - prints buffer in hexa
 * @s: the address of memory to print
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
