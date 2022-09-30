#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: the first string
 * @s2: second string
 * Return: returns -1 or 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
