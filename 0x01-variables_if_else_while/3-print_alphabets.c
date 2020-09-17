#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
char p;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (p = 'A'; p <= 'z'; p++)
{
putchar(p);
}
putchar('\n');
return (0);
}
