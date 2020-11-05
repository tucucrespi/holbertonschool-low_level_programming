#include "holberton.h"
/**
 * binary_to_uint - singly linked list
 * @b: integer
 *
 * Description: singly linked list node structure
 * Return: Holberton project
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int p = 1;
unsigned int i = 0;
int c;
unsigned int  len;


if (b == NULL)
return 0;

while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i]-'0';
i++;
}
return val;
}
