#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Program that copies the content of a file into another file
 * @argc: quantity of arguments
 * @argv: input arguments
 * Return: 0 on success, otherwise exit with an error code
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_fr, num_read, num_wr;
	char buf[1024];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((num_read = read(fd_fr, &buf, sizeof(buf))) > 0)
	{
		num_wr = write(fd_to, &buf, num_read);
		if (num_wr == -1 || num_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_fr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fr);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
