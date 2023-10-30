#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - function that creates a file with specified content and permissions
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to write to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (filename == NULL)
{
return (-1);
}

if(fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
ssize_t written = write(fd, text_content,strlen(text_content));
close(fd);

if(written == -1)
return (-1);
}
return (1);
}
