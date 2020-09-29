#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 *
 */
void puts_half(char *str)
{
int a, b;
char c;

for (a = 0; str[a] != 0; a++)
{
}
b = (a - 1) / 2;
for (a = b + 1; str[a] != 0; a++)
{
c = str[a];
_putchar(c);
}
_putchar('\n');
}
