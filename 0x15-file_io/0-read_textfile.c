#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file 
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print on success
 * or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
       	ssize_t bytes_read, bytes_written;
	char *text;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	bytes_read = read(fd, text, letters);
	if (bytes_read == -1)
		return (0);
	text[letters + 1] = '\0';
	close(fd);
	bytes_written = write(STDOUT_FILENO, text, bytes_read);
	if (bytes_written == -1)
		return (0);
	free(text);
	return (bytes_read);
}
