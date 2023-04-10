#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*(s+len) != '\0')
{
len++;
}
return len;
}
/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, fd_write, len;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0664);
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
