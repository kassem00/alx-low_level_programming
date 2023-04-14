#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * main - Program that copies the content of a file into another file
 * @argc: Quantity of arguments
 * @argv: Input arguments
 *
 * Return: 0 on success, otherwise exit with appropriate error codes.
 */
int main(int argc, char *argv[])
{
int fd_fr, file_to, num_re, num_wr;
char buff[BUFF_SIZE];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd_fr = open(argv[1], O_RDONLY);
if (fd_fr == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
while ((num_re = read(fd_fr, buff, BUFF_SIZE)) > 0)
{
num_wr = write(file_to, buff, num_re);
if (num_wr == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (num_re == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
num_wr = close(fd_fr);
if (num_wr == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd_fr %d\n", fd_fr), exit(100);
num_wr = close(file_to);
if (num_wr == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd_fr %d\n", file_to), exit(100);
return (0);
}
