#include "holberton.h"
/**
 * *_strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
{
s++;
}
if (*s == c)
{
return (s);
}
else
return (0);
}
