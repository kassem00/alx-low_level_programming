#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Program that copies the content of a file into another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or the error code on failure
 */
int main(int argc, char *argv[])
{
int fd1, fd2;
ssize_t read_in, write_out;
char buf[1024];
mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
if (fd2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd1);
return (99);
}
while ((read_in = read(fd1, buf, 1024)) > 0)
{
write_out = write(fd2, buf, read_in);
if (write_out == -1 || write_out != read_in)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd1);
close(fd2);
return (99);
}
}
if (read_in == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd1);
close(fd2);
return (98);
}
if (close(fd1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
return (100);
}
if (close(fd2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
return (100);
}
return (0);
}
