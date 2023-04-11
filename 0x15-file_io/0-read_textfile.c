#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:text file read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t read;
char *buf;
ssize_t write;

fd = open(filename, O_RDONLY);
while (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
return (0);

write = write(STDOUT_FILENO, buf, read);
read = read(fd, buf, letters);

close(fd);
free(buf);
return (write);
}
