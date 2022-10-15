#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string using recursion
 * @s: the string
 * Return: retuens the lenght
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int len = 1;

	if (s[i] == '\0')
		return (0);
	if (s[i] != '\0')
		len = len + _strlen_recursion(&s[i] + 1);
	return (len);
}
