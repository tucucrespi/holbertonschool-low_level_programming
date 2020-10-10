#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - prints buffer in hexa
 * @argc: number of command line arguments
 * @argv: number of command line arguments
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
int a, b, mult;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
mult = a *b;
printf("%d\n", mult);
}
else
printf("Error\n");
return (0);
}
