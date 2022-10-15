#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string to be printed
 * void: returns nothing
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	while (l > 0)
	{
		s--;
		_putchar(*s);
		l--;
	}
	_putchar('\n');
}
