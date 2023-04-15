#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void error_exit(const char *message, int exit_code);
char *create_buffer(size_t size);
void close_file(int fd);
/**
 * main - Program that copies the content of a file into another file
 * @argc: quantity of arguments
 * @argv: input arguments
 * Return: 0 on success, otherwise exit with an error code
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;
if (argc != 3)
{
error_exit("Usage: cp file_from file_to\n", 97);
}
buffer = create_buffer(BUFFER_SIZE);
from = open(argv[1], O_RDONLY);
if (from == -1)
{
error_exit("Error: Can't read from file %s\n", 98);
}
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
{
error_exit("Error: Can't write to %s\n", 99);
}
while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
{
w = write(to, buffer, r);
if (w != r)
{
error_exit("Error: Can't write to %s\n", 99);
}
}
close_file(from);
close_file(to);
free(buffer);
return (0);
}
/**
 * error_exit - find error and exit
 * @message: input message
 * @exit_code: input exit_code
 * Return: void.
 */
void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, message, exit_code);
exit(exit_code);
}
/**
 * create_buffer - find error and exit
 * @size: input size
 * Return: void.
 */
char *create_buffer(size_t size)
{
char *buffer = malloc(size);
if (buffer == NULL)
{
error_exit("Error: Can't allocate memory\n", 99);
}
return (buffer);
}
/**
 * close_file - close file function
 * @fd: input file
 * Return: void.
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
error_exit("Error: Can't close fd %d\n", 100);
}
}
