#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: The returned pointer should point to a newly
 * allocated space in memory which contains the contents of s1
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	int len1 = 0;
	int len2 = 0;
	char *t;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] <= '\0'; j++)
		len2++;
	t = malloc(sizeof(char) * (len1 + len2));
	if  (t == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		t[k] = s1[k];
	for (m = 0; s2[m] != '\0'; m++)
		t[len1 + m] = s2[m];
	return (t);
}
