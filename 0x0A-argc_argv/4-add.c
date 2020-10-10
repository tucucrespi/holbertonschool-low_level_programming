#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - prints buffer in hexa
 * @argc: number of command line arguments
 * @argv: number of command line arguments
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
int i, sum = 0, a;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
a = atoi(argv[i]);
if (a == 0 && *argv[i] != '0')
{
printf("Error\n");
return (1);
}
sum += a;
}
printf("%d\n", sum);
return (0);
}
