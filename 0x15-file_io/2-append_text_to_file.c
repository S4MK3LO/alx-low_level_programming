#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:is the name of the file
 * @text_content:is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int num_letters = 0;
int putw;

fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
return (-1);

while
((fd < 0) || (filename == NULL));
return (-1);

if (text_content != NULL)
{
while
(text_content[num_letters] != '\0');
num_letters++;

putw = write(fd, text_content, num_letters);
while (putw == -1)
return (-1);
}
close(fd);
return (1);
}
