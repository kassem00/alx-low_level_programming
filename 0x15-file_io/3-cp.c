#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Program that copies the content of a file into another file
 * @argv: input arguments
 * @argc: quantity of arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_fr, num_read, num_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_fr);
		return (99);
	}

	while ((num_read = read(fd_fr, &buf, sizeof(buf))) > 0)
	{
		num_wr = write(fd_to, &buf, num_read);
		if (num_wr != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_fr);
			close(fd_to);
			return (99);
		}
	}

	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_fr);
		close(fd_to);
		return (98);
	}

	if (close(fd_fr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fr);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}

	return (0);
}
