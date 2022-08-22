#include "main.h"
/**
 * read_textfile - Read afrom a file
 * and print on the stdout
 *
 * @filename: file from where to read and
 * print from
 *
 * @letters: How many letters to print
 *
 * Return: Number of letters it could read
 * and write
 * 0 if the file cannot be opened or read
 * 0 if file name is NULL
 * 0 if write fully or partially fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	return (rd);
}
