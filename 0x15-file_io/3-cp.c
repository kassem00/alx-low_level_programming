#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
 * exit_with_error - Print usage error message and exit with error code 97
 * @message: print massge
 * @exit_code: exit code to return
 * Return: void
 */
void exit_with_error(char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s", message);
exit(exit_code);
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
int fd = open(filename, flags, mode);
if (fd == -1)
{
char message[100];
sprintf(message, "Error: Can't open file %s\n", filename);
exit_with_error(message, 97);
}
return (fd);
}
/**
 * copy_file - Copy the content of one file to another file
 * @source_file: File descriptor of the file to copy from
 * @destination_file: File descriptor of the file to copy to
 */
void copy_file(char *source_file, char *destination_file)
{
int source_fd = open_file(source_file, O_RDONLY, 0);
int destination_fd = open_file(destination_file,
O_WRONLY | O_CREAT | O_TRUNC, 0664);
char buffer[BUFFER_SIZE];
int num_read, num_written;
while ((num_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
num_written = write(destination_fd, buffer, num_read;
if (num_written == -1)
{
char message[100];
sprintf(message, "Error: Can't write to %s\n", destination_file);
exit_with_error(message, 99);
}
}
if (num_read == -1)
{
char message[100];
sprintf(message, "Error: Can't read from file %s\n", source_file);
exit_with_error(message, 98);
}
if (close(source_fd) == -1)
{
char message[100];
sprintf(message, "Error: Can't close file descriptor %d\n", source_fd);
exit_with_error(message, 100);
}

if (close(destination_fd) == -1)
{
char message[100];
sprintf(message, "Error: Can't close file descriptor %d\n", destination_fd);
exit_with_error(message, 100);
}
}

/**
 * main - Program that copies the content of a file into another file
 * @argc: Quantity of arguments
 * @argv: Input arguments
 * Return: 0 on success, otherwise 97, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
exit_with_error("Usage: cp file_from file_to\n", 97);
}
copy_file(argv[1], argv[2]);
return (0);
}
