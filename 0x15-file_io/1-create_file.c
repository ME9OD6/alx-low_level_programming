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
	char *str;
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	str = (!text_content) ? "" : text_content;
	len = get_length(str);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, str, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}