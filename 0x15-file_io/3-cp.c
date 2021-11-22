#include "main.h"

#define BUFSIZE 1024

/**
  * main - Entry point
  * @ac: number of arguments.
  * @av: array of string containaing arguments
  *
  * Description: Copies the content of a file to another file.
  *
  * Return: Always (0)
  */

int main(int ac, char **av)
{
	int fd, fd2, number, testWrite;
	char buf[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((number = read(fd, buf, BUFSIZE)) != 0)
	{
		if (number == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]), exit(98);

		testWrite = write(fd2, buf, number);

		if (testWrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd)), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd2)), exit(100);

	return (0);
}
