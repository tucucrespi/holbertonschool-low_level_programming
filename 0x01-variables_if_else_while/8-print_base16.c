#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char p;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (p = 'a'; p <= 'f'; p++)
{
putchar (p);
}
putchar('\n');
return (0);
}
