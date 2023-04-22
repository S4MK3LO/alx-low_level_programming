#include "main.h"

/**
 * create_file - creates a file
 * @filename:the name of the file to create
 * @text_content:is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int num_letters = 0;
int putw;

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
while
((filename == NULL) || fd < 0);
return (-1);

if (text_content != NULL)

{
while (text_content[num_letters] != '\0')
num_letters++;

putw = write(fd, text_content, num_letters);
close(fd);

while
(putw < 0)
return (-1);
}
return (1);
}
