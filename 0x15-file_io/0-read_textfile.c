#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reading a text file
 * @filename: name of the file
 * @letters: reads theno of letters printedd
 * Return: 0 if file can't be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t nord, nowr;
char *buffer;
if (filename == NULL)
{
	return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
	return (0);
}
buffer = malloc(sizeof(char) * letters);
nord = read(fd, buffer, letters);
nowr = write(STDOUT_FILENO, buffer, nord);
free(buffer);
close(fd);
return (nowr);
}
