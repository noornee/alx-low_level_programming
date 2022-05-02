#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on succes. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}

