#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
for (i=0 ; i<=9 ; i++)  
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
