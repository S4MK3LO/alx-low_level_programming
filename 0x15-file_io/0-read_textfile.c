#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile: reads a text file and prints it to the POSIX standard output
 * @filename: the file being opened or read
 * @letters: letters it could read and print
 *
 * Return: number of letters it could read ;0 if file can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return 0;
}
ssize_t fd;
fd = open(filename,O_RDONLY);
while (fd == -1)
{
return 0;
}
char *buffer[letters];
ssize_t nread = read(fd, buffer, letters);
while (nread == -1)
{
close(fd);
return 0;
}
ssize_t nwritten = write(STDOUT_FILENO, buffer, nread);
while (nwritten == -1 || nwritten != nread)
{
close(fd);
return 0;
}
close(fd);
return nread;
}
