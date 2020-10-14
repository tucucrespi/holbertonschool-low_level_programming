#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - contains copy of a string
 * @str: character
 * Return: NULL if string is null
 */

char *_strdup(char *str)
{
char *s;
int i, c;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
s = malloc(i * sizeof(*s) + 1);
if (s == NULL)
{
return (NULL);
}
for (c = 0; c < i; c++)
{
s[c] = str[c];
}
return (s);
}
