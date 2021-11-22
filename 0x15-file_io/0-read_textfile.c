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
	char buf[1024];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	i = read(fd, buf, letters);
	if (i == -1)
		return (0);
	buf[letters + 1] = '\0';

	if (write(STDOUT_FILENO, buf, i) == -1)
		return (0);

	close(fd);
	return (i);
}
