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
	int buff_size = 18, fd, rd, wr;
	char buff[18];

	if (argc != 2)
	{
		printf("ERROR ARGUMENT NUMBER WRONG\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == (-1))
	{
		printf("Error: Can't open elf file\n");
		exit(98);
	}
	rd = read(fd, buff, buff_size);
	if (rd == (-1))
	{
		printf("Error: Can't read from file \n");
		exit(98);
	}
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == (-1))
	{
		printf("Error: Can't write to stdout\n");
		exit(98);
	}
	if (close(fd) == (-1))
	{
		printf("Error: Can't close fd FD_VALUE\n");
		exit(98);
	}
	return (0);
}
