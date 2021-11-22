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
	int fd, fd2, number;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!av[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY, 0664);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1 || fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (-1);

	number = read(fd, buf, 1024);
	if (write(fd2, buf, number) == -1)
		return (-1);

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd));
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd2));
		exit(100);
	}
	free(buf);
	return (0);
}
