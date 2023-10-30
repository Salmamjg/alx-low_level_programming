#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of file.
 * @filename: the name of the file.
 * @text_content: a NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_APPEND);

if (filename == NULL)
{
return (-1);
}

if (fd == -1)
return (-1);

if (text_content != NULL)
{
ssize_t w = write(fd, text_content, strlen(text_content));
close(fd);

if (w == -1)
return (-1);
}
else
{
close(fd);
}
return (1);
}
