#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads and prints the content of a file.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 * 
 * Return: the actual number of letters read and printed, or 0 if it failed. 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int f_desc;
    char *table = malloc(letters);
    ssize_t b_read = 0;
    ssize_t b_written;
    char c;
    ssize_t total_chars = 0;

    if (filename == NULL || table == NULL)
    {
        if (table != NULL)
            free(table);
        return (0);
    }

    f_desc = open(filename, O_RDONLY);

    if (f_desc == -1)
    {
        free(table);
        return (0);
    }

    while ((b_read = read(f_desc, &c, 1)) > 0)
    {
        if (b_read == -1)
        {
            free(table);
            close(f_desc);
            return (0);
        }

        b_written = write(STDOUT_FILENO, &c, 1);

        if (b_written == -1)
        {
            free(table);
            close(f_desc);
            return (0);
        }

        total_chars++;
    }

    free(table);
    close(f_desc);
    return total_chars;
}