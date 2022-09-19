#include "main.h"

/**
 * puts2 - prints every other character starting from the first
 * @str: the string to be printed
 * void: returns nothing
 */
void puts2(char *str)
{
	while (*str < '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}

