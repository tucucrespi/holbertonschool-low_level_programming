#include "holberton.h"

/**
 * print_last_digit - write the character c to stdout
 * @num: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int num)
{
int lastDigit = num % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
_putchar('0' + lastDigit);
return (lastDigit);
}
