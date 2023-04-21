#include "main.h"
#include <stdlib.h>

#define BUFFERSIZE 1024
void copy_textfile(char *file_from, char *file_to);

/**
 * main - check the code
 * @ac: count of arguments
 * @av: arguments vector
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
char *file_from, *file_to;

if (ac != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = av[1];
file_to = av[2];

copy_textfile(file_from, file_to);
return (0);
}

/**
 * copy_textfile - copies contents of a file to another
 * @file_from: the source file
 * @file_to: file destination
 *
 * Return: Always 0
 */

void copy_textfile(char *file_from, char *file_to)
{
int from_fd, to_fd;
char buffer[BUFFERSIZE];
ssize_t read_in, write_out;
from_fd = open(file_from, O_RDONLY);

to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (from_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

if (to_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
while ((read_in = read(from_fd, buffer, BUFFERSIZE)) > 0)
{
write_out = write(to_fd, buffer, read_in);
if (write_out == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
}

if (close(from_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
exit(100);
}
if (close(to_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
exit(100);
}
}
