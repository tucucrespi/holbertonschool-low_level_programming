#include "holberton.h"

/**
 * create_file - singly linked list
 * @filename: integer
 * @text_content: integer
 * Return: Holberton project
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int i;

if (filename == NULL)
{
return (0);
}
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY | 0600);
if (fd == -1)
{
return (-1);
}
for(i = 0; text_content[i] != '\0'; i++)
{
if (text_content == NULL)
{
text_content = "";
}
}
write(fd, text_content, i);
close(fd);
return (1);
}
