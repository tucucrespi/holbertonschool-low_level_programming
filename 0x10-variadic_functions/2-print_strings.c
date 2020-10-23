#include "variadic_functions.h"
/**
 * print_strings - sog
 * @separator: name of dog
 * @n: name of dog
 * Return: return always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *strings;

va_start(valist, n);
for (i = 0; i < n; i++)
{
strings = va_arg(valist, char*);
if (strings == NULL)
{
printf("(nil)\n");

return;

}
printf("%s", strings);
if (separator != NULL)
{
if (i < (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(valist);
}
