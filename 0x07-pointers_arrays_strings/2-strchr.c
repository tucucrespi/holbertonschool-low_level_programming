#include "holberton.h"
/**
 * *_strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
s = &s[i];
return (s);
}
}
return (0);
}
