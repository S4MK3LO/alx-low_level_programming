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
ssize_t t;
char *buf;
ssize_t w;

fd = open(filename, O_RDONLY);
while (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
return (0);

w = write(STDOUT_FILENO, buf, t);
t = read(fd, buf, letters);

close(fd);
free(buf);
return (w);
}
