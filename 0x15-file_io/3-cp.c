#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int copy_file(char *source_path, char *destination_path) {
    int fd, fd_to;
    int check_in, check_out;
    char buff[BUFF_SIZE];

    fd = open(source_path, O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
        return 1;
    }

    fd_to = open(destination_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_path);
        return 2;
    }

    check_in = check_out = 1;
    while (check_in) {
        check_in = read(fd, buff, BUFF_SIZE);
        if (check_in == -1) {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
            return 1;
        }

        if (check_in > 0) {
            check_out = write(fd_to, buff, check_in);
            if (check_out == -1) {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_path);
                return 2;
            }
        }
    }

    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        return 3;
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        return 3;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    int result;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return 97;
    }

    result = copy_file(argv[1], argv[2]);
    return result;
}

