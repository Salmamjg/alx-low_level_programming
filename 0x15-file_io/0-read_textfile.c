#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads and prints the content of a file.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 *Return: the actual number of letters read and printed, or 0 if it failed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int f_desc;
char *table = malloc(sizeof(char) * (letters));
ssize_t b_read;
ssize_t b_written;

if (filename == NULL)
{
return (0);
}

f_desc = open(filename, O_RDONLY);

if (f_desc == -1 || table == NULL)
{
return (0);
}

b_read = read(f_desc, table, letters);
b_written = write(STDOUT_FILENO, table, b_read);

close(f_desc);
free(table);
return (b_written);
}
