#include "holberton.h"
/**
 * *_strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 * Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, i2 = 0;
while (haystack[i] != '\0')
{
while (needle[i2] != '\0' && (haystack[i] == needle[0]))
{
if (haystack[i + i2] == needle[i2])
{
i2++;
}
else
{
break;
}
}
if (needle[i2] != '\0')
{
i2 = 0;
i++;
}
else
{
return (haystack + i);
}
}
return (0);
}
