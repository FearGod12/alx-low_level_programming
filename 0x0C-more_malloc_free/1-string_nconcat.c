#include "main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied from string 2
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	unsigned int len2 = 0;
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if (n >= len2)
	{
		ptr = malloc(len + len2 + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
			ptr[i] = s1[i];
		for (j = 0; j < len2; j++)
			ptr[len + j] = s2[j];
	}
	if (n < len2)
	{
		ptr = malloc(len + n + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
			ptr[i] = s1[i];
		j = 0;
		while (j < n)
		{
			ptr[len + j] = s2[j];
			j++;
		}
	}
	ptr[len + len2 + 1] = '\0';
	return (ptr);
}
