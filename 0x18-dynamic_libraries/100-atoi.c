#include "main.h"

/**
 * _atoi - converts string to integers
 * @s: the string to be converted
 * Return: returns converted string or 0
 */
int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
		if (!(s[i] >= 0) &&  !(s[i] <= 9))
			i++;
		else
			res = res * 10 + s[i] - '0';
	return (res * sign);
}
