#include "main.h"
/**
 * read_textfile - read a text file & print it to the POSIX stdout
 * @filename: file's name
 * @letters: number of letter to to read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, read_letters;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_letters = read(fd, buf, letters);
	if (read_letters == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	for (i = 0; i < read_letters; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}

	}
	close(fd);
	free(buf);
	return (read_letters);
}

