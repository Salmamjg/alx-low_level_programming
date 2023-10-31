#include <stdio.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - function that reads and prints the content of a file.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *Return: the actual number of letters read and printed, or 0 if it failed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f_desc = open(filename, O_RDONLY);
if(!filename)
return (0);
if(f_desc == -1)
return (0);
char *table = malloc(letters);
if (!table)
{
close(f_desc);
return (0);
}
ssize_t b_read = read(f_desc, table, letters);
close(f_desc);
if (b_read == -1)
{
free (table);
return (0);
}
ssize_t b_write = write(STDOUT_FILENO, table, b_read);
free(table);
return (b_write == -1 || b_write != b_read ? 0 : b_read);
}
