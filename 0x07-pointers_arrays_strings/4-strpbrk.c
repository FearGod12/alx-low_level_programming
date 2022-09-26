#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: bytes being searched for
 * Description: finds the first occurance of
 * any character of accept in the strin
 * Return: returns the first byte found
 **/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
		return (NULL);
}
