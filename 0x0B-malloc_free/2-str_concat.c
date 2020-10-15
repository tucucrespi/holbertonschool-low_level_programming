#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - contains copy of a string
 * @s1: character
 * @s2: character
 * Return: NULL if string is null
 */

char *str_concat(char *s1, char *s2)
{
int a, b, c, d;
char *p;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (a = 0; s1[a] != '\0'; a++)
{
}
for (b = 0; s2[b] != '\0'; b++)
{
}
p = malloc((a + b) * sizeof(char) + 1);
if (p == NULL)
{
return (0);

}
for (c = 0; s1[c] != '\0'; c++)
{
p[c] = s1[c];
}
for (d = 0; s2[d] != '\0'; d++)
{
p[c + d] = s2[d];
}
return (p);
}
