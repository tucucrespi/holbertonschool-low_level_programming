#include "holberton.h"
/**
 * _isupper - check if c is lowercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
