#include "main.h"
/**
 * create_file - creates a file with the given name and writes the given
 * text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, fd_write, len;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
len = _strlen(text_content);
fd_write = write(fd, text_content, len);
if (fd_write == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
{
len++;
}
return (len);
}
