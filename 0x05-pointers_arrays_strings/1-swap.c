#include "holberton.h"

/**
 *swap_int - change value of two numbers
 *@a: int 1
 *@b: int 2
 *Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;

}
