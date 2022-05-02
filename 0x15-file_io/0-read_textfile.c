#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * or 0 if the file cannot be opened or read
 * or 0 if the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nrd, nwr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
