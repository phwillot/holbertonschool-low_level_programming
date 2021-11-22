#include "main.h"

/**
  * create_file - Creates a file.
  * @filename: new file
  * @text_content: content of the file
  *
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *buf;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (!text_content)
		i = 1;

	buf = malloc(sizeof(char) * i);
	if (!buf)
		return (-1);

	i = 0;

	while (text_content[i])
	{
		buf[i] = text_content[i];
		i++;
	}

	if (write(fd, buf, i) == -1)
		return (-1);

	close(fd);
	free(buf);

	return (1);
}
