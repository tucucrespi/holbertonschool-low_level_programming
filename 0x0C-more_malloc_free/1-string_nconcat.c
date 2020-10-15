#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concanate strings.
 * @s1: character
 * @s2: character
 * @n: n
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, a, x, y;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (a = 0; s2[a] != '\0' && a < n; a++)
{
}
p = malloc(sizeof(char) * (i + a) + 1);
if (p == NULL)
{
return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
{
p[x] = s1[x];
}
for (y = 0; s2[y] != '\0' && y < n; y++)
{
p[x + y] = s2[y];
}
p[x + y] = '\0';
return (p);
}
