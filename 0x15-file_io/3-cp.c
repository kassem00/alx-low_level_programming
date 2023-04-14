#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void usage_error(void);
int open_file(char *filename, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to);

/**
 * main - Program that copies the content of a file into another file
 * @argc: Quantity of arguments
 * @argv: Input arguments
 * Return: 0 on success, otherwise 97, 98, 99, or 100 on error
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to;
if (argc != 3)
usage_error();
fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2],
O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
copy_file(fd_from, fd_to);
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}

/**
 * usage_error - Print usage error message and exit with error code 97
 */
void usage_error(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/**
 * open_file - Open a file with specified flags and mode
 * @filename: Name of the file to open
 * @flags: Flags to use when opening the file
 * @mode: Mode to use when creating a file
 * Return: File descriptor on success, otherwise -1 on error
 */
int open_file(char *filename, int flags, mode_t mode)
{
int fd;

fd = open(filename, flags, mode);
if (fd == -1)
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename), exit(98);
return (fd);
}

/**
 * copy_file - Copy the content of one file to another file
 * @fd_from: File descriptor of the file to copy from
 * @fd_to: File descriptor of the file to copy to
 */
void copy_file(int fd_from, int fd_to)
{
char buffer[1024];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
dprintf(STDERR_FILENO, "Error: Can't write to file\n"), exit(99);
}
if (bytes_read == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file\n"), exit(98);
}
