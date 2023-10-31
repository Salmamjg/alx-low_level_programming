#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>

void error_message(int code, const char *format, ...);

/**
 * error_message - Print an error message and exit
 * @code: The exit code
 * @format: The message format
 */
void error_message(int code, const char *format, ...)
{
va_list args;
va_start(args, format);
vfprintf(stderr, format, args);
va_end(args);
exit(code);
}

/**
 * main - Copy the content of a file to another file
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
        error_message(97, "Usage: %s file_from file_to\n", argv[0]);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_message(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
        error_message(99, "Error: Can't write to %s\n", argv[2]);

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
            error_message(99, "Error: Can't write to %s\n", argv[2]);
    }

    if (bytes_read == -1)
        error_message(98, "Error: Can't read from file %s\n", argv[1]);

    if (close(fd_from) == -1)
        error_message(100, "Error: Can't close fd %d\n", fd_from);
    if (close(fd_to) == -1)
        error_message(100, "Error: Can't close fd %d\n", fd_to);

    return 0;
}
