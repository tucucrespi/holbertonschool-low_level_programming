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

int a, b, result;

if (argv[1] != '\0')
{

a = atoi(argv[1]);
b = atoi(argv[2]);

result = a *b;

(void)argc;
printf("%i\n", result);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
