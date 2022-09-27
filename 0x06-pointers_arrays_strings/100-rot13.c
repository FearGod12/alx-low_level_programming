#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string to be decodes
 * Return: pointer to string decoded
 */
char *rot13(char *s)
{
	int i, j;
	char ch[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rotch[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
			s[i] = rotch[j];
		}
	}
}
