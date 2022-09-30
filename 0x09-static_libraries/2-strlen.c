#include "main.h"

/**
 * _strlen - returns the lenght of string
 * @s: string whose lenght is to be returned
 * Return: returns the lenght of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);

}
