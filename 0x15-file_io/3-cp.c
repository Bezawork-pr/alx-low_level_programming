#include "main.h"
/**
 * main - entry point
 *
 * @argc: count of argument
 * including function name
 *
 * @argv: arguments
 *
 * Return: 0 on SUCCESS
 * Usage: cp file_from file_to
 * if number of ac != 3 exit(97)
 * and print Usage: cp file_from file_to
 * if file_to exist trucate it
 * if file_from does not exist
 * or you cant read it exit with exit(98)
 * if write fail exit(99)
 * if file desciptor fails to close
 * exit(100)
 * when you create permision rw-rw-r--
 * otherwise dont change file permision
 * read 1024 bytes
 * initate rd with 1 to start the loop
 */
int main(int argc, char *argv[])
{
	int buff_size = 1024, fd, fd2, rd = 1, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	umask(0);
	fd = open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC, 0664);
	if (fd == (-1))
	{                                                                                                               
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);                                          
		exit(99);                                                                                               
	} 
	fd2 = open(argv[1], O_RDONLY);
	if ((!argv[1]) | (fd2 == (-1)))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[2]);
		exit(98);
	}
	while (rd)
	{
		rd = read(fd2, buff, buff_size);
		if (rd == (-1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fd, buff, rd);
		if (wr == (-1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
	}
	close(fd);
	close(fd2);
	if ((close(fd) == (-1)) | (close(fd2) == (-1)))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
