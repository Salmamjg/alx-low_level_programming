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
ssize_t b_r;
ssize_t b_w;
f_desc = open(filename, O_RDONLY);
if (f_desc == -1)
return (0);
table = malloc(sizeof(char) * letters);
b_r = read(f_desc, table, letters);
b_w = write(STDOUT_FILENO, table, b_r);
free(table);
close(f_desc);
return (b_w);
}
