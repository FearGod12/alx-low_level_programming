#include "main.h"

/**
 * puts2 - prints every other character starting from the first
 * @str: the string to be printed
 * void: returns nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i]  < '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

