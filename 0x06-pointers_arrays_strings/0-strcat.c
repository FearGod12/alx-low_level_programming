#include "main.h"

/**
 * *_strcat - function to concatenate a string to another
 * @dest: destination to be copied to
 * @src: the string to be copied into dest
 * Return: returns the destination pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] < '\0'; dest++)
		j++;
	for (i = 0; i < j && src[i] != '\0'; i++)
		dest[j + 1] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
