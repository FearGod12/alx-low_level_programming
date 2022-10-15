#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: string to be checked
 * @c: character to be searched for
 * Return: returns pointer to first occurence of character
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
