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
 * create_file - create a file
 * @filename: name of the file to be created
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written;
	int lenght;
	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT | O_EXCL, 600);
	if (fd == -1)
		return (-1);
	lenght = _strlen(text_content);
	bytes_written = write(filename, text_content, lenght)
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
