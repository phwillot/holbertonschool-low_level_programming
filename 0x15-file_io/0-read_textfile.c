#include "main.h"

/**
  * read_textfile - Reads a text file and prints it to the POSIX standard ouput
  * @filename: filetext
  * @letters: Numberf of letters it should print
  *
  * Return: Number of letters, if filename is NULL and write fails (0)
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	close(fd);

	if (write(STDOUT_FILENO, buf, i) == -1)
		return (0);
	free(buf);

	return (i);
}
