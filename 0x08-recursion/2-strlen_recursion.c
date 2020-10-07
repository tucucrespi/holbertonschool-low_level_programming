#include "holberton.h"
/**
 * _strlen_recursion - prints buffer in hexa
 * @s: the address of memory to print
 * Return: Nothing.
 */

int _strlen_recursion(char *s)
{
int n = 0;

if (*s == '\0')
return (0);

else
{
n = _strlen_recursion(s + 1);
n++;
}
return (n);
}
