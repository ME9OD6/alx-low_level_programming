#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: if success return number of letter, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd;
        char *buf;
        ssize_t bytes_read, bytes_written;

        if (filename == NULL)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);

        buf = malloc(sizeof(char) * letters + 1);
        if (buf == NULL)
                return (0);

        bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

        bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(buf);

	return (bytes_read);
}