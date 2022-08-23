#include "main.h"
/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: this is arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, rd, wr;

	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == (-1))
		return (1);
	rd = read(fd, argv[1], 18;
	if (rd == (-1))
		return (1);
	wr = write(STDOUT_FILENO, argv[1], 18);
	if (wr == (-1))
		return (1);
	close(fd);
	return (0);

}
