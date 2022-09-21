#include "main.h"

/**
 * *string_toupper - converts lower case to upper
 * @s: the string to be converted to upper case
 * Return: returns the string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
