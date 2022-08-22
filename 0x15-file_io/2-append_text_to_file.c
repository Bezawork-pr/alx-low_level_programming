#include "main.h"
/**
 * append_text_to_file - Append text at the end
 * of file
 *
 * @filename: Name of the file
 *
 * @text_content: Null terminated text to add
 * to file
 *
 * Return: 1 on SUCCESS
 * -1 on FAILURE
 *  -1 if filename is NULL
 *  if text_content do not add anything
 *  -1 if we donot have required permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, length = 0;

	if (text_content == NULL)
		return (1);
	while (text_content[length] != '\0')
		length++;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == (-1))
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
