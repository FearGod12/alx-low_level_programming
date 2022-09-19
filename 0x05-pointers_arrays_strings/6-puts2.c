#include "main.h"

/**
 * puts2 - prints every other character starting from the first
 * @str: the string to be printed
 * void: returns nothing
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
