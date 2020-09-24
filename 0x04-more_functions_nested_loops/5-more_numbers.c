#include "holberton.h"

/**
 * more_numbers - print the sum of two integer.
 * print numbers 0 to 9
 *
 * Return: result int.
 */
void more_numbers(void)
{
char x;
char p;

for (x = 0 ; x <= 9; x++)
{
for (p = 0; p <= 14; p++)
{
if (p > 9)
{
_putchar (p / 10 + '0');
}
_putchar (p % 10 + '0');
}
_putchar ('\n');
}
}
