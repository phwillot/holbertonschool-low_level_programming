#include "main.h"

/**
  * append_text_to_file - Appends text at the end of a file.
  * @filename: new file
  * @text_content: content of the file
  *
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *buf;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		if (!filename)
			return (-1);
		else
			return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

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
