#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string whose half is to be printed
 * void: returns nothing
 */
void puts_half(char *str)
{
	int i, j, max;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
