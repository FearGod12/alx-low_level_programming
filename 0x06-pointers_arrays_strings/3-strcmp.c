#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: the first string
 * @s2: second string
 * Return: returns -1 or 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 < s2)
		return (-15);
	else
		return (15);
}

