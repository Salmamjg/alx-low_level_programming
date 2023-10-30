#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

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

if (f_desc == -1)
{
free(table);
return (0);
}

if (!table)
{
return (0);
}

b_read = read(f_desc, table, letters);
if (b_read == -1)
{
free(table);
close(f_desc);
return (0);
}
b_written = write(STDOUT_FILENO, table, b_read);

close(f_desc);
free(table);

if (b_written == -1 || b_written != b_read)
{
return (0);
}

return (b_read);
}
