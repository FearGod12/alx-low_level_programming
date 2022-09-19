#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: string to be printed
 * void: returns nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
