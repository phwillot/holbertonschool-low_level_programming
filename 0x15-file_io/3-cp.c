#include "main.h"

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
	int fd, fd2, characters, writen, closed;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((characters = read(fd, buf, 1024)) != 0)
	{
		if (characters == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
			exit(98);
		}
		writen = write(fd2, buf, characters);

		if (writen == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	closed = close(fd);
	if (closed == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	closed = close(fd2);
	if (closed == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}
