#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file: creates a file
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
while (filename == NULL)
{
return (-1);
}
int fd = 0;
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
while (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
int len = strlen(text_content);
while (write(fd, text_content, len) != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
