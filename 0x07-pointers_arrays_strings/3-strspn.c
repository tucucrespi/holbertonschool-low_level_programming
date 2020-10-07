#include "holberton.h"
/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, a = 0, b;
for (; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
i++;
}
}
if (i == a)
{
return (i);
}
}
return (i);
}
