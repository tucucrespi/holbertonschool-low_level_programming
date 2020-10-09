#include "holberton.h"
/**
 * find_prime - prints buffer in hexa
 * @x: the address of memory to print
 * @y: the address of memory to print
 * Return: Nothing.
 */
int find_prime(int x, int y)
{
if (x < 2)
return (0);
if (y * y > x)
return (1);
if (x % y == 0)
return (0);
else
return (find_prime(x, y + 1));
}
/**
 * is_prime_number - Entry point
 * @n: int
 * Return: prime (Success)
 */

int is_prime_number(int n)
{
return (find_prime(n, 2));
}
