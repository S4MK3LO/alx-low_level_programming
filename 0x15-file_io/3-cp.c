#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#define BUFFER_SIZE 1024

/**
 * print_usage:checks if file can open
 * @from_fd:The file copied from
 * @to_fd:The file copied into
 * @print_error:prints out error message
 * @argv:arguments vector
 * Return: Always 0
 */

void print_usage(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

void print_error(char *message, char *filename)
{
dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}

int main(int argc, char **argv)
{
if (argc != 3)
{
print_usage();
exit(97);
}

int from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
{
print_error("Can't read from file", argv[1]);
exit(98);
}

int to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (to_fd == -1)
{
print_error("Can't write to", argv[2]);
exit(99);
}

/*
 * main: check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

char buffer[BUFFER_SIZE];
ssize_t bytes_read;
while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
{
ssize_t bytes_written = write(to_fd, buffer, bytes_read);
if (bytes_written == -1)
{
print_error("Can't write to", argv[2]);
exit(99);
}
}

if (bytes_read == -1)
{
print_error("Can't read from file", argv[1]);
exit(98);
}

if (close(from_fd) == -1)
{
print_error("Can't close fd", argv[1]);
exit(100);
}

if (close(to_fd) == -1)
{
print_error("Can't close fd", argv[2]);
exit(100);
}
return (0);
}
