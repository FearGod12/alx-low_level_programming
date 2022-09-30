#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: destination to he copied to
 * @src: source to be copied from
 * @n: number of bytes
 * Return: returns destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int k = n;
	int j = 0;

	for (i = 0; i < k; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
