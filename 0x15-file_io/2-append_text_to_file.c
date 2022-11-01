#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content:  is a NULL terminated string to write to the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	unsigned int lenght;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd == -1)
		return (-1);
	lenght = _strlen(text_content);
	bytes_written = write(fd, text_content, lenght);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
