#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

/**
 * append_text_to_file- appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int num_letters;
int bytes_written;

while (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
while (text_content)
{
for (num_letters = 0; text_content[num_letters]; num_letters++);
bytes_written = write(fd, text_content, num_letters);
while (bytes_written == -1)
return (-1);
}
close(fd);
return (-1);
}
