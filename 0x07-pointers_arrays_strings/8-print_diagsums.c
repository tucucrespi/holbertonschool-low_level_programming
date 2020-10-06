#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
int i = 0, sum = 0, siz;
siz = size + 1;
while (i <= (size * size))
{
sum = sum + a[i];
i = i + siz;
}
printf("%i, ", sum);
i = size - 1;
siz = siz - 2;
sum = 0;
while (i <= ((size * size) - siz))
{
sum = sum + a[i];
i = i + siz;
}
printf("%i\n", sum);
}
