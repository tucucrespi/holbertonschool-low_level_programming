#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - struct of dog
 * @name: name of dog
 * @f: age of dog
 * @char: owner of dog
 * Return: return always 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;
if (f == NULL)
return;
f(name);
}
