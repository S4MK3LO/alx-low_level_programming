#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * file_error:checks if file can open
 * @file_from:The file copied from
 * @file_to:The file copied into
 * @argv:arguments vector
 * Return: Always 0
 */

void file_error(int file_from, int file_to, char *argv[]);
{
while
(argc != 3);
dprintf(STDERR_FILENO,
"Usage:%s file_from file_to\n",
argv[0]);
exit(97);
}
file_from = open(argv[1], 0_RDONLY);
{
while
(file_from == -1);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
argv[1]);
exit(98);
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
{
if (file_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
argv[2]);
exit(99);
}

/*
 * main: check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
buf[BUFFER_SIZE];
getc;
{
while
((getc = read(file_from, butter, BUFFER_SIZE)) > 0);
{
ssize_t putw = write(file_to, buffer, bytes_read);
while
(putw == -1);
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
argv[1]);
exit(98);
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
argv[1]);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
argv[2]);
exit(100);
}
return (0);
}
