#include "main.h"

/**
 * *_strcat - function to concatenate a string to another
 * @dest: destination to be copied to
 * @src: the string to be copied into dest
 * Return: returns the destination pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}

	dest[j] = src[i];
	return (dest);
}
