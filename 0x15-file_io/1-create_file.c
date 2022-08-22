#include "main.h"
/**
 * create_file - creates a function that creates a file
 *
 * @filename: Name of the file to create
 *
 * @text_content: NULL terminated string
 * to write to the file created
 *
 * Return: 1 on SUCCESS
 * -1 on FAILURE
 * Ethier if File cannot be created
 * OR CANNOT be written
 * create a file with permision rw--------
 * if the file exits DONOT change permision
 * -1 if filename is NULL
 *  if text_content is NULL create an emptyfile
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int length = 0;

	if (!text_content)                                                                                                      
        {                                                                                                                       
                return (-1);                                                                                                    
        } 	
	while (text_content[length] != '\0')
		length++;
	umask(0);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	wr = write(fd, text_content, length);
	if (wr == (-1))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
