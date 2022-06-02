#include "main.h"

/**
 * get_length - returns the number of characters in a string
 * @str: string to count
 *
 * Return: length of string
 */
int get_length(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 * 
 * Return: 1 - success, -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}
	else
		length = _strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(fd);
        return (1);
}