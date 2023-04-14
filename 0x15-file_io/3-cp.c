#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void exit_with_error(char *message, int exit_code)
{
    dprintf(STDERR_FILENO, "%s", message);
    exit(exit_code);
}

int open_file(char *filename, int flags, mode_t mode)
{
    int fd = open(filename, flags, mode);
    if (fd == -1)
    {
        char message[100];
        sprintf(message, "Error: Can't open file %s\n", filename);
        exit_with_error(message, 97);
    }
    return fd;
}

void copy_file(char *source_file, char *destination_file)
{
    int source_fd = open_file(source_file, O_RDONLY, 0);
    int destination_fd = open_file(destination_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    char buffer[BUFFER_SIZE];
    int num_read, num_written;

    while ((num_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
    {
        if ((num_written = write(destination_fd, buffer, num_read)) == -1)
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

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        exit_with_error("Usage: cp file_from file_to\n", 97);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}
