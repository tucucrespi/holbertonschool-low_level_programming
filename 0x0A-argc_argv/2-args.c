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
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
