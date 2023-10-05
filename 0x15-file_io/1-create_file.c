#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates afile
 * @filename: name of the file
 * @text_content: content of file no of texts
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int length, fd, wr;
if (filename == NULL)
	return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
	return (-1);
}
if (text_content != NULL)
{
	for (length = 0; text_content[length];)
		length++;
}
wr = write(fd, text_content, length);
if (fd == -1 || wr == -1)
	return (-1);

close(fd);
return (1);
}
