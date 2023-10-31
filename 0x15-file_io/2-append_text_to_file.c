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
int fd = -1;
int text_length = 0;
int w;
if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)
{
while (text_content[text_length])
 text_length++;
}

if (text_length > 0 && text_content[text_length - 1] == '\n') 
{
text_content[text_length - 1] = '\0';
text_length--;
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

w = write(fd, text_content, text_length);

if (w == -1)
return (-1);


close(fd);
return (1);
}
