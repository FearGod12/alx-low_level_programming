#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string
 * Return:  function returns a pointer to a new string which is
 * a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *t;
	int len = 0;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	t = malloc(sizeof(char) * len);
	if (t == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		t[j] = str[j];
	}
	return (t);

}
