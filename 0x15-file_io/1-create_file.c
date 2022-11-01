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
	ssize_t bytes_written;
	unsigned int lenght;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		lenght = 0;
		text_content = "";
	}
	else
		lenght = _strlen(text_content);
	bytes_written = write(fd, text_content, lenght);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
