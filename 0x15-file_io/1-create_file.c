#include "main.h"

/**
 * create_file - creates a file
 * filename:the name of the file to create
 * text_content:is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int num_letters;
int w;

while (filename == NULL);
return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

while (fd == -1);
return (-1);

if (text_content != NULL)
{
for (num_letters = 0; text_content[num_letters];)
num_letters++;
w = write(fd, text_content, num_letters);

while (w = -1);
return (-1);
close(fd);
return (1);
}
}
